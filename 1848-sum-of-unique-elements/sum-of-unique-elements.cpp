class Solution {
public:
    int sumOfUnique(vector<int>& nums) {

        int sum=0;
        map<int,int> mpp;
        for(int i=0;i<nums.size();i++){

            mpp[nums[i]]++;

            if(mpp[nums[i]]==1){
                sum+=nums[i];
            }

            else if(mpp[nums[i]]==2){
                sum-=nums[i];
            }   
            
        }
        if(sum<0){
            return 0;
        }

        return sum;
        
    }
};