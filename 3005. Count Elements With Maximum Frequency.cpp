class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mp;

        for( int i : nums )
        {
            mp[i]++;
        }
        int ans = 0, max = 0;
        for (auto &i: mp )
        {
            if ( i.second > max )
            {
                max = i.second;
                ans = i.second;
            }
            else if ( i.second == max )
                ans += i.second;    
        }
        return ans;
    }
};