//O(n) time
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int neg = 0, pos=n;
        vector<int> ans;
        for( int i=0; i<n; i++ )
        {
            if ( nums[i] >= 0 )
            {
                pos = i;
                break;
            }
        }
        neg = pos-1;
        while( neg>=0 && pos<n )
        {
            if ( nums[pos] < abs(nums[neg]) ){
                ans.push_back(nums[pos]*nums[pos]);
                pos++;
            }
            else{
                ans.push_back(nums[neg]*nums[neg]);
                neg--;
            }
        }
        while( pos<n )
        {
            ans.push_back(nums[pos]*nums[pos]);
            pos++;
        }
        while( neg>=0 )
        {
            ans.push_back(nums[neg]*nums[neg]);
            neg--;
        }
        return ans;
    }
};