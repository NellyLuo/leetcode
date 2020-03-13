class Solution {
public:
    // int majorityElement(vector<int>& nums) {
    //     map<int,int> m;
    //     int res = 0;
    //     int mid = nums.size()/2;
    //     for(int i=0;i<nums.size();i++){
    //         m[nums[i]] = m[nums[i]] ? m[nums[i]] + 1 : 1;
    //         if(m[nums[i]] > mid) res = nums[i];
    //     }
    //     return res;
    // }
    int majorityElement(vector<int>& nums) {
        int res = nums[0],cnt = 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i] == res){
                cnt ++;
            }
            else{
                cnt --;
                if(cnt < 1){
                    res = nums[i];
                    cnt = 1;
                }
            }
        }
        return res;
    }
};
