class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int j, k, n = nums.size();
        sort(nums.begin(),nums.end());
        //Set inheritly handles triples
        set<vector<int>> triplets;
        for( int i=0; i<n; i++ )
        {
            if ( i>0 && nums[i] == nums[i-1] )
                continue;
            j = i+1;
            k = n-1;
            while ( j<k )
            {
                int sum = nums[i]+nums[j]+nums[k];
                if ( sum  == 0 ){
                    triplets.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
                else if ( sum > 0)
                {
                    k--;
                }
                else
                    j++;
            }
        }
        vector<vector<int>> ans(triplets.begin(), triplets.end());
        return ans;
    }
};