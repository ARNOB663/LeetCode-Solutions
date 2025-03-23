//brute
class Solution {
    public:
        void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
            for(int i=0;i<n;i++)
            {      
                // Place nums2 elements in the extra space of nums1
                 nums1[m + i] = nums2[i]; 
            }
            sort(nums1.begin(), nums1.end());
        }
    };