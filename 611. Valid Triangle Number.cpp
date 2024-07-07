class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size(), count = 0;
        for( int i=0; i<n-2; i++ )
        {
            for( int j=i+1; j<n-1; j++ )
            {
                int k = j+1;
                while( k<n && nums[k] < nums[i]+nums[j] )
                    k++;
                
                count += k-j-1;
            } 
        }
        return count;
    }
};