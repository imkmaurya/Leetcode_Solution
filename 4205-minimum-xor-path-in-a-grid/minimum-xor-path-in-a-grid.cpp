class Solution {
public:

    int minxor(vector<vector<int>> &grid,int i,int j,int m,int n,int Xor,vector<vector<vector<int>>> &dp){

        if(i>=m || j>=n){
            return INT_MAX;
        }

        Xor=Xor^grid[i][j];
        
        if(i==m-1 && j==n-1){
            return Xor;
        }

        if(dp[i][j][Xor]!=-1){
            return dp[i][j][Xor];
        }

        

        int right=minxor(grid,i,j+1,m,n,Xor,dp);
        int down=minxor(grid,i+1,j,m,n,Xor,dp);

        return dp[i][j][Xor]=min(right,down);

        


    }
    int minCost(vector<vector<int>>& grid) {

        int m=grid.size();
        int n=grid[0].size();

        vector<vector<vector<int>>> dp(m, vector<vector<int>>(n, vector<int>(1024, -1)  ));

        return minxor(grid,0,0,m,n,0,dp);
        
    }
};