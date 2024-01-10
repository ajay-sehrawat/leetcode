//WA As Avg Flacuates a Lot If Numbers are repeated.
class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        double avg = 0, diff = 9999999999, elem = -1, ans = 0;

        for( int i=0; i<n; i++ )
            avg += nums[i];

        avg /=n;

        for( int i=0; i<n; i++ )
        {
            if ( abs(avg - nums[i]) < diff )
            {
                diff = abs(avg - nums[i]);
                elem = nums[i];
            }
        }
        
        for( int i=0; i<n; i++ )
            ans += abs(elem - nums[i]);
        return ans;
    }
};
//Brute Force Solution.
class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        double avg = 0, diff = 0, elem = -1, ans = 99999999;
        for( int i=0; i<n; i++ )
        {
            diff = 0;
            for( int j=0; j<n; j++ )
            {
                diff += abs(nums[j]-nums[i]);
            }
            ans = min(diff,ans);
        }    
        return ans;
    }
};
//Median Solution
class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        if ( n == 1 )
            return 0;

        sort(nums.begin(), nums.end());

        int median = n/2;
        median = nums[median];

        int ans = 0;
        
        for( int i=0; i<n; i++ )
        {
            ans += abs(median-nums[i]);
        }    
        return ans;
    }
};