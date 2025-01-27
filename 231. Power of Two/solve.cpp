#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false; // Powers of 2 are positive
        
        // Keep dividing n by 2 while it is divisible
        while (n % 2 == 0) {
            n /= 2;
        }
         // If n is reduced to 1, it is a power of 2
        if (n == 1) {
            return true;
        } else {
            return false;
        }
    }
};

int main() {
    Solution solution;
    int testCases[] = {1, 2, 4, 8, 16, 0, -4, 18, 1024, 2048, 3};
    int numTests = sizeof(testCases) / sizeof(testCases[0]);

    cout << "Testing isPowerOfTwo function:" << endl;
    for (int i = 0; i < numTests; i++) {
        int n = testCases[i];
        bool result = solution.isPowerOfTwo(n);
        cout << "Input: " << n << " -> " << (result ? "True" : "False") << endl;
    }
    return 0;
}
