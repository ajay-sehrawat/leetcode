class Solution {
public:
    int findTheWinner(int n, int k) {
        int i = 0, count = 1, loopvar = n;
        vector<int> ans(n,1);
        while( loopvar > 0 )
        {
            if ( (ans[i%n] == 1) && (count == k) )
            {
                ans[i%n] = -1;
                loopvar--;
                i++;
                count = 1;
            }
            else if ( ans[i%n] == -1 )
                i++;
            else
            {
                i++;
                count++;
            }
        }
        i--;
        return (i%n) + 1;
    }
};
//If ELse Simplified
class Solution {
public:
    int findTheWinner(int n, int k) {
        int i = 0, count = 1, remaining = n;
        vector<int> ans(n, 1);
        while (remaining > 0) {
            if (ans[i % n] == 1) 
            {
                if (count == k) 
                {
                    ans[i % n] = -1;
                    remaining--;
                    count = 0;
                }
                count++;
            }
            i++;
        }
        return (i-1)%n+1;
    }
};