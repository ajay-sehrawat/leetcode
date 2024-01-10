class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        int i = 0, n = s1.size();

        while( i<n && s1[i] >= s2[i] )
            i++;
        if ( i == n )
            return true;
        i = 0;
        while( i<n && s1[i] <= s2[i] )
            i++;
        
        return (i == n);
    }
};