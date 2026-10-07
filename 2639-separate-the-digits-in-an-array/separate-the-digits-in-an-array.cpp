class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {

        deque<int> q;
        int n=nums.size();


        for(int i=n-1;i>=0;i--){
            int x=nums[i];
            while(x){
                q.push_back(x%10);
                x=x/10;
            }
        }

        vector<int>ans;
        while(!q.empty()){
            ans.push_back(q.back());
            q.pop_back();
        }


        return ans;



        
    }
};