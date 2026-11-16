class Solution {
public:
    string digitSum(string s, int k) {

        
        
        while(s.size()>k){

            string result="";
            int x=0;
            
            for(int i=0;i<s.size();i++){

                int y=s[i]-'0';
                x+=y;
                if((i+1)%k==0 || i==s.size()-1){
                    result += to_string(x);
                    x=0;
                }   
            }
            
            s=result;
        }


        return s;
        
    }
};