class Solution
{
public:
    vector<vector<int>> divideArray(vector<int> &nums, int k)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 1; i < n; i += 3)
        {
            if (nums[i + 1] - nums[i - 1] > k || nums[i] - nums[i - 1] > k)
                return {};
        }
        vector<vector<int>> ans(n / 3, vector<int>(3));
        int i = 0, j = 0;
        for (int l = 0; l < n; l++)
        {
            ans[i][j++] = nums[l];
            if (j == 3)
            {
                j = 0;
                i++;
            }
        }
        return ans;
    }
};