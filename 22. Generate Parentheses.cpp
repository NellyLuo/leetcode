class Solution {

public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        getParenthesis(ans, "", 0, 0, n);
        return ans;
    }

    void getParenthesis(vector<string> &ans, string cur, int start,int end,int max){
        if(cur.size() == max * 2){
            ans.push_back(cur);
            return;
        }

        if(start < max){
            getParenthesis(ans, cur+"(", start+1, end, max);
        }

        if(end < start){
            getParenthesis(ans, cur+")", start, end+1, max);
        }
    }
};
