/*class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int n = s.length();
        int m = t.length();

        int i = n-1, j=m-1;
        cout<<i<<" "<<j<<endl;
        while ( i >= 0 && j >= 0 )
        {
            if( s[i] == '#' ){
                if ( s[i-1] == '#' )
                    i--;
                else
                    i-=2;
                continue;
            }
            if( t[j] == '#' ){
                if ( t[j-1] == '#' )
                    i--;
                else
                    i-=2;
                continue;
            }
            if ( s[i] != t[j] )
                return 0;
            i--;
            j--;
        }
        if ( i>=0 && s[i] !='#' )
            return 0;
        else if( j>=0 && t[j] !='#' )
            return 0;
        else
            return 1;
    }
};*/
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int i = s.length()-1, j=t.length()-1, scount = 0, tcount =0;

        while ( i >= 0 || j >= 0 )
        {
            while ( i>= 0 ){
                if ( s[i] == '#' ){
                    scount++;
                    i--;
                }
                else if ( scount > 0 ){
                    scount--;
                    i--;
                }
                else
                    break;
            }
            while ( j>= 0 ){
                if ( t[j] == '#' ){
                    tcount++;
                    j--;
                }
                else if ( tcount > 0 ){
                    tcount--;
                    j--;
                }
                else
                    break;
            }
            if ( i>=0 && j>=0 && s[i] != t[j] )
                return 0;
            if ( (i >= 0) != (j >= 0) )
                return 0;
            i--;
            j--;
        }
        return 1;
    }
};