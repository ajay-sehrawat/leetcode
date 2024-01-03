class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        cout<<n;
        int f=0, e = 0, point = 1;
        while ( point <= n ){
            if ( s[point] == ' ' || point == n ){
                e = point -1;
                while ( f < e ){
                    swap(s[f],s[e]);
                    f++;
                    e--;
                }
                f = point+1;
            }
           point++;
        }
        return s;
    }
};