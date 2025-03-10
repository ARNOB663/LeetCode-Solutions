#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
        vector<int> targetIndices(vector<int>& nums, int target) {
            vector<int> res;
            int smaller = 0;
            int larger = 0;
            int n = nums.size();
            for(int i: nums){
                if(i < target)
                    smaller++;
                else if(i > target)
                    larger++;
            }
            for(int i = smaller; i <= n - larger - 1; i++) {
                res.push_back(i);
            }
            return res;
        }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 5, 2, 3};
    int target = 2;
    vector<int> result = sol.targetIndices(nums, target);
    for(int index : result) {
        cout << index << " ";
    }
    cout << endl;
    return 0;
}