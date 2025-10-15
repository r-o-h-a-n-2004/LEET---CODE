class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max1=0;
        int min_past = INT_MAX;
        int profit;
        for(int i=1;i<prices.size();i++){
            min_past=min(min_past,prices[i-1]);
            profit=prices[i]-min_past;
            max1=max(max1,profit);
        }
        return max1;
    }
};