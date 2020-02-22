class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==0) return 0;
        if(nums.size()==1) return nums[0];

        int result = nums[0];
        
        for(int i=1;i< nums.size(); i++){
            nums[i] = nums[i-1]>0 ? nums[i-1]+nums[i] : nums[i];
            result = max(result,nums[i]);
        }
        return result;
    }
};
