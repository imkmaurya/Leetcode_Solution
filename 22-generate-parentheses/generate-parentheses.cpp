class Solution {
public:

    void generatepar(int n,int left,int right,string s,vector<string> &ans){

        if(left==n && right==n){
            ans.push_back(s);
            return;
        }



        if(left<n) generatepar(n,left+1,right,s+'(',ans);
        if(right<left) generatepar(n,left,right+1,s+')',ans);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s="";
        generatepar(n,0,0,s,ans);

        return ans;
        
    }
};