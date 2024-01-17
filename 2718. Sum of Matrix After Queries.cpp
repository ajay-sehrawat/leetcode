//TLE 2678 / 2688 testcases passed, Good SOlution, O(n^2)
class Solution {
public:
    long long matrixSumQueries(int n, vector<vector<int>>& queries) {
        vector<vector<int>> mat(n, vector<int>(n, 0));

        int m = queries.size();
        int j, type, ind, val;
        long long int sum = 0;
        for( int i=0; i<m; i++ )
        {
            type = queries[i][0];
            ind = queries[i][1];
            val = queries[i][2];
            if ( type == 0 )
            {
                j = 0;
                while( j < n )
                {
                    if ( mat[ind][j] != 0 )
                        sum -= mat[ind][j]; 
                    
                    sum += val;
                    mat[ind][j] = val;
                    j++;
                }
            }
            else
            {
                j = 0;
                while( j < n )
                {
                    if ( mat[j][ind] != 0 )
                        sum -= mat[j][ind]; 
                    
                    sum += val;
                    mat[j][ind] = val;
                    j++;
                }
            }
        }
        return sum;
    }
};
// Works O(n) Solution
class Solution {
public:
    long long matrixSumQueries(int n, vector<vector<int>>& queries) {
       vector<int> row(n,0), col(n,0);
        int m = queries.size();
        int j, type, ind, val, row_c = n, col_c = n;
        long long int sum = 0;
        for( int i=m-1; i>=0; i-- )
        {
            type = queries[i][0];
            ind = queries[i][1];
            val = queries[i][2];
            if ( type == 0 )
            {
               if ( row[ind] != 1 )
               {
                    row[ind] = 1;
                    sum += val * col_c;
                    row_c--;
               }
            }
            else
            {
                if ( col[ind] != 1 )
                {
                    col[ind] = 1;
                    sum += val * row_c;
                    col_c--;
                }
            }
        }
        return sum;
    }
};