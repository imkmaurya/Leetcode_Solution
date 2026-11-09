class Solution {
public:
    bool vowel(char c){
        if(c=='a' || c=='A' || c=='i' || c=='I' || c=='e' || c=='E' || c=='o' || c=='O' || c=='u' || c=='U'){
            return true;
        }

        return false;
    }
    string reverseVowels(string s) {

        int i=0;
        int j=s.size()-1;
        while(i<j){
            if(!vowel(s[i])){
                i++;
            }
            else if(!vowel(s[j])){
                j--;
            }

            else{
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }

        return s;
        
    }
};