class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {

        map<int,int> mpp;
        int count=0;
        int sum=0;
        mpp[0]=1;

        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(mpp.find(sum-goal)!=mpp.end()){
                count=count+mpp[sum-goal];
            }

            mpp[sum]++;
        }

        return count;
        
    }
};