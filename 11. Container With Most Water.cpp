class Solution {
public:
    int maxArea(vector<int>& height) {
        int result = 0;
        int max_i = 0;
        
        for(int i=0;i<height.size();i++){
            int max_j = 0;
            
            for(int j=i+1;j<height.size();j++){
                int cal = min(height[i],height[j]) * (j-i);
                result = max(result,cal);
            }
        }
        return result;
    }
};
