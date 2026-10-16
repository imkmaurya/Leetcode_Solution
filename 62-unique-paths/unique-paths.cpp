class Solution {
public:
    int totalpath(int l,int r,int m,int n,vector<vector<int>> &dp){
        if(l==m-1 && r==n-1){
            return 1;
        }

        if(l==m || r==n){
            return 0;
        }

        if(dp[l][r]!=-1){
            return dp[l][r];
        }

        dp[l][r]=totalpath(l+1,r,m,n,dp)+totalpath(l,r+1,m,n,dp);
        return dp[l][r];
    }
    int uniquePaths(int m, int n) {

        vector<vector<int>> dp(m+1,vector<int>(n,-1));

        return totalpath(0,0,m,n,dp);

        
    }
};