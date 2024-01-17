class Solution {
public:
    bool check(vector<int>& nums) {
        bool drop = false;
        int n = nums.size();
        for( int i=1; i<n; i++ )
        {
            if ( nums[i] < nums[i-1] )
            {
                if(  nums[0] <  nums[n-1] )
                    return false;
                
                if ( drop )
                    return false;

                drop = true;
            }
        }
        return true;
    }
};