class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int n = nums.size();
        vector<int> sum(n);
        unordered_map<int,int> mp;
        int count = 0;
        int ans = 0;
        for( int i=0; i<n; i++ )
        {
            if ( nums[i] == 0 )
                sum[i] = --count;
            else 
                sum[i] = ++count;
            if ( sum[i] == 0 )
                ans = max(ans,i+1);
            if ( mp.find(sum[i]) != mp.end())
                ans = max(ans,i-mp[sum[i]]);
            else
                mp[sum[i]] = i;
        }
        return ans;

    }
};