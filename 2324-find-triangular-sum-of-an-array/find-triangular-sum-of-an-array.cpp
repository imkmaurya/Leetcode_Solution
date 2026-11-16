class Solution {
public:
    int triangularSum(vector<int>& nums) {

        int n=nums.size();

        while(nums.size()>1){
            vector<int> arr(nums.size()-1);
            for(int i=0;i<nums.size()-1;i++){

                arr[i]=nums[i]+nums[i+1];
                if(arr[i]>9){
                    arr[i]=arr[i]%10;
                }
                
            }
            nums=arr;
        }


        return nums[0];
        
    }
};