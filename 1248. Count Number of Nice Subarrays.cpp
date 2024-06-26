class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0, count, ans = 0;

        for( int i=0; i<n; i++ )
        {
            count = 0;
            for( int j=i; j<n; j++ )
            {
                if ( nums[j]%2 != 0 )
                    count++;
                if ( count == k )
                    ans++;
            }
        } 
        return ans;
        
    }
};