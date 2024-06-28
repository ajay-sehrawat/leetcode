class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int,int> mp;
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        for( int i=0; i<nums.size(); i++ )
        {
            mp[nums[i]]++;
        }
        int ans = -1, temp = -1;
        for( int i=0; i<nums.size(); i++ )
        {
            if ( mp.find(-nums[i]) != mp.end() )
                temp = abs(nums[i]);
            
            ans = max(ans,temp);
        }
        return ans;
    }
};