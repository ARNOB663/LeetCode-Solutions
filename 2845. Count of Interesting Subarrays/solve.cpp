class Solution {
    public:
        long long countInterestingSubarrays(vector<int>& nums, int m, int k) {
            int n = nums.size();
            vector<int> modArr(n);
            for (int i = 0; i < n; ++i) {
                modArr[i] = (nums[i] % m == k) ? 1 : 0;
            }
            unordered_map<int, int> freq;
            freq[0] = 1;
    
            long long res = 0;
            int sum = 0;
            for (int x : modArr) {
                sum += x;
                res += freq[(sum - k + m) % m];
                freq[sum % m]++;
            }
            return res;
        }
    };
    