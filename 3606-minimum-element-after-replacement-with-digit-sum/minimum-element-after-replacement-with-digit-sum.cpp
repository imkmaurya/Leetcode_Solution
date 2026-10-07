class Solution {
public:
    int minElement(vector<int>& nums) {

        int n=nums.size();
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            int sum=0;
            int x=nums[i];
            while(x){
                sum+=x%10;
                x=x/10;
            }
            mini=min(mini,sum);

        }


        return mini;
        
    }
};