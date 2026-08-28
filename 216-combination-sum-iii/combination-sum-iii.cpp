class Solution {
public:
    void combin(int index,int k,int n,vector<vector<int>> &ans,vector<int> &temp){

        if(k==0 && n==0){
            ans.push_back(temp);
            return;
        }

        if(n<0 || k<0){
            return;
        }




        for(int i=index;i<10;i++){
            temp.push_back(i);
            combin(i+1,k-1,n-i,ans,temp);
            temp.pop_back();


        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {

        vector<vector<int>> ans;
        vector<int> temp;
        combin(1,k,n,ans,temp);

        return ans;
        
    }
};