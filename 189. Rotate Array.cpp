// O(n) Time O(n) Space
class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int n = nums.size();
        if ((n == 0) || (k <= 0))
        {
            return;
        }

        // Make a copy of nums
        vector<int> numsCopy(n);
        for (int i = 0; i < n; i++)
        {
            numsCopy[i] = nums[i];
        }

        // Rotate the elements.
        for (int i = 0; i < n; i++)
        {
            nums[(i + k) % n] = numsCopy[i];
        }
    }
};
//O(n) Time O(1) Space
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        //Reverse All elemnts of nums
        reverse(nums.begin() , nums.end());

        //Reverse first  elements;
        reverse(nums.begin(), nums.begin()+k);

        //Reverse last n-k numbers
        reverse(nums.begin()+k, nums.end());
    }
};