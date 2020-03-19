class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> n(58,0);
        int result = 0;
        for(int i=0;i<s.size();i++){
            int a = s[i] - 'A';
            n[a] += 1;
        }
        
        int max_odd = 0;
        for(int i=0;i<58;i++){
            if(n[i]%2==1){
                max_odd = 1;
                result += n[i] - 1;
            }
            else{
                result += n[i];
            }
        }
        result += max_odd;
        return result;
    }
};
