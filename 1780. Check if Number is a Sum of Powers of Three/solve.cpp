class Solution {
    public:
        bool checkPowersOfThree(int n) {
            while(n>0)
            { int rem = n%3;
            
                if (rem > 1) {
                    return false;     
                }
                n /= 3; 
            }
            return true; 
        }  
    };
    