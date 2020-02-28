class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size(),n=obstacleGrid[0].size();
        vector<vector<long> > grid(m,vector<long>(n,0));

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(obstacleGrid[i][j] == 1){
                    grid[i][j]=0;
                    continue;
                }
                if(i==0 && j==0) grid[i][j]=1;
                else if(i==0) grid[i][j] = grid[i][j-1];
                else if(j==0) grid[i][j] = grid[i-1][j];
                else grid[i][j] = grid[i-1][j] + grid[i][j-1];
            }
        }
        return grid[grid.size()-1][grid[0].size()-1];
    }
};

//用int中间结果会越界= =
