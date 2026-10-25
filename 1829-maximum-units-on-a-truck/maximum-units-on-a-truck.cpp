bool cmp(vector<int> &a,vector<int> &b){
        return a[1]>b[1];
    }

class Solution {
public:

    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {

        sort(boxTypes.begin(),boxTypes.end(),cmp);
        int result=0;
        for(int i=0;i<boxTypes.size();i++){
            if(boxTypes[i][0]<=truckSize){
                result+=boxTypes[i][0]*boxTypes[i][1];
                truckSize-=boxTypes[i][0];
            }
            else{
                result+=boxTypes[i][1]*truckSize;
                truckSize=0;
                break;
            }
        }

        return result;


        
    }
};