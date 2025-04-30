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

    //most optimized version 
    class Solution {
        public:
            int findNumbers(vector<int>& nums) {
                int count = 0;
                for (int num : nums) {
                    if ((num >= 10 && num <= 99) || (num >= 1000 && num <= 9999) || (num == 100000))
                        count++;
                }
                return count;
            }
        };
        