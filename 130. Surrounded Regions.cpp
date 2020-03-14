class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int m = board.size();
        if(m<=2) return;
        int n = board[0].size();
        if(n<=2) return;

        for(int i=0;i<m;i++){
            if(board[i][0] == 'O') change(board, i, 0);
        }
        for(int i=0;i<n;i++){
            if(board[0][i] == 'O') change(board, 0, i);
        }
        for(int i=0;i<m;i++){
            if(board[i][n-1] == 'O') change(board, i, n-1);
        }
        for(int i=0;i<n;i++){
            if(board[m-1][i] == 'O') change(board, m-1, i);
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j] == 'O') board[i][j] = 'X';
                if(board[i][j] == '#') board[i][j] = 'O';
            }
        }
    }

    void change(vector<vector<char>>& board, int i, int j){
        int m = board.size();
        int n = board[0].size();
        int dx[4] = {-1,0,1,0};
        int dy[4] = {0,-1,0,1};

        if(i<0 || i>= m) return;
        if(j<0 || j>= n) return;
        if(board[i][j] != 'O') return;
        // cout << i << '\t' << j << endl;

        board[i][j] = '#';
        for(int k=0;k<4;k++){
            // cout << "eee" << i+dx[k] << '\t' << j+dy[k] << endl;
            change(board,i+dx[k],j+dy[k]);
        }
    }
};
