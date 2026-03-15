class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int price = 0;
        for(int i=0;i<prices.size();i++){
            if(buy>prices[i]){
                buy = prices[i];
            }
            price = max(price,(prices[i]-buy));
        }
        return price;
    }
};
