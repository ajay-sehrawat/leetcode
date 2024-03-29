class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int n = s.size();
        int m = spaces.size(), j = 0;
        string ans = "";

        for( int i=0; i<n; i++ )
        {
            if ( j<m && i == spaces[j] )
            {
                ans.push_back(' ');
                j++;
            }
            ans.push_back(s[i]);
        }
        return ans;
    }
};