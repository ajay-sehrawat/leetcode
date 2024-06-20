class Solution {
public:
    int pivotInteger(int n) {
        int front = 0, end = 0;
        for( int i=1; i<=n; i++ )
        {
            front = (i*(i+1))/2;
            end = (n*(n+1))/2 - front+i; 
            if( front == end )
                return i;
        }
        return -1;
    }
};