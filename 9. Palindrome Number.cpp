class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        
        string a;
        stringstream ss;
        ss << x;
        ss >> a;
        
        int t = a.length() /2;
        for(int i=0;i<t;i++){
            if(a[i] != a[a.length()-i-1]){
                return false;
            }
        }
        return true;
    }
};
