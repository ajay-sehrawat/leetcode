class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int n = rectangles.size();
        int count = 0, ans = 0, num;
        for( int i=0; i<n; i++ )
        {
            num = min(rectangles[i][0],rectangles[i][1]);
            
            if ( num > ans )
            {
                ans = num;
                count = 1;
            }
            else if ( num == ans )
                count++;
        }
        return count;
    }
};