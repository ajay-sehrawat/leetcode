class Solution
{
public:
    bool canArrange(vector<int> &arr, int k)
    {
        int n = arr.size();

        for (int i = 0; i < n; i++)
        {
            arr[i] %= k;
        }

        unordered_map<int, int> mp;
        for (int i : arr)
        {
            mp[i]++;
            cout << mp[i] << endl;
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (mp[arr[i]] > 0)
            {
                int target = k - arr[i];
                if ((mp.find(target) != mp.end()) && (mp[target] > 0))
                {
                    mp[target]--;
                    mp[arr[i]]--;
                    count++;
                }
            }
        }
        cout << count;
        return count == n / 2;
    }
};