class Solution {
public:
    int countsum(int i,int j,int n,vector<vector<int>>& triangle,vector<vector<int>>& dp) {

        if(i==n-1){
            return triangle[i][j];
        }

        if(dp[i][j]!=-1){
            return dp[i][j];
        }

        int p=triangle[i][j]+countsum(i+1,j,n,triangle,dp);
        int pg=triangle[i][j]+countsum(i+1,j+1,n,triangle,dp);

        dp[i][j]=min(p,pg);
        return dp[i][j];
    }
    int minimumTotal(vector<vector<int>>& triangle) {

        int n=triangle.size();
        vector<vector<int>> dp(n,vector<int>(n));

        dp[0][0]=triangle[0][0];
        for(int i=1;i<n;i++){
            for(int j=0;j<i+1;j++){
                int p=INT_MAX;
                if(i>j){
                    p=triangle[i][j]+dp[i-1][j];

                }
                
                int pq=INT_MAX;
                if(j>0){
                    pq=triangle[i][j]+dp[i-1][j-1];

                }
                
                dp[i][j]=min(p,pq);
            }
        }

        


        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            ans=min(ans,dp[n-1][i]);
        }

        return ans;


        
    }
};