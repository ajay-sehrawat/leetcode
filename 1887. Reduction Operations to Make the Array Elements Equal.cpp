class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int sum = 0, count = 0;
        
        for ( int i=1; i<n; i++ )
        {
            if ( nums[i] == nums[i-1] )
                sum += count;
            else
                sum = sum + (++count);
        }
        return sum;
    }
};