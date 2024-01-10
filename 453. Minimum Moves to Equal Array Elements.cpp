class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int min = nums[0], ans = 0; 
        for( int i=1; i<n; i++ )
        {
            if ( min>nums[i] )
                min = nums[i];
        }
        for( int i=0; i<n; i++ )
        {
            ans += nums[i]-min;
        }
        return ans;
    }
};