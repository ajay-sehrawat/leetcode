//Just let think of it like this, store all in <map> then check from each nums[i]
// if there is any number before it or not, if not start the sequenct from there, overall it O(n) time
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,bool> mp;

        for( int i=0; i<nums.size(); i++ )
        {
            mp[nums[i]] = true;
        }
        int count = 0, ans = 0;
        for (int i=0; i<nums.size(); i++  )
        {
            if ( mp.find(nums[i]-1) != mp.end() )
                continue;
            else{
                count = 1;
                while ( mp.find(nums[i]+count) != mp.end() )
                    count++;
            }
            ans = max(count, ans);
        }
        return ans;
    }
};