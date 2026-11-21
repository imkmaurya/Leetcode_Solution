class Solution {
public:
    char findTheDifference(string s, string t) {

        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        int n=s.size();
        int m=t.size();
        int i=0;
        int j=0;
        while(i<n && j<m){
            if(s[i]==t[j]){
                j++;
                i++;
            }
            else{
                return t[j];
            }
        }

        return t[j];
        
    }
};