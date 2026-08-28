class Solution {
public:
    bool check(int row,int col,vector<string>Board,int n){
        int i=row,j=col;
        while(i>-1&&j>-1){
            if(Board[i][j]=='Q'){
                return 0;
            }
            i--,j--;
        }
        i=row,j=col;
        while(i>-1&&j<n){
            if(Board[i][j]=='Q'){
                return 0;
            }
            i--,j++;
        }
        return 1;
    }
    void find(int row,vector<string>Board,vector<bool> &column,vector<vector<string>> &ans,int n){

        if(row==n){
            ans.push_back(Board);
            return;
        }
        
        for(int j=0;j<n;j++){
            if(column[j]==0 && check(row,j,Board,n)){

                column[j]=1;
                Board[row][j]='Q';
                find(row+1,Board,column,ans,n);
                column[j]=0;
                Board[row][j]='.';

            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>Board(n);
        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        Board[i].push_back('.');

        vector<bool> column(n,0);

        find(0,Board,column,ans,n);
        
        return ans;
    }
};