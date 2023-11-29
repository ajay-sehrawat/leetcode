class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n = piles.size();

        sort(piles.begin(),piles.end(),greater<int>());
        int ans = 0;

        for( int i=0; i<n-n/3; i++ )
        {
            if( i%2 != 0 )
                ans += piles[i];
        }
        return ans;
    }
};