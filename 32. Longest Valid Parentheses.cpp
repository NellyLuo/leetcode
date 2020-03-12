class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> p;
        p.push(-1);
        int res = 0;
        for(int i=0;i<s.size();i++){
            if(s[i] == '(') p.push(i);
            else{
                p.pop();
                if (p.empty()) p.push(i);
                else {
                    res = max(res, i - p.top());
                }
            }
        }
        return res;
    }
};
