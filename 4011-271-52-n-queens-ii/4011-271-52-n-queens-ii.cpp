class Solution {
public:
    int isSafe(int row,int col,vector<string>& board,int n){
        for(int i=0;i<n;i++){
            if(board[i][col]=='Q'){
                return false;
            }
        }
        for(int i = row-1, j = col-1;i>=0&&j>=0;i--,j--){
            if(board[i][j]=='Q'){
                return false;
            }
        }
        for(int i = row-1,j = col+1;i>=0&&j<n;i--,j++){
            if(board[i][j]=='Q'){
                return false;
            }
        }
        return true;
    }
    void solve(int row,int n,int& res,vector<string>& board){
        if(row==n){
            res++;
            return;
        }
        for(int col=0;col<n;col++){
            if(isSafe(row,col,board,n)){
                board[row][col] = 'Q';
                solve(row+1,n,res,board);
                board[row][col] = '.';
            }
        }
    }
    int totalNQueens(int n) {
        int res=0;
        vector<string> board(n,string(n,'.'));
        solve(0,n,res,board);
        return res;
    }
};