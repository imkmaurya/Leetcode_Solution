class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {

        priority_queue<int> pq;

        for(int i=0;i<stones.size();i++){
            pq.push(stones[i]);
        }

        while(pq.size()>1){

            if(pq.top()==0){
                return 0;
            }
            int a=pq.top();
            pq.pop();
            a-=pq.top();
            pq.pop();
            if(a==0 && pq.empty()){
                return 0;
            }
            if(a==0){
                continue;
            }
            else{
                pq.push(a);
            }
        }

        return pq.top();


        
    }
};