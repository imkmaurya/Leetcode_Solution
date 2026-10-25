class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {

        priority_queue<int, vector<int>, greater<int>> pq(nums.begin(), nums.end());
        while(k--){
            int el=pq.top();
            pq.pop();
            if(el==0){
                break;
            }
            else{
                pq.push(el*-1);
            }

        }

        int sum=0;

        while(!pq.empty()){
            sum+=pq.top();
            pq.pop();
        }

        return sum;
        
    }
};