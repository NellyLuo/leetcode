class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int> > res;
        if(nums.size() < 3) return res;
        
        std::sort(nums.begin(), nums.end());
        
        for(int i=0; i<nums.size() - 2; i++){
            if((i>0) && (nums[i] == nums[i-1]))continue;
            if(nums[i] > 0) break;

            int start = i+1;
            int end = nums.size()-1;
            
            while(start < end){
                int temp_sum = nums[start] + nums[end];
                if(temp_sum < -nums[i]) start++;
                else if(temp_sum > -nums[i]) end--;
                else{
                    vector<int> temp = {nums[i],nums[start],nums[end]};
                    res.push_back(temp);
                    start++;
                    while((nums[start-1]==nums[start]) && start < end) start++;
                }
            }
            
        }
        return res;
    }
};
