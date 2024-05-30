class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int least = INT_MAX, n = prices.size(), ans = 0;

        for( int i=0; i<n; i++ )
        {
            if ( prices[i] - least > 0 )
                ans = max(ans, prices[i]-least);
                
            least = min(least,prices[i]);
        }
        return ans;
    }
};