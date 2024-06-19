//Simple O(1) solution
class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        for( int i=0; i<32; i++ )
        {
            if( pow(2,i) > n )
                return false;
            else if ( pow(2,i) == n )
                return true;
        }
        return false;
    }
};
//Without loop Solution