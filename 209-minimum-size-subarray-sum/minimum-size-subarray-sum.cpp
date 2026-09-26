class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        unordered_map<int,int> mpp;
        int sum=0;
        int count=INT_MAX;
        int start=0;
        int end=0;
        int n=nums.size();
        while(end<n){
            sum+=nums[end];
            while(sum>=target){
                count=min(count,end-start+1);
                sum-=nums[start];
                start++;
            }

            end++;
        }

        if(count==INT_MAX)
        return 0;

        return count;
        
        
    }
};