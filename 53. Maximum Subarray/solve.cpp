class Solution {
   public:
       int maxSubArray(vector<int>& nums) {
           int max_sum = nums[0];
           int sum = nums[0];
           int start_index = 0, end_index = 0, temp_start = 0;
   
           for (int i = 1; i < nums.size(); i++) {
               if (sum + nums[i] > nums[i]) {
                   sum += nums[i];
               } else {
                   sum = nums[i];
                   temp_start = i; // possible new start
               }
   
               if (sum > max_sum) {
                   max_sum = sum;
                   start_index = temp_start;
                   end_index = i;
               }
           }
           // Optional: Print subarray for debugging
           // for (int i = start_index; i <= end_index; i++) {
           //     cout << nums[i] << " ";
           // }
   
           return max_sum;
       }
   };
   