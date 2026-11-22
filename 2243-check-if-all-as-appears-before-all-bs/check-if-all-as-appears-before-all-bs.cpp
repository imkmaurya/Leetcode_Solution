class Solution {
public:
    bool checkString(string s) {

        int ca=0;
        int cb=0;

        for(int i=0;i<s.size();i++){
            if(s[i]=='a' && cb>0){
                return false;
            }

            if(s[i]=='b'){
                cb++;
            }
        }
        return true;
        
    }
};