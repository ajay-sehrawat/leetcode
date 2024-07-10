class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n = s.size(), count = 0;
        for( int i=0; i<n; i++ )
        {
            if( s[i] == '1' )
                count++;
            s[i] = '0';
        }
        s[n-1] = '1';
        count--;
        int i=0;
        while( count>0 ){
            s[i++] = '1';
            count--;
        }
        return s;
    }
};