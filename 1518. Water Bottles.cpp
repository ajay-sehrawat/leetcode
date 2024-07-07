class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans = 0, rem = 0, emptyBottles = 0;

        while ( (numBottles+emptyBottles) >= numExchange )
        {
            ans += numBottles;
            emptyBottles += numBottles;

            numBottles = emptyBottles/numExchange;
            emptyBottles = emptyBottles%numExchange;
        }
        ans += numBottles;
        return ans;
    }
};  