//Just Brute Force Everything is the fastest solution 
class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> common(26,0);
        vector<string> ans;

        int n = words.size();

        for( char c: words[0] )
        {
            common[c-'a']++;
        }
        for( int i=1; i<n; i++ )
        {
            vector<int> current(26,0);
            for( char c: words[i] )
            {
                current[c-'a']++;
            }
            for( int k=0; k<26; k++ )
            {
                common[k] = min(common[k],current[k]);
            }
        }
        
        for( int i=0; i<26; i++ )
        {
            for( int j = 0; j<common[i]; j++ )
                ans.push_back(string(1, i+'a'));
        }
        return ans;
    }
};