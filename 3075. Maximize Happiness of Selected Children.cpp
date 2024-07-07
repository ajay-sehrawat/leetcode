//Can do in O(n) Time using priority_queue same method just no sorting.
//Submit Solution for Editorial
class Solution {
public:
    long long maximumHappinessSum(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int subtract = 0;
        long long int ans = 0;
        for( int i=n-1; i>=0; i-- )
        {
            if ( nums[i]-subtract>=0 && k>0 )
            {
                ans += nums[i]-subtract;
                subtract++;
                k--;
            }
            else
                break;
        }
        return ans;
    }
};