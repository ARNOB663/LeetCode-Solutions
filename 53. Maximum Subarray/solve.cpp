class Solution {
    public:
        int maxSubArray(vector<int>& nums) {
    
           //using Kadane’s Algorithm
          int  max_sum = INT_MIN,sum=0,n=nums.size();
    
           for(int i=0;i<n;i++)
           { 
              if(sum+ nums[i] > nums[i])
                 sum+=nums[i];
                 else
                 sum=nums[i];
              if(sum>=max_sum)
              {
                max_sum=sum;
              }
           }

            return max_sum;
        }
    };