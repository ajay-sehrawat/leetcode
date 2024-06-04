class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.size();
        vector<int> freq(128,0);
        for( int i=0; i<n; i++ )
        {
            freq[s[i]]++;
        }
        int flag = 0, sum = 0;
        for( int i=65; i<123; i++ )
        {
            if ( freq[i]%2 != 0 ){
                flag = 1;
                sum += freq[i] - 1;
            }
            else
                sum += freq[i];
        }
        return flag == 1?sum+1:sum;
    }
};