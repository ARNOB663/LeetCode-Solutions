#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        unordered_set<int> seen; // Set to store the sums of adjacent elements
        // Iterate through the array, stopping at the second-to-last element
        for (int i = 0; i < nums.size() - 1; i++) {
            int sum = nums[i] + nums[i + 1]; // Calculate the sum of the current and next element

            // Check if this sum has been seen before
            if (seen.count(sum)) {
                return true; // If the sum is already in the set, return true
            }
            // Insert the sum into the set
            seen.insert(sum);
        }
        return false; // If no duplicate sums are found, return false
    }
};

int main() {
    Solution solution;
    vector<int> nums = {4, 2, 4, 5, 6};
    bool result = solution.findSubarrays(nums);
    cout << (result ? "True" : "False") << endl;
    return 0;
}