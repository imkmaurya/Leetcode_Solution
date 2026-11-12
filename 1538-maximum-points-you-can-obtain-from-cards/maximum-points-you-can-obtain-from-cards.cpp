class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {

        int sum=0;
        int n=cardPoints.size();
        for(int i=0;i<k;i++){
            sum+=cardPoints[i];
        }

        int j=k-1;
        int x=n-1;
        int maxsum=sum;
        for(int i=0;i<k;i++){

            maxsum=max(sum,maxsum);
            sum=sum-cardPoints[j];
            sum+=cardPoints[x];
            x--;
            j--;
            
        }

        maxsum=max(sum,maxsum);


        return maxsum;



        
    }
};