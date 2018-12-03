class Solution {
public:
    string longestPalindrome(string s) {
        if (s.length() <= 1) return s;
        string res = "";
        
        for (int i = 0; i < s.length(); i++) {
            int l = i; 
            int r = i;
            
            string temp = getString(s, l, r);
            if (temp.length() > res.length()) {
                res = temp;
            }
            
            if(s[i] == s[i+1]){
                r = i + 1;
                temp = getString(s, l, r);
                if (temp.length() > res.length()) {
                    res = temp;
                }
            }
            
        }
        
        return res;
    }
    
    string getString(string s, int l, int r) {
        while (l >= 0 && r < s.length()) {
            if (s[l] != s[r]) {
                break;
            } else {
                r++;
                l--;
            }
        }
        return s.substr(l+1, r-l-1);
    }
    
    
};
