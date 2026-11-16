class Solution {
public:
    int minMaxGame(vector<int>& nums) {

        while(nums.size()>1){
            bool mini=true;
            bool maxi=false;
            vector<int> arr;
            for(int i=0;i<nums.size();i=i+2){
                
                if(mini){
                    int x=min(nums[i],nums[i+1]);
                    arr.push_back(x);
                    mini=false;
                    maxi=true;
                }
                else{
                    int x=max(nums[i],nums[i+1]);
                    arr.push_back(x);
                    mini=true;
                    maxi=false;

                }

            }

            nums=arr;
        }

        return nums[0];
        
    }
};