class Solution {
public:
    string replaceDigits(string s) {
        int n = s.size();
        int num;
        for( int i=1; i<n; i+=2 )
        {
            num = s[i] - 48;
            s[i] = s[i-1]+num;
        }
        return s;
    }
};