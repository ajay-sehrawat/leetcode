/*class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size(), start = 0, count = 0, temp = 0;
        vector<int> freq(26);
        for (int i=0; i<n; i++ )
        {
            freq[s[i] -'a']++;
            if( freq[s[i] -'a'] > 1 )
            {
                temp = i-start;
                count = max( count, temp );
                while ( start < i )
                {
                    freq[s[start] -'a'] = 0;
                    start++;
                }
                freq[s[i] -'a']++; //setting current value freq to 1;
            }
        } 
        return count;
    }
};*/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size(), start = 0, count = 0, temp = 0;
        vector<int> freq(256, 0);
        
        for (int i = 0; i < n; i++) {
            freq[s[i]]++;
            if (freq[s[i]] > 1) {
                while (freq[s[i]] > 1) {
                    freq[s[start]]--;
                    start++;
                }
            }
            temp = i - start + 1;
            count = max(temp, count);
        }
        return count;
    }
};
