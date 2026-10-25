class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {

        sort(people.begin(),people.end());
        int i=0;
        int j=people.size()-1;
        int result=0;
        while(i<=j){

            int el=people[i]+people[j];
            if(el>limit){
                j--;
                result++;
            }
            else{
                i++;
                j--;
                result++;
            }

        }

        return result;
        
        
    }
};