class Solution {
public:
    int minsum(int i, int j, vector<vector<int>>& matrix,vector<vector<int>> &dp) {
        int m = matrix.size();
        int n = matrix[0].size();

        if (j < 0 || j >= n) {
            return 1e9;
        }

        if (i == 0) {
            return matrix[0][j];
        }

        if(dp[i][j]!=-1){
            return dp[i][j];
        }

        int up = matrix[i][j] + minsum(i - 1, j, matrix,dp);
        int left = matrix[i][j] + minsum(i - 1, j - 1, matrix,dp);
        int right = matrix[i][j] + minsum(i - 1, j + 1, matrix,dp);

        dp[i][j]= min(up, min(left, right));
        return dp[i][j];
    }

    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();



        int ans = INT_MAX;
        vector<vector<int>> dp(m,vector<int> (n));

        for (int j = 0; j < n; j++) {
            dp[0][j]=matrix[0][j];
        }

        for(int i=1;i<m;i++){
            for(int j=0;j<n;j++){
                
                int up=matrix[i][j]+dp[i-1][j];

                int left=INT_MAX;
                
                
                if(j>0){
                    left=matrix[i][j]+dp[i-1][j-1];
                }
                
                int right=INT_MAX;
                if(j<n-1){
                    right=matrix[i][j]+dp[i-1][j+1];
                }

                
                dp[i][j]=min(up,min(left,right));
            }
        }

        
        for (int j = 0; j < n; j++) {
            ans = min(ans, dp[m - 1][j]);
        }

        return ans;
    }
};