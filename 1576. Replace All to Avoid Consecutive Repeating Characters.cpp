class Solution {
public:
    string modifyString(string s) {
        int n = s.size();
        if ( n == 1 && s[0] == '?' )
            return "a";

        for( int i=1; i<n-1; i++ ){
            if ( s[i] == '?' )
            {
                s[i] = 'a';
                while( (s[i] == s[i-1]) || (s[i] == s[i+1]) )
                    s[i]++;   
            }
        }
        if ( s[0] == '?' )
        {
            s[0] = 'a';
            if ( s[0] == s[1] )
                s[0]++;
        }
        if ( s[n-1] == '?' )
        {
            s[n-1] = 'a';
            if ( s[n-1] == s[n-2] )
                s[n-1]++;
        }
        return s;
    }
};