class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        vector<int> result;
        int front = 0, value = 0;
        int end = 0;
        for ( int i=0; i<n; i++ )
            end+=nums[i];

        for(int i=0; i<n; i++ )
        {
            front += nums[i];
            end -= nums[i];
            value = ((nums[i]*(i+1)) - front) + abs(((nums[i]*(n-i-1)) - end));
            result.push_back(value);
        }
        return result;

    }
};