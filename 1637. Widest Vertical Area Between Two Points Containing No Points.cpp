class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int n = points.size();
        vector<int> temp(n);

        for( int i=0; i<n; i++ )
            temp[i] = points[i][0];

        sort(temp.begin(),temp.end());
        int ans = -1;
        for( int i=1; i<n; i++ )
        {
            if( temp[i] - temp[i-1] > ans )
                ans = temp[i] - temp[i-1];
        }
        return ans;
    }
};