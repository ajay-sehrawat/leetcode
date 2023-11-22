class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> suff(n);

        suff[n-1] = nums[n-1];
        for ( int i=n-2; i>=0; i-- )
        {
            suff[i] = suff[i+1]*nums[i];
        }
        suff[0] = suff[1];
        int bef = nums[0];
        for ( int i=1; i<n-1; i++ )
        {
            suff[i] = bef * suff[i+1];
            bef *= nums[i];
        }
        suff[n-1] = bef; 
        return suff;
    }
};