class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<string>ans(n);
        unordered_map<int,int> mp;
        priority_queue<int> pq;
        for( int i=0; i<n; i++ )
        {
            mp[score[i]] = i;
            pq.push(score[i]);
        }
        int count = 1 , pos;
        while( !pq.empty() )
        {
            pos = mp[pq.top()];
            pq.pop();
            if ( count == 1 )
                ans[pos] = "Gold Medal";
            else if ( count == 2 )
                ans[pos] = "Silver Medal";
            else if ( count == 3 )
                ans[pos] = "Bronze Medal";
            else
                ans[pos] = to_string(count);
            count++;
        }
        return ans;
    }
};
//Using A Vector Pair is easy
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<pair<int,int>> pairs(n);
        for (int i=0; i<n; i++) 
        {
            pairs[i] = {score[i], i};
        }
        sort(pairs.rbegin(), pairs.rend());

        vector<string> ans(n);
        for (int i=0; i<n; i++)
        {
            if ( i == 0 )
                ans[pairs[i].second] = "Gold Medal";
            else if ( i == 1 )
                ans[pairs[i].second] = "Silver Medal";
            else if ( i == 2 )
                ans[pairs[i].second] = "Bronze Medal";
            else
                ans[pairs[i].second] = to_string(i+1);
        }
        return ans;
    }
};1598. Crawler Log Folder