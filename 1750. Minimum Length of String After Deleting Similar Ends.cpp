class Solution {
public:
    int minimumLength(string s) {
        int i = 0, j = s.size()-1;

        while( i<j )
        {
            if ( s[i] == s[j] )
            {
                while( s[i] == s[j] && i<j )
                    i++;
                i--;
                while( s[i] == s[j] && j>i )
                    j--;
                i++;
                cout<<j<<i<<endl;
            }
            else
                return j-i+1;          
        } 
        if ( i == j )
            return 1;
        else if ( i > j )
            return 0;
        return -1;
    }
};