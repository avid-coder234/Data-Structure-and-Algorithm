class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minval = INT_MAX;
        int maxprofit = 0;
        int n = prices.size();

        for(int i = 0 ; i < n ; i++){
            minval = min(minval,prices[i]);
            maxprofit = max(maxprofit,prices[i] - minval);
        }
        return maxprofit;
    }
};