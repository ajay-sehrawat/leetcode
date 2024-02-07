class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int n = nums.size();
        int val = 0, ans = 0;
        for( int i=0; i<n; i++ )
        {
            val += nums[i];
            ans = min(ans,val);
        }
        return abs(ans)+1;
    }
};