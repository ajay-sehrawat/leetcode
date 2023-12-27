class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int n=img.size(), m = img[0].size();
        vector<vector<int>> ans(n,vector<int>(m));
        int sum, count =0;
        for( int i=0; i<n; i++ )
        {
            for( int j=0; j<m; j++ )
            {
                count = 0, sum = 0;
                for (int x=i-1; x<=i+1; x++ )
                    for( int y=j-1; y<=j+1; y++ )
                    {
                        if( x>=0 && x<n && y>=0 && y<m )
                        {
                            count++;
                            sum += img[x][y];
                        }
                    }
                ans[i][j] = sum/count;
            }
        }
        return ans;
    }
};