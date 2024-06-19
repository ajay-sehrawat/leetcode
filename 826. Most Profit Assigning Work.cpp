class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int n = profit.size();
        vector<pair<int,int>> work(n);

        for( int i=0; i<n; i++ )
        {
            work[i] = {difficulty[i],profit[i]};
        }

        sort(work.begin(),work.end());
        sort(worker.begin(),worker.end());
        priority_queue<int> maxProfit;

        int j = 0;
        int ans = 0;
        for( int i=0; i<worker.size(); i++ )
        {
            while(j<n && work[j].first <= worker[i] )
            {
                maxProfit.push(work[j].second);
                j++;
            }
            if ( maxProfit.empty() )
                continue;
            ans += maxProfit.top();
        }
        return ans; 
    }
};