class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
        unordered_map<int, int> mp;
        mp[0] = -1;  // Initialize hash map to handle cases where subarray starts from index 0

        for (int i = 0; i < n; i++) {
            sum += nums[i];
            int remainder = sum%k;
            // If remainder was seen before, check the length of the subarray
            if (mp.find(remainder) != mp.end()) {
                if (i - mp[remainder] > 1) {
                    return true;
                }
            } else {
                // Store the first occurrence index of this remainder
                mp[remainder] = i;
            }
        }
        return false;
    }
};
