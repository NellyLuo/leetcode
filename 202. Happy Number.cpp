class Solution {
public:
    int get_next_num(int num){
        int ans = 0;
        while(num){ // 16
            ans = ans + (num % 10) * (num % 10); // 36 + 1
            num = num / 10; //1
        }
        return ans;
    }
    bool isHappy(int n) {
        if(n == 0) return false;

        int fast = n; // 19
        int slow = n; // 19
        bool is_happy = false;


        do {
            slow = get_next_num(slow); // 2->4
            fast = get_next_num(fast); // 4->16
            fast = get_next_num(fast); //16->37
            if(fast == 1){
                is_happy = true;
                break;
            }
        } while(fast != slow);
        
        return is_happy;
    }
};
