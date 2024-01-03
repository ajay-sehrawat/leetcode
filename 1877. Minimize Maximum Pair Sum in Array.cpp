class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n = nums.size();
        cin.tie(0);
        cout.tie(0);
        sort(nums.begin(),nums.end());
        int i =0, j=n-1, ans=INT_MIN;
        while ( i<=j )
        {
            ans = max(ans, nums[i++] + nums[j--]);
        }
        return ans;
    }
};