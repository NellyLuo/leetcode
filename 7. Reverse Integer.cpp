#define INT_MAX 2147483647
#define INT_MIN (-INT_MAX - 1)

class Solution {
public:
    int reverse(int x) {
        if(x == INT_MIN)return 0;
        
        int flag = 0;
        if(x < 0){
            flag = 1;
            x = -x;
        }
        
        int result = 0;
        while(x > 0){
            if(result > INT_MAX/10)return 0;
            
            result = result*10 + x%10;
            x = x/10;
        }
        return flag==0?result:-result;
    }
};
