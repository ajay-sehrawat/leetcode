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
class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        if ( n<=0 )
            return fasle;
        return ((n & (n-1)) == 0  );

    }
};
/*The bitwise AND operation & between n and n - 1 clears the lowest set bit of n. For instance:

    If n=4n=4 (binary: 0100), then n−1=3n−1=3 (binary: 0011).
    Performing n & (n - 1) results in 0100 & 0011 = 0000.*/