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


class Solution2 {
public:
    int maxArea(vector<int>& height) {
    //从两边往中间扫，更近更短的不会带来最大值
        int i = 0;
        int j = height.size() - 1;
        
        int result = 0;
        
        while(i < j){
            result = max(result,(j-i)*min(height[i],height[j]));
            if(height[i] < height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        
        return result;
        
    }
};
