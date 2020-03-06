class Solution {
public:
    vector<vector<int>> findContinuousSequence(int target) {
        vector<vector<int> > result;
        int left=1,right=2,sum = 3;

        while(left < (target/2+1)){
            // cout << sum << endl;
            if(sum < target){
                right ++;
                sum += right;
            }
            else if(sum > target){
                sum -= left;
                left ++;
            }
            else {
                vector<int> ans;
                for(int i=left;i<=right;i++){
                    ans.push_back(i);
                }
                result.push_back(ans);
                sum -= left;
                left ++;
                right ++;
                sum += right;
            }
        }

        return result;
    }
};
