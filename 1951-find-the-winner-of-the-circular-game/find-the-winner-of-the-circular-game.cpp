class Solution {
public:
    int findTheWinner(int n, int k) {
        if(k>n){
            k=k%n;
        }
        
        int person_left=n;
        int start=0;
        int count=0;
        vector<bool> vt(n,0);
        while(person_left>1){
            
            if(vt[(start)%n]==0){
                count++;
                if(count==k){
                    count=0;
                    person_left--;
                    vt[(start)%n]=1;
                }
                
            }
            start++;
        }
        for(int i=0;i<n;i++){
            if(vt[i]==0){
                return i+1;
            }
        }
        return 0;
        
    }
};