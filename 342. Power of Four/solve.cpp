#include <iostream>
#include <cmath>

class Solution
{
public:
    bool isPowerOfFour(int n)
    {
        if (n <= 0)
            return false;

        // Calculate the logarithm base 4 of n using the change of base formula
        double logBase4 = log(n) / log(4); // log(n) / log(4) = log4(n)


        // Check if the result is an integer
        return floor(logBase4) == logBase4;  // If the floor of the result is equal to the result, then it is an integer
    }
};

int main()
{
    Solution solution;

    // Test cases
    int test1 = 16; // Expected output: true
    int test2 = 5;  // Expected output: false
    int test3 = 1;  // Expected output: true

    // Printing the results
    std::cout << "Is " << test1 << " a power of four? " << (solution.isPowerOfFour(test1) ? "true" : "false") << std::endl;
    std::cout << "Is " << test2 << " a power of four? " << (solution.isPowerOfFour(test2) ? "true" : "false") << std::endl;
    std::cout << "Is " << test3 << " a power of four? " << (solution.isPowerOfFour(test3) ? "true" : "false") << std::endl;

    return 0;
}
