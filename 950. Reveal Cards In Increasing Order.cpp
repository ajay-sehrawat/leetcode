class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n = deck.size();
        vector<int> ans(n,-1);
        sort(deck.begin(),deck.end());

        queue<int> q;
        for( int i=0; i<n; i++ )
            q.push(i);
        
        for( int i=0; i<n; i++ )
        {
            ans[q.front()] = deck[i];
            q.pop();

            if( !q.empty() )
            {
                int second = q.front();
                q.pop();
                q.push(second);
            } 
        }
        return ans;
    }
};