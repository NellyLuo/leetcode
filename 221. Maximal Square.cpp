class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int m = matrix.size();
        if(m < 1) return 0;
        int n = matrix[0].size();

        int result = 0;
        vector<vector<int> > dp(m+1,vector<int>(n+1,0));

        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(matrix[i-1][j-1] == '0'){
                    dp[i][j] = 0;
                    continue;
                } 
                dp[i][j] = min(dp[i-1][j-1], dp[i][j-1]);
                dp[i][j] = min(dp[i][j], dp[i-1][j]) + 1;
                result = max(dp[i][j], result);
            }
        }
        return result * result;
    }
};
