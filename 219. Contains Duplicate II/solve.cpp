class Solution {
    public:
        bool containsNearbyDuplicate(vector<int>& nums, int k) {
            for(int i=0;i<nums.size();i++)
            {
                for(int j=i+1; j<nums.size() && j<=i+k;j++) // Added boundary check
                {   
                    if(nums[i]==nums[j])
                        return true;
                }
           }
           return false;
        }  
    };

    //more optimized version 
    class Solution {
        public:
            bool containsNearbyDuplicate(vector<int>& nums, int k) { 
                unordered_map<int, int> mpp;
                for (int i = 0; i < nums.size(); ++i) {
                    if (mpp.count(nums[i])) {
                        if (i - mpp[nums[i]] <= k) {
                            return true;
                        }
                    }
                    mpp[nums[i]] = i;
                }
                return false;
            }
        };