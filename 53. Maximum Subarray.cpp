class Solution {
public:
  int maxSubArray(vector<int>& nums) {
    int n = nums.size();
    int max_sum = nums[0];
    int cur_sum = 0;

    for (int i = 0; i < n; ++i) {
      cur_sum = max(nums[i], cur_sum + nums[i]);
      max_sum = max(max_sum, cur_sum);
    }

    return max_sum;
  }
};
