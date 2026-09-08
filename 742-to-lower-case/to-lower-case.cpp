class Solution {
public:
    string toLowerCase(string s) {

        int n=s.size();
        for(int i=0;i<n;i++){
            char c=s[i];
            if(c>= 'A' && c<='Z'){
                c=c+32;
                s[i]=c;
            }

        }
        return s;
    }
};