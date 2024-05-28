class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n = s.size();
        vector<int> nums(n);

        for( int i=0; i<n; i++ )
        {
            nums[i] = abs(t[i]-s[i]);
        }
        
        int ans = 0, sum=0, i=0, j=0;
        
        while( i<n && j<n )
        {
            sum += nums[j];
            if( maxCost-sum >= 0 )
            {
                j++;
            }
            else
            {
                ans = max(ans,j-i);
                sum -= nums[i];
                j++;
                i++;
            }
        }
        if( maxCost-sum >= 0 )
        {
            ans = max(ans,j-i);
        }
        return ans;
    }
};