class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        if(grid.empty()) return 0;
        int m = grid.size(), n = grid[0].size();
        
        int res = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == 1)
                    res = max(res,getArea(grid, i, j));
            }
        }
        return res;
    }

    int getArea(vector<vector<int>>& grid, int i, int j){
        int m = grid.size(), n = grid[0].size();
        if(i < 0 || i >= m) return 0;
        if(j < 0 || j >= n) return 0;

        int dx[4] = {0,-1,0,1};
        int dy[4] = {-1,0,1,0};

        if(grid[i][j] == 1) {
            grid[i][j] = -1;
            int a = 0;
            for(int k=0;k<4;k++){
                a += getArea(grid,i+dy[k],j+dx[k]);
            }
            return 1 + a;
        }
        return 0;
    }
};
