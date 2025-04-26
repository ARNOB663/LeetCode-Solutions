class Solution {
    public:
        bool isPalindrome(int x) {
            if (x < 0) return false;
    
            long long num = 0;
            int n = x;
    
            while (n > 0) {
                int d = n % 10;
                num = num * 10 + d;
                n = n / 10;
            }
            return num == x;
        }
    };
    