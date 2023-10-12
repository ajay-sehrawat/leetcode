//See HackerEath Dynamic Programming in 2D array article.
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();

        int minC[r][c];
        minC[0][0] = grid[0][0];

        for ( int i=1; i<r; i++ )
            minC[i][0] = minC[i-1][0] + grid[i][0];

        for ( int j=1; j<c; j++ )
            minC[0][j] = minC[0][j-1] + grid[0][j];

        for(int i=1; i<r; i++)
            for(int j=1; j<c; j++)
                minC[i][j] = min(minC[i-1][j], minC[i][j-1]) + grid[i][j];
        
        return minC[r-1][c-1];
    }
};