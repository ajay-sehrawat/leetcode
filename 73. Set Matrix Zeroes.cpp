class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) {
        /*
        //This is a O(m+n) space solution best solution require constant space.
        int n = arr.size();
        int m = arr[0].size();
        vector< pair <int,int> > vect;
        for ( int i=0; i<n; i++ )
        {
            for ( int j=0; j<m; j++ )
            {
                if ( arr[i][j] == 0 ){
                    vect.push_back(make_pair(i,j));
                }
            }
        }
        
        for (int i = 0; i < vect.size(); i++) {
            int row = vect[i].first;
            int col = vect[i].second;

            // Set entire row to zero
            for (int j = 0; j < m; j++) {
                arr[row][j] = 0;
            }

            // Set entire column to zero
            for (int j = 0; j < n; j++) {
                arr[j][col] = 0;
            }
        }
        */
        //This is an O(1) space solution.
    int col0 = 1, rows = arr.size(), cols = arr[0].size();

    for (int i = 0; i < rows; i++) {
        if (arr[i][0] == 0) col0 = 0;
        for (int j = 1; j < cols; j++)
            if (arr[i][j] == 0)
                arr[i][0] = arr[0][j] = 0;
    }

    for (int i = rows - 1; i >= 0; i--) {
        for (int j = cols - 1; j >= 1; j--)
            if (arr[i][0] == 0 || arr[0][j] == 0)
                arr[i][j] = 0;
        if (col0 == 0) arr[i][0] = 0;
    }
            
    }
};