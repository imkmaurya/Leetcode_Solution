class Solution {
public:
    bool  check(int i,int j,int num,vector<vector<char>>& board,int n){


        // check row;
        char c='0'+ num;
        for(int col=0;col<n;col++){
            if(board[i][col]==c){
                return 0;
            }
        }

        // check col
        for(int row=0;row<n;row++){
            if(board[row][j]==c){
                return 0;
            }
        }


        // check diagonal
        int row=i/3*3,col=j/3*3;
        for(int a=row;a<row+3;a++){
            for(int b=col;b<col+3;b++){
                if(board[a][b]==c){
                    return 0;
                }
            }
        }


        return 1;


    }
    bool find(int i,int j,vector<vector<char>>& board,int n){
        if(i==n){
            return 1;
        }
        if(j==n){
            return find(i+1,0,board,n);
        }

        if(board[i][j]!='.'){
            return find(i,j+1,board,n);
        }

        for(int num=1;num<10;num++){
            if(check(i,j,num,board,n)){
                board[i][j]='0'+num;
                if(find(i,j+1,board,n)){
                    return 1;
                }
                board[i][j]='.';


                

            }
        }
        return 0;
    }
    void solveSudoku(vector<vector<char>>& board) {

        int n=board.size();

        find(0,0,board,n);

        
        
    }
};