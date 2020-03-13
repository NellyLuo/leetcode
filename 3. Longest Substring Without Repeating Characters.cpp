class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() <= 1) return s.size();
        int left = 0, right = 0, res=0, ans = 0;
        map<char,int> m;
        while(right < s.size()){
            if(m[s[right]] == 0){
                m[s[right]] = right+1;
                right++;
                // cout << "right:" << right << endl;
            }
            else{
                ans = max(ans,right - left);
                // cout << "ans:" << ans << endl;
                left = max(left,m[s[right]]);
                // cout << "left:" << left << endl;
                m[s[right]] = 0;
            }
        }
        ans = max(ans,right - left);
        return ans;
    }
};
