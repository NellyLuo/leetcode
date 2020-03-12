class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        return (str1 + str2 == str2 + str1) ? str1.substr(0, gcd(str1.size(), str2.size())) : "";
    }

    int gcd(int a,int b){
        int m = max(a,b);
        int n = min(a,b);
        while(n!=0){
            int t = m % n;
            m = n;
            n = t;
        }
        return m;
    }
};
