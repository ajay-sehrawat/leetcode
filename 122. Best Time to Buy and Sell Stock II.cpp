//Not DP solution but best solution.
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int ans = 0;
        for( int i=1; i<n; i++ )
        {
            if ( prices[i]-prices[i-1] > 0 )
                ans += prices[i]-prices[i-1];
        }
        return ans;
    }
};