



Left Factoring of a Grammar

#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

map<string, vector<string>> grammar;

string findCommonPrefix(const vector<string>& productions) {
    if (productions.empty()) return "";

    string prefix = productions[0];
    for (const string& prod : productions) {
        int i = 0;
        while (i < prefix.size() && i < prod.size() && prefix[i] == prod[i])
            i++;
        prefix = prefix.substr(0, i);
        if (prefix.empty()) break;
    }
    return prefix;
}

void leftFactorGrammar() {
    map<string, vector<string>> newGrammar;

    for (auto& [nonterminal, productions] : grammar) {
        string prefix = findCommonPrefix(productions);
        if (!prefix.empty() && count_if(productions.begin(), productions.end(),
            [&](const string& p) { return p.find(prefix) == 0; }) > 1) {

            string newNonterminal = nonterminal + "'";
            vector<string> updatedOriginal;
            vector<string> newProductions;

            for (string& prod : productions) {
                if (prod.find(prefix) == 0) {
                    string suffix = prod.substr(prefix.length());
                    newProductions.push_back(suffix.empty() ? "ε" : suffix);
                } else {
                    updatedOriginal.push_back(prod);
                }
            }

            updatedOriginal.push_back(prefix + newNonterminal);
            newGrammar[nonterminal] = updatedOriginal;
            newGrammar[newNonterminal] = newProductions;
        } else {
            newGrammar[nonterminal] = productions;
        }
    }

    grammar = newGrammar;
}

void printGrammar() {
    for (auto& [nonterminal, productions] : grammar) {
        cout << nonterminal << " -> ";
        for (size_t i = 0; i < productions.size(); ++i) {
            cout << productions[i];
            if (i != productions.size() - 1)
                cout << " | ";
        }
        cout << endl;
    }
}

int main() {
    // Example grammar for left factoring
    grammar["A"] = {"ab", "ac", "ad"};

    cout << "Original Grammar:\n";
    printGrammar();

    leftFactorGrammar();

    cout << "\nLeft Factored Grammar:\n";
    printGrammar();

    return 0;
}

Input:

A - > a | aB | 
B - > b | 
C - > c | 
S - > AB | AC |




