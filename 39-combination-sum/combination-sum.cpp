class Solution {
public:
    void sum(vector<int>& candidates,vector<vector<int>> &ans,vector<int> &temp,int target,int index){

        if(target==0){
            ans.push_back(temp);
            return;
        }

        if(target<0){
            
            return;
        }

        for(int i=index;i<candidates.size();i++){
            temp.push_back(candidates[i]);
            sum(candidates,ans,temp,target-candidates[i],i);
            temp.pop_back();
            
        }



    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {



        vector<vector<int>> ans;
        vector<int> temp;
        sum(candidates,ans,temp,target,0);

        return ans;
        
    }
};