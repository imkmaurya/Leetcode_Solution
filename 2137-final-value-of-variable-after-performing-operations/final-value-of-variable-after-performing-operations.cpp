class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {

        int n=operations.size();
        int count=0;
        for(int i=0;i<n;i++){
            string s=operations[i];
            if(s[0]=='+' || s[2]=='+'){
                count++;
            }
            else{
                count--;
            }
        }
        return count;
    }
};