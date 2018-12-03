class Solution {
public:
    vector<int> vertical_max(vector<vector<int>>& grid, int length){
        vector<int> ans(length, INT_MIN);
        for(int i = 0;i<length;i++){
            for(int j = 0; j<length;j++){
                ans[j]=max(ans[j],grid[i][j]);
            }
        }
        return ans;
    }
    vector<int> horizontal_max(vector<vector<int>>& grid, int length){
        vector<int> ans(length, INT_MIN);
        for(int i = 0;i<length;i++){
            for(int j = 0; j<length;j++){
                ans[i]=max(ans[i],grid[i][j]);
            }
        }
        return ans;
    }
    
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int result=0,length=grid.size();
        vector<int> shuipin = vertical_max(grid,length);
        vector<int> chuizhi = horizontal_max(grid,length);
        for(int i=0;i<length;i++)
            for(int j=0;j<length;j++)
                result += min(shuipin[j],chuizhi[i])-grid[i][j];
        return result;
    }
};
