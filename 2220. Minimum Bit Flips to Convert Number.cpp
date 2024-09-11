class Solution {
public:
    int minBitFlips(int start, int goal) {
        //Ans is no of 1's in XOR of start and goal
        int count = 0;
        int ans = start ^ goal;
        while ( ans > 0 )
        {
            if ( ans%2 != 0 )
                count++;
            ans = ans/2;
        }   
        return count;
    }
};