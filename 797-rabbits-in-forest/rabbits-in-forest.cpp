class Solution {
public:
    int numRabbits(vector<int>& answers) {

        unordered_map<int,int> mpp;
        int result=0;
        for(int i=0;i<answers.size();i++){
            if(!mpp[answers[i]+1]){
                result+=answers[i]+1;
                if(answers[i]==0){
                    continue;
                }
                mpp[answers[i]+1]=1;

            }
            else{
                mpp[answers[i]+1]++;
                int key=mpp[answers[i]+1];
                int val=answers[i]+1;
                if(key==val){
                    mpp.erase(mpp[answers[i]+1]);
                }
            }
        }

        return result;
        
    }
};