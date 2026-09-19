class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {

        priority_queue<int> pq;
        int n=gifts.size();
        for(int i=0;i<n;i++){
            pq.push(gifts[i]);
        }

        while(k && !pq.empty()){
            int a=pq.top();
            pq.pop();
            a=sqrt(a);
            pq.push(a);

            k--;

        }

        long long sum=0;
        while(!pq.empty()){
            sum+=pq.top();
            pq.pop();
        }

        return sum;

    


        
    }
};