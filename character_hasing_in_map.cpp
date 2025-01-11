#include <iostream>
#include <map>
using namespace std;

int main() {
    // character hashing in map 
    string input;
    cin >> input;
    int n = input.length();

    // pre-compute the frequency of each character
    map<char, int> mp;
    for (int i = 0; i < n; i++) {
        mp[input[i]]++;
    }

    // print the keys of the map
    for (auto it : mp) {
        cout << it.first << endl;
    }

    int q;
    cin >> q;
    // query
    while (q--) {
        char character;
        cin >> character;
        cout << mp[character] << endl; // fetch and print the count of the character
    }

    return 0;
}