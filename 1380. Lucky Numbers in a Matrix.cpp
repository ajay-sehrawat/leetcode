//Find out and save the minimum of each row and maximum of each column in two lists.
//Then scan through the whole matrix to identify the elements that satisfy the criteria.
class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> rowMin(n);
        vector<int> colMax(m);
        int minEle = INT_MAX;
        for( int i=0; i<n; i++ )
        {
            minEle = INT_MAX;
            for( int j=0; j<m; j++ )
            {
                if ( matrix[i][j] < minEle )
                    minEle = matrix[i][j];
            }
            rowMin[i] = minEle;
        }
        int maxEle = -1;
        for( int i=0; i<m; i++ )
        {
            maxEle = -1;
            for( int j=0; j<n; j++ )
            {
                if ( matrix[j][i] > maxEle )
                    maxEle = matrix[j][i];
            }
            colMax[i] = maxEle;
        }
        vector<int> ans;
        for( int i=0; i<n; i++ )
        {
            for( int j=0; j<m; j++ )
            {
                if ( matrix[i][j] == rowMin[i] && matrix[i][j] == colMax[j] )
                    ans.push_back(matrix[i][j]);
            }
        }

        return ans;
    }
};