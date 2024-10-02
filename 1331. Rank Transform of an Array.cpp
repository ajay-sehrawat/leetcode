class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        vector<int> temp(arr);
        sort(temp.begin(),temp.end());
        int rank = 0;
        unordered_map<int,int> mp;
        for( int i=0; i<n; i++ )
        {
            if ( mp.find(temp[i]) != mp.end() )
                mp[temp[i]] = rank;
            else
                mp[temp[i]] = ++rank;
        }
        for( int i=0; i<n; i++ )
        {
            arr[i] = mp[arr[i]];
        }

        return arr;

    }
};