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

class Solution2 {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        if(x == 0) return true;
        if(x%10 == 0) return false;
            
        int p = x;
        int q = 0;
        
        while(q<p){
            q = 10*q + (p % 10);
            p = p / 10;
        }
        
        return ((p == q) || (p ==q/10));
    }
};
