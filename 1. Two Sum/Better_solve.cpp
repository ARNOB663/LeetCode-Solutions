#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            int n = nums.size();
            unordered_map<int, int> mpp; // Create a hash map to store the indices of the elements
            for(int i = 0; i < n; i++) {
                int num = nums[i];
                int moreNeeded = target - num; // Calculate the complement of the current element
                if(mpp.find(moreNeeded) != mpp.end()) {
                    // If the complement is found in the map, return the indices
                    return {i, mpp[moreNeeded]};
                }
                mpp[num] = i; // Store the index of the current element in the map
            }
            return {}; // Return an empty vector if no solution is found
        }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = sol.twoSum(nums, target);
    for(int index : result) {
        cout << index << " ";
    }
    cout << endl;
    return 0;
}