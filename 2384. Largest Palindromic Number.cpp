class Solution {
public:
    string largestPalindromic(string num) {
        vector<int> freq(10,0);
        string ans;
        int start = 1;
        for( int i=0; i<num.size(); i++ )
        {
            freq[num[i]-'0']++;
            if ( freq[num[i]-'0'] > 1 && num[i] != '0' )
                start = 0;
        }
        int mid = -1;
        for( int i=start; i<10; i++ )
        {
            if ( freq[i] == 1 )
                mid = i;
            while( freq[i] > 1 )
            {
                ans.insert(0,1,'0'+i);
                ans += '0'+i;
                freq[i] -= 2;
            }
        }
        if ( mid != -1 )
            ans.insert(ans.size()/2, 1, '0' + mid);

        return ans;

    }
}; 
"444947137"
"00009"
"99658832"
"00001105"
"00000"