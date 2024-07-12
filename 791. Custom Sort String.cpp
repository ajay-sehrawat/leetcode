class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int> mp;
        string ans;
        for( int i=0; i<s.size(); i++ )
        {
            mp[s[i]]++;
        }
        for( int i=0; i<order.size(); i++ )
        {
            if ( mp.find(order[i]) != mp.end() )
            {
                while( mp[order[i]] > 0 )
                {
                    ans += order[i];
                    mp[order[i]]--;
                }
            }
        }
        for( int i=0; i<s.size(); i++ )
        {
            if ( mp[s[i]] > 0 )
            {
                ans += s[i];
                mp[s[i]]--;
            }
        }
        return ans;
    }
};