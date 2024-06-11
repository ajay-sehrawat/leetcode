class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans, last;
        unordered_map<int,int> mp;
        for( int i=0; i<arr1.size(); i++ )
        {
            mp[arr1[i]]++;
        }
        for( int i=0; i<arr2.size(); i++ )
        {
            while ( mp[arr2[i]] > 0 )
            {
                ans.push_back(arr2[i]);
                mp[arr2[i]]--;
            }
        }
        
        for( int i=0; i<arr1.size(); i++ )
        {
            while ( mp[arr1[i]] > 0 )
            {
                last.push_back(arr1[i]);
                mp[arr1[i]]--;
            }
        }
        sort(last.begin(),last.end());
        for( int i=0; i<last.size(); i++ )
            ans.push_back(last[i]);
        return ans;
    }
};