class Solution {
    public:
        int minOperations(vector<int>& nums) {
            int flipCount = 0;
            int n = nums.size();
            for (int i = 0; i < n - 2; i++) {
                if (nums[i] == 0) {
                    for(int j = i; j <= i + 2; j++)
                        nums[j] = !nums[j];
                    flipCount++;
                }
            }
            if(nums[n-2] && nums[n-1])
                return flipCount;
            return -1;
        }
    };