class Solution {
public:
    int appendCharacters(string s, string t) {
        int n = t.size(), m = s.size();
        int i=0, j =0;

        while( i<n && j<m )
        {
            if ( t[i] == s[j] )
            {
                i++, j++;
            }
            else
                j++;
        }
        return n-i;
    }
};