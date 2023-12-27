class Solution {
public:
    int minCost(string arr, vector<int>& neededTime) {
        int n = arr.size();
        int time = 0, sum = 0, mx = 0;

        for (int i=0; i<n; i++ )
        {
            while ( i<n-1 && arr[i] == arr[i+1] )
            {
                mx = max(mx,neededTime[i]);
                sum += neededTime[i];
                i++;
            }
            mx = max(mx,neededTime[i]);
            sum += neededTime[i];
            time += sum - mx;
            sum = 0;
            mx = 0;
        }
        return time;
    }
};