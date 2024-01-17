class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        int n = matches.size();
        unordered_map<int, int> los;
        unordered_set<int> loser;
        unordered_set<int> win;
        for (int i = 0; i < n; i++)
            los[matches[i][1]]++;

        for (auto i = los.begin(); i != los.end(); i++)
        {
            if (i->second == 1)
                loser.insert(i->first);
        }
        for (int i=0; i<n; i++ )
        {
            if( loser.find(matches[i][0]) == loser.end() )
                win.insert(matches[i][0]);
        }

         vector<vector<int>> result;
        
        
        vector<int> winVec(win.begin(), win.end());
        result.push_back(winVec);

        vector<int> loserVec(loser.begin(), loser.end());
        result.push_back(loserVec);

        return result;
    }
};
