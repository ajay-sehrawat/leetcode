class Solution {
public:
    int longestBeautifulSubstring(string word) {
        int n = word.size();
        if ( n < 5 )
            return 0;
        int count = 1, vow = 1, ans = 0;
        for( int i=0; i<n-1; i++ )
        {
            if ( word[i] == word[i+1] )
            {
                count++;
            }
            else if ( word[i] < word[i+1] )
            {
                count++;
                vow++;
            }
            else
            {
                if (vow == 5 )
                {
                    ans = max(count,ans);
                }
                vow = 1;
                count = 1;
            }

        }
        if (vow == 5 )
        {
            ans = max(count,ans);
        }
        return ans;
    }
};