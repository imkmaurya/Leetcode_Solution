class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {

        

        int n=nums.size();

        vector<int> stmin(n);
        int mini=nums[n-1];
        for(int i=n-1;i>=0;i--){
            mini=min(mini,nums[i]);
            stmin[i]=mini;
            
        }

        int mxst=nums[0];
        for(int i=0;i<n;i++){
            mxst=max(mxst,nums[i]);
            if((mxst-stmin[i])<=k){
                return i;
            }

        }
        return -1;
        
    }
};