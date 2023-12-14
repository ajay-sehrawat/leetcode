class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<int> rc(n, 0);
        vector<int> cc(m, 0);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    rc[i]++;
                    cc[j]++;
                }
            }
        }

        for( int i=0; i<n; i++ )
        {
            for ( int j=0; j<m; j++ )
            {
                grid[i][j] = rc[i] + cc[j] - ((n-rc[i])+(m-cc[j]));
            }
        }

        return grid;
    }
};

//Refer Question 1582 Special Positions in a Binary Matrix for similar question details.