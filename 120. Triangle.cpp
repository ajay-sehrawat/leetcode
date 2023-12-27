class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<int> dp(n);
        dp[0] = triangle[0][0];

        for (int i = 1; i < n; i++) {
            dp[i] = dp[i - 1] + triangle[i][i]; // Last element in row i
            for (int j = i - 1; j > 0; j--) {
                dp[j] = min(dp[j - 1], dp[j]) + triangle[i][j];
            }
            dp[0] += triangle[i][0]; // First element in row i
        }

        int ans = dp[0];
        for (int i = 1; i < n; i++) {
            ans = min(ans, dp[i]);
        }
        return ans;
    }
};
