class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int n = nums.size();
        int ans = 0, count = 0;
        for( int i=0; i<n; i++ )
        {
            if ( nums[i]%2 == 0 && nums[i] <= threshold)
            {
                count++;
                if ( i+1 < n && nums[i+1]%2 != 0 && nums[i+1] <= threshold ){
                    count++;
                    i++;
                }
                else{
                    ans = max(ans,count);
                    count = 0; 
                }
            }
            else
                count = 0;
            ans = max(ans,count);
        }
        return ans;
    }
};