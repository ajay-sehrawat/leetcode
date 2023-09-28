class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int far = 0;
        for ( int i=0; i<n; i++ ){
            
            far = max(far,i+nums[i]);
            if ( far >= n-1 )
                return true;
            
            if ( nums[i] == 0 && far == i )
                return false;
        }
        return true;
    }
};