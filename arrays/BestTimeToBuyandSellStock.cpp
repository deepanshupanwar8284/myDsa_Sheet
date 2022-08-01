#include <bits/stdc++.h>
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrices = INT_MAX;
        int profit = 0;
        for(int i =0;i<prices.size();i++){
            minPrices = min(minPrices,prices[i]);
            profit = max(profit , prices[i]-minPrices);
            
        }
        return profit;
        
        
    }
};
