class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        int n = arr.size();
        unordered_map<int,int> mp;
        for( int i=0; i<n; i++ )
            mp[arr[i]]++;
        
        vector<int> freq;
        for( auto &i: mp )
            freq.push_back(i.second);

        sort(freq.begin(),freq.end());
        int m = freq.size();
        for( int count: freq )
        {
            if ( k >= count )
                k -= count;
            else
                break;
            m--;
        }
        return m;
    }
};