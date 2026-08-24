class Solution {
public:

    void permut(vector<int>& nums,vector<vector<int>> &ans,int index,int n){

        if(index==n){
            ans.push_back(nums);
            return;
        }



        vector<bool> use(21,0);
        for(int i=index;i<n;i++){
            if(use[nums[i]+10]==0){

                swap(nums[i],nums[index]);
                permut(nums,ans,index+1,n);
                swap(nums[i],nums[index]);
                use[nums[i]+10]=1;
                
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        int n=nums.size();
        permut(nums,ans,0,n);


        return ans;
        
    }
};