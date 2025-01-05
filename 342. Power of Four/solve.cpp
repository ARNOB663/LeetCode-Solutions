#include <iostream>
#include <cmath>
using namespace std;
class Solution
{
public:
    bool isPowerOfFour(int n)
    {
        if (n <= 0)
            return false;
        // Calculate the logarithm base 4 of n using the change of base formula
        double logBase4 = log(n) / log(4);
        // Check if the result is an integer
        return floor(logBase4) == logBase4;  // If the floor of the result is equal to the result, then it is an integer
    }
};
int main()
{
    Solution solution;
    int test1 = 16; // Expected output: true
    int test2 = 5;  // Expected output: false
    int test3 = 1;  // Expected output: true
    // Function call
    cout << solution.isPowerOfFour(test1) << endl;
    cout << solution.isPowerOfFour(test2) << endl;
    cout << solution.isPowerOfFour(test3) << endl;

    return 0;
}
