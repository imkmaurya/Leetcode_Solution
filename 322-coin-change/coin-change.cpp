
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();

        vector<vector<int>> dp(n + 1, vector<int>(amount + 1, 1e9));

        // Amount 0 requires 0 coins, regardless of how many coins are available
        for (int i = 0; i <= n; i++) {
            dp[i][0] = 0;
        }

        // Base case: using only the first coin
        for (int val = 0; val <= amount; val++) {
            if (val % coins[0] == 0) {
                dp[1][val] = val / coins[0];
            }
        }

        for (int i = 2; i <= n; i++) {
            for (int val = 1; val <= amount; val++) {
                int nottake = dp[i - 1][val];

                int take = 1e9;
                if (coins[i - 1] <= val) {
                    take = 1 + dp[i][val - coins[i - 1]];
                }

                dp[i][val] = min(take, nottake);
            }
        }

        if (dp[n][amount] >= 1e9) {
            return -1;
        }

        return dp[n][amount];
    }
};
