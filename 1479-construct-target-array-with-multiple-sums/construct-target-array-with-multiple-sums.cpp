class Solution {
public:
    bool isPossible(vector<int>& target) {

        priority_queue<long long> p;
        long long sum=0;
        for(int i=0;i<target.size();i++){
            p.push(target[i]);
            sum+=target[i];
        }

        long long maxele,ele,remsem;
        while(p.top()!=1){
            maxele=p.top();
            p.pop();
            long long remsum=sum-maxele;
            if(remsum<=0 || remsum>=maxele){
                return 0;
            }

            ele=maxele%remsum;
            if(ele==0){
                if(remsum!=1){
                    return 0;
                }
                else{
                    return 1;
                }
            }
            p.push(ele);
            sum=remsum+ele;
        }

        return 1;
        
    }
};