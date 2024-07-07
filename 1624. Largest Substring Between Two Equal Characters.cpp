class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int n = s.size();
        int ans = -1, check;
        for( int i=0; i<n; i++ )
        {

            for( int j=i+1; j<n; j++ )
            {
                if ( s[i] == s[j] )
                    ans = max(ans,(j-i-1));
            }
        }
        return ans;
    }
};
//Hash Map Method
//Hash Map Method
class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<int,int> mp;
        int ans = -1;
        for( int i=0; i<s.size(); i++ )
        {
            if ( mp.find(s[i]) != mp.end() )
                ans = max(ans,i-mp[s[i]]-1);
            else
                mp[s[i]] = i;
        }
        return ans;
    }
};