class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> freq;
        unordered_set<int> ans;
        for( int i=0; i<arr.size(); i++ )
        {
            freq[arr[i]]++;
        }
        for( auto i=freq.begin(); i!=freq.end(); i++)
        {
            ans.insert(i->second);
        }
        return ans.size() == freq.size();
    }
};