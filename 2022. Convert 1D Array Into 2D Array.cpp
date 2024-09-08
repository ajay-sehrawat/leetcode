class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int origSize = original.size();
        cout<<origSize<<endl;
        if ( m*n != origSize )
        {
            return {};
        }
        vector<vector<int>> model( m , vector<int> (n)); 
        int count = -1, temp;
        for( int i=0; i<origSize; i++ )
        {
            model[i/n][i%n] = original[i];
        }
        return model;
    }
};