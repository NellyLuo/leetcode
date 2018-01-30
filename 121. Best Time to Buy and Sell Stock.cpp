class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxMinus = 0;
        for(int i=0;i<prices.size();i++){
            minPrice = min(minPrice,prices[i]);
            maxMinus = max(maxMinus,prices[i] - minPrice);
        }
        return maxMinus;
    }
};