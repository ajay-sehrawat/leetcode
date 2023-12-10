class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length()-1;
        int count = 0;
        for( int i=n; i>=0; i-- )
        {
            if( s[i] == ' ' ){
                if( count > 0 )
                    break;
            }
            else
                count++;
        }
        return count;
    }
};