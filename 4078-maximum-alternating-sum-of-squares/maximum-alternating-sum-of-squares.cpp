class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {

        
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]*nums[i];
        }
        
        long long sum=0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n/2;i++){
            sum-=nums[i];
        }
        for(int i=n/2;i<n;i++){
            sum+=nums[i];
        }
        
        return sum;

    }
};