class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int n = points.size();
        int ans = 0, temp1 = 0, temp2 = 0;
        for( int i=n-1; i>0; i-- )
        {
            temp1 = abs(points[i][1]-points[i-1][1]);
            temp2 = abs(points[i][0]-points[i-1][0]);
            ans += max(temp1,temp2);
        }
        return ans;
    }
};