class Solution {
    public:
        bool divideArray(vector<int>& nums) {
            map<int,int> mpp;
            for(int i=0;i<nums.size();i++)
             {
                mpp[nums[i]]++;
             }
            for(int i=0;i<nums.size();i++)
            {  
                if(mpp[nums[i]]%2!=0)
                {
                    return false;
                }
            }
            return true;        
        }
    };