class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {

        int start=0;
        int end=0;
        unordered_map<int,int> mpp;
        int n=nums.size();
        int len=0;
        while(end<n){
            mpp[nums[end]]++;

            
            while(mpp[nums[end]]>k){
                mpp[nums[start]]--;
                start++;
            }

            end++;
            len=max(len,end-start);

        }

        return len;
        
    }
};