class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& A) {
        if(A.size() <= 2) return false;

        int sum = 0;
        for(int i=0;i<A.size();i++) sum += A[i];
        if(sum % 3 != 0) return false;
        else {
            int sum2 = sum/3;
            int ans = 0, cnt = 0;
            for(int i=0;i<A.size();i++){
                ans += A[i];
                if(ans == sum2){
                    ans = 0;
                    cnt += 1;
                }
            }
            if(ans == 0 && cnt == 3)return true;
            else if(ans == 0 && cnt > 3 && sum2 == 0) return true;
            else return false;
        }
    }
};
