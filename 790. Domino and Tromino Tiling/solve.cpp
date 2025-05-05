class Solution {
    public:
        static const int MOD = 1e9 + 7;
    
        int numTilings(int n) {
            long dp[4] = {1, 0, 0, 0};
    
            for (int i = 1; i <= n; ++i) {
                long temp[4] = {0, 0, 0, 0};
                temp[0] = (dp[0] + dp[1] + dp[2] + dp[3]) % MOD;
                temp[1] = (dp[2] + dp[3]) % MOD;
                temp[2] = (dp[1] + dp[3]) % MOD;
                temp[3] = dp[0];
                memcpy(dp, temp, sizeof(temp));
            }
            return dp[0];
        }
    };
    