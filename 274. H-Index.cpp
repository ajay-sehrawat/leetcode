//O(nlogn) Time and O(1) space.
class Solution {
public:
    int hIndex(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        for( int i=0; i<n; i++ )
        {
            if( nums[i] >= n-i-1 )
                return min(nums[i],n-i);
        }
        return -1;
    }
};