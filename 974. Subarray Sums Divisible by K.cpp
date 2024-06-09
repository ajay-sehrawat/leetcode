class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;
        mp[0] = 1;
        int sum = 0, remainder, count=0;
        for( int i=0; i<n; i++ )
        {
            sum += nums[i];
            remainder = ((sum % k) + k) % k;
            if ( mp.find(remainder) != mp.end() )
                count += mp[remainder];
        
            mp[remainder]++;
        }
        return count;
    }
};