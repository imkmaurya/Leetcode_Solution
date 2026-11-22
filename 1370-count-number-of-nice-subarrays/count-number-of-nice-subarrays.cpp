class Solution {
public:

    int sub(vector<int> &nums,int goal){
        int count=0;
        int l=0;
        if(goal < 0) return 0;
        int r=0;
        long long sum=0;
        int n=nums.size();
        while(r<n){
            sum+=nums[r]%2;;
            while(sum>goal){
                sum=sum-(nums[l]%2);
                l++;
            }

            count+=(r-l+1);
            r++;
        }

        return count;
    }


    int numberOfSubarrays(vector<int>& nums, int k) {
        
        return sub(nums,k)-sub(nums,k-1);
        
    }
};