#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // Mathematical Formula Approach
        int n = nums.size();
        int total = n * (n + 1) / 2; // Sum of the first n natural numbers
        int sum = 0;

        for (int num : nums) {
            sum += num;
        }

        // If the difference doesn't yield the missing number, use hashing approach as a fallback
        if (total - sum >= 0) {
            cout << "Using Mathematical Formula Approach: ";
            return total - sum;
        }

        // Hashing Approach (Fallback)
        vector<int> hass(n + 1, 0); // Initialize hash array with size n+1 and all values set to 0

        // Mark the presence of numbers in the hash array
        for (int i = 0; i < nums.size(); i++) {
            hass[nums[i]] = 1;
        }

        // Find the missing number by checking for the first 0 in the hash array
        for (int i = 0; i <= n; i++) {
            if (hass[i] == 0) {
                cout << "Using Hashing Approach: ";
                return i;
            }
        }

        return -1; // Default case (should not occur if input is valid)
    }
};

int main() {
    Solution sol;

    // Test Case 1
    vector<int> nums1 = {3, 0, 1};
    cout << "Missing number: " << sol.missingNumber(nums1) << endl; // Output: 2

    // Test Case 2
    vector<int> nums2 = {0, 1};
    cout << "Missing number: " << sol.missingNumber(nums2) << endl; // Output: 2

    // Test Case 3
    vector<int> nums3 = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    cout << "Missing number: " << sol.missingNumber(nums3) << endl; // Output: 8

    // Test Case 4
    vector<int> nums4 = {0};
    cout << "Missing number: " << sol.missingNumber(nums4) << endl; // Output: 1

    // Test Case 5
    vector<int> nums5 = {0, 2};
    cout << "Missing number: " << sol.missingNumber(nums5) << endl; // Output: 1

    return 0;
}
