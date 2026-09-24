class Solution {
public:
    int SUM(int num){
        int n=0;
        while(num){
            n+=num%10;
            num=num/10;
        }

        return n;
    }
    int smallestIndex(vector<int>& nums) {

        for(int i=0;i<nums.size();i++){

            int sum=SUM(nums[i]);
            if(sum==i){
                return i;
            }
        }

        return -1;
        
    }
};