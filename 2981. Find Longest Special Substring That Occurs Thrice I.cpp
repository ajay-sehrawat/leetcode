class Solution {
public:
    int maximumLength(string s) {
        int n = s.size();
        vector<int> freq(26);
        for( int i=0; i<s.size(); i++ )
        {
            freq[s[i]-'a']++;
        }
        int count = 0, ans = 99999, final = -1;
        char temp;

        for( int i=0; i<26; i++ )
        {
            if ( freq[i] >= 3 )
                temp = 'a'+i;
            for( int j=0; j<n; j++ )
            {
                if( temp == s[j] )
                    count++;
                else if ( count != 0 )
                {
                    ans = min(count,ans);
                    count = 0;
                    }
            }
            final = max(ans,final);
            count = 0;
            ans = 99999;
        }
        return final;
    }
};