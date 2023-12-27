class Solution {
public:
    int minOperations(string s) {
        int count, n = s.size();

        for( int i=0; i<n; i++ )
        {
            if( i%2 == 0 ){
                if( s[i] == '1' )
                    count++;
            }
            else{
                if( s[i] == '0' )
                    count++;
            }
                
        }
        return min(count, n-count);
    }
};