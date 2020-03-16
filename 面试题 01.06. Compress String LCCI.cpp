class Solution {
public:
    string compressString(string S) {
        if(S.size() < 1) return S;

        string res;
        int cnt = 0;
        for(int i=0;i<S.size()-1;i++){
            if(S[i] == S[i+1]) cnt ++;
            else{
                cnt++;
                res += S[i] + to_string(cnt);
                cnt = 0;
            }
        }
        if(cnt == 0){
            res += S[S.size()-1] + to_string(1);
        }
        else{
            res += S[S.size()-1] + to_string(cnt + 1);
        }

        return res.size() >= S.size() ? S : res;
    }
};
