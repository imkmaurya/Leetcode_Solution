class Solution {
public:
    int totalFruit(vector<int>& fruits) {

        int len=0;
        map<int,int> mpp;
        int n=fruits.size();
        int l=0;
        int r=0;
        while(r<n){
            mpp[fruits[r]]++;

            while(mpp.size()>2){
                mpp[fruits[l]]--;
                if(mpp[fruits[l]]==0){
                    mpp.erase(fruits[l]);
                }
                l++;
                
            }

            len=max(len,r-l+1);
            r++;
        }
        return len;
        
    }
};