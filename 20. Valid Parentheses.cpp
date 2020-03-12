class Solution {
public:
    bool isValid(string s) {
        if(s.size() == 0) return true;

        stack<char> p;
        for(int i=0;i<s.size();i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                p.push(s[i]);
            }
            else{
                if(p.empty()) return false;
                char temp = p.top();
                if(temp == '(' && s[i] == ')') p.pop();
                else if(temp == '[' && s[i] == ']') p.pop();
                else if(temp == '{' && s[i] == '}') p.pop();
                else return false;
            }
        }
        if(p.empty()) return true;
        else return false;
    }
};
