class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int,int> mpp;
        int dup=0;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
            if(mpp[nums[i]]==2){
                ans.push_back(nums[i]);
                dup=nums[i];
                break;
            }
        }
        int Xor=0;
        for(int i=1;i<=nums.size();i++){
            Xor=Xor^i;
        }
        for(int i=0;i<nums.size();i++){
            Xor=Xor^nums[i];
        }

        Xor=dup^Xor;
        ans.push_back(Xor);

        return ans;
    }
};