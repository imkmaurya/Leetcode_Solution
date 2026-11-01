class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxim=0;
        int n=sentences.size();
        for(int i=0;i<n;i++){
            int maxi=0;
            int x=sentences[i].size();
            string s=sentences[i];
            for(int j=0;j<x;j++){
                if(s[j]==' '){
                    maxi++;
                }

            }
            maxim=max(maxi,maxim);
        }
        return maxim+1;
    }
};