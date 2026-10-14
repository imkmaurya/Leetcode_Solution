class Solution {
public:
    string maxSumOfSquares(int num, int sum) {

        int high=0;
        string s="";
        long long maxi=0;

        if(sum<1 )
        return "";

        if(sum>(9*num)){
            return "";
        }

        for(int i=0;i<num;i++){
            for(int j=9;j>=0;j--){
                if(sum>=j){
                    sum-=j;
                    high=j;
                    char c=j+'0';
                    s+=c;
                    break;
                    

                    
                    
                }
            }
            
        }


        return s;
        
    }
};