class Solution
{
public:
    int maxProductDifference(vector<int> &nums)
    {
        int high, shigh, low, slow;
        high = 0;
        low = INT_MAX;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > high)
            {
                shigh = high;
                high = nums[i];
            }
            else if (nums[i] > shigh)
                shigh = nums[i];
            if (nums[i] < low)
            {
                slow = low;
                low = nums[i];
            }
            else if (nums[i] < slow)
                slow = nums[i];
        }
        return ((high * shigh) - (low * slow));
    }
};