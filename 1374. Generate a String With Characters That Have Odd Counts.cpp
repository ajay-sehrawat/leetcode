class Solution {
public:
    string generateTheString(int n) {
        string ans;
        if ( n%2 != 0 )
        {
            ans = string(n,'x');
        }
        else
        {
            ans = string(n-1,'x');
            ans += 'y';
        }

        return ans;
    }
};