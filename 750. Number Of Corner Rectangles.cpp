class Solution {
public:
    int countCornerRectangles(vector<vector<int>>& grid) {
        int result = 0;
        for(int i=0;i<grid.size()-1;i++){
            for(int j=i+1;j<grid.size();j++){
                int temp = 0;
                for(int k=0;k<grid[0].size();k++){
                    if(grid[i][k] != 1) continue;
                    if(grid[i][k] == grid[j][k]){
                        temp++;
                    }
                }
                result += (temp - 1) * temp / 2;
            }
        }
        return result;
    }
};

//我觉得有更优解……
