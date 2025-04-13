int kMod = 1000000007;
class Solution {
public:
    int countGoodNumbers(long long n) {
        return static_cast<int>((myPow(5, (n + 1) / 2) * myPow(4, n / 2)) % kMod);
    }

private:
    
    long long myPow(long long x, long long n) {
        long long res = 1; 
        while (n > 0) {    
            if (n & 1) {   
                res = res * x % kMod;
            }
            x = x * x % kMod; 
            n >>= 1;          
        }
        return res; 
    }
};