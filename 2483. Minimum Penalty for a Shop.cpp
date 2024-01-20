class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.size();
        int ysum=0;
        for( int i=0; i<n; i++ )
        {
            if ( customers[i] == 'Y' )
                ysum++;
        }
        //For 0th hour
        int count = ysum, time = 0, ans = ysum;
        for( int i=1; i<=n; i++ )
        {
            if ( customers[i-1] == 'Y' )
                count--;
            else
                count++;

            if ( ans > count ){
                ans = count;
                time = i;
            }
        }
        return time;
    }
};