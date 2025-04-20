//brute 

class Solution {
    public:
        vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;
        vector<int>arr;
        int n= nums.size();
    
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
        //    for(int i=0;i<n/2;i++)
        //     {
        //        arr[2*i] = pos[i];
        //        arr[2*i+1] = neg[i];
        //     }
        return arr;
        }
    };

    //optimal solve 
    class Solution {
        public:
            vector<int> rearrangeArray(vector<int>& nums) {
              int n=nums.size();
              vector<int> arr(n);
               
              int pos=0;
              int neg=1;
             
              for(int i=0;i<n;i++)
              {
               if(nums[i]>=0)
               {
                  arr[pos]=nums[i];
                  pos+=2;
               }
               else{
                 arr[neg]=nums[i];
                  neg+=2;
               }
              }    
              return arr;
            }
        };