class Solution {
public:
    int numberOfSubstrings(string s) {
        int count=0;
        int n=s.size();
        int r=0;
        int l=0;
        unordered_map<int,int> mpp;
        while(r<n){
            mpp[s[r]]++;

            while(mpp.size()==3){
                count+=(n-r);
                mpp[s[l]]--;
                if(mpp[s[l]]==0){
                    mpp.erase(s[l]);
                }
                l++;

            }
            r++;
        }
        return count;
    }
};