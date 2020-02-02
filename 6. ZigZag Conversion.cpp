class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows <=1) return s;
        
        const int group_nums = s.length() / numRows + (s.length()%numRows==0?0:1);
        string a[numRows];
        
        int group_middle = numRows - 1;

        for(int i=0;i<s.length();i++){
            int group = i % (2* numRows - 2);
            if(group > group_middle){
                group = 2 * numRows - 2 - group;
            }
            a[group].push_back(s[i]);
        }
        
        string result;
        for (int j = 0; j < numRows; j++)
        {
            result.append(a[j]);
        }
        
        return result;
    }
};
