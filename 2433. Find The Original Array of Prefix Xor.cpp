class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int n = pref.size();
        vector<int> ans;
        ans.push_back(pref[0]);
        int temp;
        for( int i=1; i<n; i++ )
        {
            temp = pref[i-1]^pref[i];
            ans.push_back(temp);
        }
        return ans;
    }
};