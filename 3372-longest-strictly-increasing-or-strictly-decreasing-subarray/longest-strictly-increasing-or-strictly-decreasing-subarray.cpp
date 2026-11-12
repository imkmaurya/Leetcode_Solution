class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {

        int count=1;
        int maxcount=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]<nums[i]){
                count++;
            }
            else{
                maxcount=max(maxcount,count);
                count=1;
            }
        }

        maxcount=max(count,maxcount);

        count=1;
        int maxcount1=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]>nums[i]){
                count++;
            }
            else{
                maxcount1=max(count,maxcount1);
                count=1;
            }
        }

        maxcount1=max(count,maxcount1);

        return max(maxcount,maxcount1);
        
    }
};