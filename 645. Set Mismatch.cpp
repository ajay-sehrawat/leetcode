class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int rep = -1, pos = -1;
        vector<int> freq(n+1,0);

        for( int i=0; i<n; i++ )
        {
            freq[nums[i]]++;
        }
        for( int i=1; i<n+1; i++ )
        {
            if ( freq[i] == 2 )
                rep = i;
            if ( freq[i] == 0 )
                pos = i;
        }
        return {rep,pos};
    }
};