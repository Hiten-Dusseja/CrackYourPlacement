class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 0,n=prices.size();
        int profit = 0;
        int mini = prices[0];
        for(i=0;i<n;i++)
        {
            if(prices[i]<mini){
                mini = prices[i];
            }
            else
            {
                profit = max(profit, prices[i]-mini);
            }
        }
        return profit;
    }
};