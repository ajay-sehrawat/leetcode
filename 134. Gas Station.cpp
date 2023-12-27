// Came up with an O(n2) solution right after seeing the question modified it a lot to reach O(n)
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {

        int n = gas.size(), gass = 0, costt = 0;
        int bal = 0, ans = 0;
        
        for( int i=0; i<n; i++ )
        {
            gass += gas[i];
            costt += cost[i];
            bal += gas[i] - cost[i];

            if ( bal < 0 )
            {
                ans = i+1;
                bal = 0;
            }
        }
        return gass>=costt?ans:-1;
    }
};