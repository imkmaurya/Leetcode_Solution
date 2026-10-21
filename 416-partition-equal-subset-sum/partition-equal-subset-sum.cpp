class Solution {
public:
    bool canPartition(vector<int>& nums) {

        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];

        }

        int n=nums.size();
        
        if(sum%2==1) return false;

        

        int target=sum/2;



        vector<vector<bool>> dp(n+1, vector<bool> (target+1 ,false));

        for(int i=0;i<=n;i++){
            dp[i][0]=true;
        }
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=target;j++){
                bool nottake=dp[i-1][j];
                bool take=false;
                if(nums[i-1]<=j){
                    take=dp[i-1][j-nums[i-1]];
                }
                dp[i][j]=nottake|| take;
            }
        }

        return dp[n][target];
        
    }
};