class Solution {
public:
    long long dividePlayers(vector<int>& skill) {

        int n=skill.size();
        
        sort(skill.begin(),skill.end());
        int sum=skill[0]+skill[n-1];
        int i=0;
        int j=n-1;
        long long score=0;
        while(i<j){

            if(sum==(skill[i]+skill[j])){
                score+=(skill[i]*skill[j]);
                i++;
                j--;  
            }
            else{
                return -1;
            }

            

        }

        return score;
        
    }
};