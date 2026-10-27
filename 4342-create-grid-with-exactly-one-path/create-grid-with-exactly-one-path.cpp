class Solution {
public:
    vector<string> createGrid(int m, int n) {

        vector<string> result(m, string(n, '#'));
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){

                if(i==0){
                    result[i][j]='.';
                }

                else if(j==n-1){
                    result[i][j]='.';
                }
                

            }
            
        }

        return result;
        
    }
};