class Solution {
public:
    int twoEggDrop(int n) {
        int temp = 1;
        while ( n>0 )
        {
            n -= temp;
            temp++;
        }
        return temp-1;
    }
};