class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0;
        int ten=0;
        int twin=0;
        // sort(bills.begin(),bills.end());
        int n=bills.size();
        for(int i=0;i<n;i++){
            if(bills[i]==5){
                five++;
            }
            else if(bills[i]==10){
                if(five==0){
                    return 0;
                }
                else{
                    five--;
                    ten++;
                }
            }
            else{
                if(five==0){
                    return 0;
                }
                else{
                    if(ten==0){
                        if(five>=3){
                            five=five-3;
                        }
                        else{
                            return 0;
                        }
                    }
                    else{
                        ten--;
                        five--;
                    }
                }
            }
        }

        return true;
        
    }
};