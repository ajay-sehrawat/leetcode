class Solution {
public:
    string removeDuplicateLetters(string s) {
        int n = s.size();
        vector<int> freq(26,0), visited(26,0);
        
        for( int i=0; i<n; i++ )
        {
            freq[s[i]-'a']++;
        }
        string ans = "";

        for( int i=0; i<n; i++ )
        {
            freq[s[i] -'a']--;

            if( !visited[s[i] -'a'] )
            {
                while( ans.size() > 0 && ans.back() > s[i] && freq[ans.back() -'a'] > 0 )
                {
                    visited[ans.back() -'a'] = false;
                    ans.pop_back();
                }
                ans += s[i];
                visited[s[i] -'a'] = true;
            }
            
        }

        return ans;
    }
};