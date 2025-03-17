class Solution {
    public:
        vector<int> applyOperations(vector<int>& nums) {
            int n=nums.size();
            vector<int> ans(n);
            for(int i=0;i<n-1;i++)
            {
                if(nums[i]==nums[i+1])
                {
                    nums[i]+=nums[i];
                    nums[i+1]=0;
                }
            }
            int i=0;
            // for(int i=0;i<n;)
            // {
            //     if(nums[i]>0)
            //     {
            //         ans[i++]=nums[i];
            //     }
            // }
             for (const int num : nums)
          if (num > 0)
            ans[i++] = num;
    
        return ans;
    
        }
    };