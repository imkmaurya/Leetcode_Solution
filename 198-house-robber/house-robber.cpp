class Solution {
public:
    int maxsum(int index,vector<int> &nums,vector<int> &dp){
        if(index==0){
            return nums[index];

        }

        if(index<0){
            return 0;

        }

        if(dp[index]!=-1){
            return dp[index];
        }

        int pick=nums[index]+maxsum(index-2,nums,dp);
        int notpick=0+ maxsum(index-1,nums,dp);

        dp[index]=max(pick,notpick);

        return dp[index];
    }
    int rob(vector<int>& nums) {

        int n=nums.size();
        vector<int> dp(n+1,-1);
        return maxsum(n-1,nums,dp);
        
    }
};