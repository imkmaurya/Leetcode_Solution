class Solution {
public:
    int lengthOfLastWord(string s) {

        int n=s.size();
        if(n==1){
            return 1;
        }
        n=n-1;
        while(n>=0 && s[n]==' '){
            n--;
        }

        int count=0;

        while(n>=0 && s[n]!=' ' ){
            count++;
            n--;
            
        }

        return count;
        
    }
};