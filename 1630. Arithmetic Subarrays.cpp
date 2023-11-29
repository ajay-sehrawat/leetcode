class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int n = nums.size();
        int m = l.size();
        vector<bool> ans;
        
        for (int x = 0; x < m; ++x) {
            vector<int> arr(begin(nums) + l[x], begin(nums) + r[x] + 1);
            sort(arr.begin(), arr.end());

            int diff = arr[1] - arr[0];
            bool flag = true;

            for (int j = 2; j < arr.size(); ++j) {
                if ((arr[j] - arr[j - 1]) != diff) {
                    flag = false;
                    break;
                }
            }

            ans.push_back(flag);
        }

        return ans;
    }
};
