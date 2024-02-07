class Solution {
public:
    int minDeletions(string s) {
        vector<int> freq(26,0);
        for( int i=0; i<s.size(); i++ )
        {
            freq[s[i]-'a']++;
        }
        unordered_set<int> used;
        int count = 0;
        for( int i=0; i<26; i++ )
        {
            while ( freq[i]>0 && !used.insert(freq[i]).second )
            {
                freq[i]--;
                count++;
            }
        }
        return count;
    }
};