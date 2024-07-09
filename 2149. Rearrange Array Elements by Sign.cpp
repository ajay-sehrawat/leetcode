class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        int i=0, j=0;
        while( n>0 )
        {
            while( nums[i] < 0 )
                i++;
            ans.push_back(nums[i]);
            while( nums[j]>0 )
                j++;
            ans.push_back(nums[j]);
            i++, j++;
            n-=2;
        }
        return ans;
    }
};
//Or Other Method
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int n = nums.size();
        vector<int> ans(n,0);
        int x=0, y=1;
        for( int i=0; i<n; i++ )
        {
            if ( nums[i] > 0 )
            {
                ans[x] = nums[i];
                x += 2;
            }
            else
            {
                ans[y] = nums[i];
                y += 2;
            }
        }
        return ans;
    }
};