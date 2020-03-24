class Solution {
public:
    int massage(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        if(n == 1) return nums[0];

        vector<int> dp(n+1,0);
        dp[1] = nums[0];
        int flag = 1;
        for(int i = 2;i<=n;i++){
            if(flag == 0){
                dp[i] = dp[i-1] + nums[i-1];
                flag = 1;
            }
            else{
                dp[i] = max(dp[i-2] + nums[i-1], dp[i-1]);
                flag = dp[i-2]+nums[i-1]>dp[i-1]?1:0;
            }
        }
        return dp[n];
    }
};
