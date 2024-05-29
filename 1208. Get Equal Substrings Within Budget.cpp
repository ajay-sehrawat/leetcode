//Two pointer Approach
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
//2nd Solution SLiding Window
class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n = s.size();
        int sum = 0, j =0, ans = 0;
        for( int i=0; i<n; i++ )
        {
            sum += abs(s[i]-t[i]);
            
            while( sum > maxCost )
            {
                sum -= abs(s[j]-t[j]);
                j++;
            }
            ans = max(ans,i-j+1);
        }
        return ans;
    }
};