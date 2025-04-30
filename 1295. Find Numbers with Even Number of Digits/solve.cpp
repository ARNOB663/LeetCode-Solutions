class Solution {
    public:
       
        int findNumbers(vector<int>& nums) {
            int Count = 0; 
            for (int num : nums) {
                string numAsString = to_string(num);
                if (numAsString.size() % 2 == 0) {
                    ++Count;
                }
            }
            return Count;
        }
    };