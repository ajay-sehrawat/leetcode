class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();
        long int fmax = LONG_MIN, smax=LONG_MIN,tmax=LONG_MIN;
        for( int i=0; i<n; i++ )
        {
            if ( nums[i] == fmax || nums[i] == smax || nums[i] == tmax )
                continue;
            if ( nums[i] >= fmax )
            {
                tmax = smax;
                smax = fmax;
                fmax = nums[i];
            }
            else if ( smax <= nums[i] )
            {
                tmax = smax;
                smax = nums[i];
            }
            else if ( tmax <= nums[i] )
            {
                tmax = nums[i];
            }
        }
        cout<<tmax<<" "<<fmax;
        return tmax == LONG_MIN ? fmax : tmax;
    }
};