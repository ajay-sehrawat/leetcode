class Solution
{
public:
    int buyChoco(vector<int> &prices, int money)
    {
        int low = 999, slow = 999;
        for (int i = 0; i < prices.size(); i++)
        {
            if (low >= prices[i])
            {
                slow = low;
                low = prices[i];
            }
            else if (slow >= prices[i])
                slow = prices[i];
        }
        cout << slow << " " << low;
        return money - (slow + low) >= 0 ? money - (slow + low) : money;
    }
};