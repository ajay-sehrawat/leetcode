class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();

        int i= 0, j = 0, count = 0;

        while ( i<n && nums[i] != 0 )
            i++;
        j = i;
        for( i; i<n; i++ )
        {
            if ( nums[i] != 0 )
            {
                nums[j++] = nums[i];
                nums[i] = 0;
            }
        }
    }
};