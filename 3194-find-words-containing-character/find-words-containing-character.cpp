class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        for(int i=0;i<words.size();i++){
            int n=words[i].size();
            string s=words[i];
            for(int j=0;j<n;j++){
                if(s[j]==x){
                    ans.push_back(i);
                    break;
                }
            }
        }

        return ans;
        
    }
};