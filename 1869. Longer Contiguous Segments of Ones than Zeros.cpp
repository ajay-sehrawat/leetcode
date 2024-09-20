class Solution {
public:
    bool checkZeroOnes(string s) {
        int maxZero = 0, maxOne = 0, n = s.size(), j=0;

        for( int i=0; i<n; i++ )
        {
            j = i;
            while ( i<n && s[i] == '0' )
            {
                i++;
            }
            maxZero = max(maxZero,i-j);
            j = i;
            while( i<n && s[i] == '1' )
            {
                i++;
            }
            maxOne = max(maxOne,i-j);
            i--;
        }
        return maxOne>maxZero;
    }
};