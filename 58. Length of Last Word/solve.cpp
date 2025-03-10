#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        int counter = 0;

        // Start from the end and skip trailing spaces
        int i = n - 1;
        while (i >= 0 && s[i] == ' ') {
            i--;
        }
        n = i;

        // Count the length of the last word
        for (i = n; i >= 0; i--) {
            if (s[i] != ' ') {
                counter++;
            } else {
                break;
            }
        }
        return counter;
    }
};

int main() {
    Solution solution;
    string testString;

    cout << "Enter a string: ";
    getline(cin, testString);

    int result = solution.lengthOfLastWord(testString);
    cout << "The length of the last word is: " << result << endl;
    return 0;
}
