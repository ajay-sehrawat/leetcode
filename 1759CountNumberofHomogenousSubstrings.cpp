class Solution {
public:
    int countHomogenous(string s) {
        int n = s.length();

        int m = 1000000007;
        long long int ans= 0, count = 1;
        for( int i=1; i<n; i++ )
        {
            if ( s[i-1] == s[i] )
                count++;
            else{
                ans += (count*(count+1))/2;
                count = 1;
            }
        }
        ans += (count*(count+1))/2;
        ans = ans%m;
        return ans;
    }
};