// ATTENTION to the "unsigned int" !!!!

class Solution {
public:
    int getSum(int a, int b) {
        
        int res = a ^ b;
        int yu = (unsigned int)(a & b) << 1;
        
        while(yu!=0){
            int temp = res;
            res = yu ^ res;
            yu = (unsigned int)(temp & yu) << 1;
            
            
        }
        return res;
    }
};
