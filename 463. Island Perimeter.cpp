class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        
        int n = grid.size(),m = grid[0].size();
        int count =0, peri = 0;
        //Row Traversal
        for (int i=0; i<n; i++ )
        {
            for(int j=0; j<m; j++ )
            {
                if ( grid[i][j] == 1 )
                    count++;
                else if ( count > 0 )
                {
                    peri += 2;
                    count = 0;
                }
            }
            if ( count > 0 )
                {
                    peri += 2;
                    count = 0;
                }
        }
        count = 0;
        //Column Traversal
        for (int j=0; j<m; j++ )
        {
            for(int i=0; i<n; i++ )
            {
                if ( grid[i][j] == 1 )
                    count++;
                else if ( count > 0 )
                {
                    peri += 2;
                    count = 0;
                }
            }
            if ( count > 0 )
                {
                    peri += 2;
                    count = 0;
                }
        }
        return peri;
    }
};