class Solution
{
public:
    int minOperations(vector<int> &nums)
    {
        int ans = 0, count;
        unordered_map<int,int> freq;

        for( int i: nums )
            freq[i]++;

        for (auto i: freq )
        {
            count = i.second;
            if ( count == 1 )
                return -1;
            else if ( count%3 == 0 )
                ans += count/3;
            else 
                ans += count/3+1;
        }
        return ans;
        
    }
};