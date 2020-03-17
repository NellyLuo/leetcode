class Solution {
public:
    int integerBreak(int n) {
        vector<int> dp(n+1,0);
        dp[0] = 0;
        dp[1] = 1;

        for(int i=2;i<=n;i++){
            int temp = 0;
            int x = i/2;
            for(int j=1;j<=x;j++){
                temp = max(temp, j*(i-j));
                temp = max(temp, dp[j]*dp[i-j]);
                temp = max(temp, j*dp[i-j]);
                temp = max(temp, dp[j]*(i-j));
                // cout << j << '\t' << (i-j) << '\t' << temp << endl;
            }
            dp[i] = temp;
            // cout << i << '\t' << dp[i] << endl;
        }
        return dp[n];
    }
};
