class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int n = words.size();
        for( int i=0; i<n; i++ )
        {
            string check = words[i];
            int j = 0, k = check.size()-1;
            while( j<=k )
            {
                if ( check[j] != check[k] )
                    break;
                j++,k--;
            }
            if ( j>k )
                return check;
        }
        return "";
    }
};