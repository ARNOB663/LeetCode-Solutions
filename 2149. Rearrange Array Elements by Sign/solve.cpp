//brute 

class Solution {
    public:
        vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;
        vector<int>arr;
    
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>=0)
            {
                pos.push_back(nums[i]);
            }
            if(nums[i]<0){
                neg.push_back(nums[i]);
            }
        }
        int p=0,n=0;
        for(int i=0;i<nums.size();i++)
        {
         
         if(i%2==0)
         {
            arr.push_back(pos[p++]);
         }
         else
         {
            arr.push_back(neg[n++]);
         }
        }
        return arr;
        }
    };