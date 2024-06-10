class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> mp;
        unordered_map<string,char> mp2;
        stringstream ss(s);
        int n = pattern.size();
        string word;
        for( int i=0; i<n; i++ )
        {
            ///If no of words in "s" is smaller than pattern.size();
            if( !(ss >> word) )
                return false;
            if( mp.find(pattern[i]) != mp.end() )
            {
                if( mp[pattern[i]] != word )
                    return false;
            }
            if ( mp2.find(word) != mp2.end() )
            {
                if( mp2[word] != pattern[i] )
                    return false;
            }
            mp[pattern[i]] = word;
            mp2[word] = pattern[i];
        }
        if ( ss >> word )  
            return false; ///If no of words in "s" is greater than pattern.size();;
        return true;
    }
};