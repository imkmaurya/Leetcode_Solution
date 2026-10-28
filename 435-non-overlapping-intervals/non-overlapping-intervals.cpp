bool cmp(vector<int>& a, vector<int>& b) {
    return a[1] < b[1];
}

class Solution {
public:

    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        int cnt=1;
        sort(intervals.begin(),intervals.end(),cmp);
        int free=intervals[0][1];
        for(int i=1;i<n;i++){
            if(intervals[i][0]>=free){
                cnt++;
                free=intervals[i][1];
            }
        }

        return n-cnt;
        
    }
};