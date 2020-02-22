class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> res;
        if(num == 0) res = {0};
        else if(num == 1) res = {0,1};
        else{
            res = {0,1};
            int i=2, flag = 2;

            while(i <= num){
                for(int j=0;j<flag;j++){
                    res.push_back(res[j] + 1);
                    i++;
                    if(i > num) break;
                }
                flag = 2 * flag;
            }
        }
        return res;
    }
};


//这个位操作很有意思……记录一下
// 作者：EL1S
// 链接：https://leetcode-cn.com/problems/counting-bits/solution/338-bi-te-wei-ji-shu-dp-el1s-by-el1s/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> res(num + 1);
        for(int i = 1; i <= num; i++)
        {
            if(i & 1)
            {
                //奇数
                res[i] = res[i - 1] + 1;
            }
            else
            {
                //偶数
                res[i] = res[i >> 1];
            }
        }
        return res;
    }
};

