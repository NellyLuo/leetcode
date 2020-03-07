class MaxQueue {
    queue<int> q;
public:
    MaxQueue() {

    }
    
    int max_value() {
        if(q.empty()) return -1;
        queue<int> p = q;
        int max_val = -999999;
        for(int i=0;i<q.size();i++){
            int a = p.front();
            max_val = max(max_val, a);
            p.pop();
        }
        return max_val;
    }
    
    void push_back(int value) {
        q.push(value);
    }
    
    int pop_front() {
        if(q.empty()) return -1;
        else{
            int res = q.front();
            q.pop();
            return res;
        }
    }
};

/**
 * Your MaxQueue object will be instantiated and called as such:
 * MaxQueue* obj = new MaxQueue();
 * int param_1 = obj->max_value();
 * obj->push_back(value);
 * int param_3 = obj->pop_front();
 */
