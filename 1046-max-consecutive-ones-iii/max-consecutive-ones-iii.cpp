class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int n=nums.size();
        int len=0;
        int l=0;
        int r=0;
        int cz=0;
        while(r<n){
            if(nums[r]==0){
                cz++;
            }
            if(cz>k){
                if(nums[l]==0)cz--;
                l++;
            }

            len=max(len,r-l+1);
            r++;
        }

        return len;
        
    }
};