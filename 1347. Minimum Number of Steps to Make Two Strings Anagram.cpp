class Solution {
public:
    int minSteps(string s, string t) {
        int n = s.size();
        vector<int> freq(26,0);

        for( int i=0; i<n; i++ )
        {
            freq[s[i]-'a']++;
        }
        for( int i=0; i<n; i++ )
        {
            if ( freq[t[i]-'a'] )
                freq[t[i]-'a']--;
        }
        int count = 0;
        for( int i=0; i<26; i++ )
        {
            count += freq[i];
        }
        return count;
    }
};