class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,int> mp;
        string temp;
        int count = -1;
        for ( int i=0; i<strs.size(); i++ )
        {
            temp = strs[i];
            sort(strs[i].begin(), strs[i].end());
            if ( mp.find(strs[i]) == mp.end() )
            {
                mp[strs[i]] = ++count;
            }
            strs[i] = temp;
        }
        int n = mp.size();
        vector<vector<string>> ans(n);
        for( int i=0; i<strs.size(); i++ )
        {
            temp = strs[i];
            sort(strs[i].begin(),strs[i].end());
            ans[mp[strs[i]]].push_back(temp);
        }
        return ans;
    }
};
//Optimized but not that fast 2ms faster only
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        
        for(auto x: strs){
            string word = x;
            sort(word.begin(), word.end());
            mp[word].push_back(x);
        }
        
        vector<vector<string>> ans;
        for(auto x: mp){
            ans.push_back(x.second);
        }
        return ans;
    }
};
