#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
    public:
        vector<int> targetIndices(vector<int>& nums, int target) {
            vector<pair<int, int>> numWithIndex;
            for (int i = 0; i < nums.size(); i++) {
                numWithIndex.push_back({nums[i], i});
            }
            sort(numWithIndex.begin(), numWithIndex.end());
            int left = 0, right = nums.size() - 1;
            while (left < right) {
                int sum = numWithIndex[left].first + numWithIndex[right].first;
                if (sum == target) {
                    return {numWithIndex[left].second, numWithIndex[right].second};
                } else if (sum > target) {
                    right--;
                } else {
                    left++;
                }
            }
            return {}; // Return an empty vector if no solution is found
        }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = sol.targetIndices(nums, target);
    for(int index : result) {
        cout << index << " ";
    }
    cout << endl;
    return 0;
}