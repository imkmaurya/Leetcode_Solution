class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        map<int,int> mpp;
        int feq=-1;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
            if(mpp[nums[i]]>=2){
                feq=nums[i]; 
            }
            
        }

        return feq;
        
    }
};