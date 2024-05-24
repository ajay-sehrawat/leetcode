//This Solution takes O(m*n) worst case time as Outer loop takes O(n) worst case time and inside the loop substr take O(m) time.

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size(), m = needle.size();
        string temp;
        for( int i=0; i<=n-m; i++ )
        {
            temp = haystack.substr(i,m);
            if ( temp == needle )
                return i;
        }
        return -1;
    }
};

//2nd Solution
KMP Solution which takes O(m+n) time