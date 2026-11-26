class Solution {
public:
    bool canAliceWin(int n) {

        bool valid=false;

        int stones=10;
        while(n>=stones){
            n-=stones;
            stones--;

            valid=!valid;


        }


        return valid;
        
    }
};