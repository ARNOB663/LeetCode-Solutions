
class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        int counter = 0;
        // Start from the end and skip trailing spaces
        int i = n - 1;
        while (i >= 0 && s[i] == ' ') {
            i--;
        }
        n = i;
        // Count the length of the last word
        for (i = n; i >= 0; i--) {
            if (s[i] != ' ') {
                counter++;
            } else {
                break;
            }
        }
        return counter;
    }
};

//using only one loop
class Solution {
    public:
        int lengthOfLastWord(string s) {
            int count=0;
            for(int i=s.length()-1;i>=0;i--)
            {
                if(s[i]!=' ')
                count++;
                if(count>0)
                {
                    if(s[i]==' ')
                    break;
                }
            }
            return count;
        }
    };
