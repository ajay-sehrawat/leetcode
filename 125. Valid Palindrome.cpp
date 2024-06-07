class Solution {
public:
    bool isPalindrome(string s) {
        string check;

        for ( char c: s )
        {
            if ( c >= 48 && c <= 57 )
                check += c;
            else if( c>= 97 && c <= 122 )
                check += c;
            else if ( c>= 65 && c <= 90 )
                check += c+32;
        }
        string ans = check;
        reverse(ans.begin(),ans.end());
        return ans == check;
    }
};