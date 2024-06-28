class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {

        int n = nums.size(), b;
        for( int i=0; i<n-indexDifference; i++ )
        {
            b = i+indexDifference;
            while ( b < n )
            {
                if ( abs(nums[i]-nums[b]) >= valueDifference )
                    return {i,b};
                b++;
            }
        }
        return {-1,-1};
    }
};