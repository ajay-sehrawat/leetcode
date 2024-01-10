class Solution {
public:
    int maxPower(string s) {
        vector<int> freq(26,0);
        int n = s.size(), ans = 0, count = 1;

        for( int i=1; i<n; i++ )
        {
            if ( s[i] == s[i-1] )
                count++;
            else 
            {
                ans = max(ans,count);
                count = 1;
            }
        }
        ans = max(ans,count);
        return ans;
    }
};