/*If there is only 1 obstacle
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& nums) {
        if ( nums[0][0] == 1 )
            return 0;
        int m = nums.size();
        int n = nums[0].size();
        cout<<m<<endl<<n;
        vector<vector<int>> dp(m, vector<int>(n, 0));

        for ( int i = 0; i<m; i++ )
            for( int j =0; j<n; j++ )
            {
                if ( nums[i][j] == 1 )
                    dp[i][j] = 0;
                else
                    dp[i][j] = 1;
            }

            20

            return dp[m-1][n-1];
    }
};*/