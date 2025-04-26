class Solution {
    public:
     long long countSubarrays(vector<int>& a, int lo, int hi) {
       long res = 0;
       int i = 0, j = -1, p1 = -1, p2 = -1;
   
       for (i = 0; i < a.size(); ++i) {
         if (a[i] < lo || a[i] > hi) j = i;
         if (a[i] == lo) p1 = i;
         if (a[i] == hi) p2 = i;
   
         res += max(0, min(p1, p2) - j);
       }
       return res;
     }
   };
   