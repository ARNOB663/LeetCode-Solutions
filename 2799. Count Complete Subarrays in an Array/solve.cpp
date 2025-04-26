//brute force 
class Solution {
    public:
        int countCompleteSubarrays(vector<int>& nums) {
             map<int,int> hash;
             int count = 0;
             int n =nums.size();
             for(int i=0;i<n;i++)
             { 
                hash[nums[i]]++;
             }
            int t_d = hash.size();
            
            for(int i=0;i<n;i++)
            {  
               unordered_set<int> current_set;
              for(int j=i;j<n;j++)
              {
                   current_set.insert(nums[j]);
                   if(current_set.size()==t_d){
                     count+= (nums.size()-j);
                     break;
                   }
              }
            }
            return count;
        }
    };