class Solution {
public:
    int countDigits(int num) {

        int count=0;
        int k=num;
        vector<bool> vt(9,0);
        while(num){
            int x=num%10;
            if(k%x==0){
                count++;
            }
            num=num/10;
        }

        return count;
        
    }
};