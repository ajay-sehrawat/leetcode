//63/63 Passed, Still TLE took too long
class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n = nums.size();
        int ans = 0, j = 0;
        sort(nums.begin(),nums.end());
        for( int i=0; i<n; i++ )
        {
            if ( i>0 && nums[i] != nums[i-1] )
                j = 0;
            while( mp.find(nums[i]+j) != mp.end() )
            {
                j++;
            }
            ans += j;
            mp[nums[i]+j]++;
        }
        return ans;
    }
};
//Greedy Approach
class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int prev = nums[0], ans = 0;
        for( int i=1; i<n; i++ )
        {
            if ( nums[i] <= prev )
            {
                prev++;
                ans += prev - nums[i];
            }
            else 
                prev = nums[i];
        }
        return ans;
    }
};