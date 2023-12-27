class Solution
{
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>> &grid)
    {
        int n = grid.size();
        unordered_map<int, int> temp;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                temp[grid[i][j]]++;
            }
        }
        for (int i = 0; i < n * n; i++)
        {
            if (temp[i] == 2)
                ans[0] = temp[i];
            else if (temp[i] == 0)
                ans[1] = temp[i];
        }
        return ans;
    }
};