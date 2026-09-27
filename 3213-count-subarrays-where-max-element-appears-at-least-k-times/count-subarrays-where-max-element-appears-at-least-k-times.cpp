class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        int start=0;
        int end=0;
        int maxi=0;
        for(int i=0;i<n;i++){
            if(nums[i]>maxi){
                maxi=nums[i];
            }
        }
        long long count=0;
        unordered_map<int,int> mpp;
        while(end<n){
            mpp[nums[end]]++;


            while(mpp[maxi]>=k){

                count+=(n-end);
                mpp[nums[start]]--;
                start++;

            }

            end++;

        }

        return count;
        
    }
};