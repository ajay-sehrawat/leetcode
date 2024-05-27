// 2nd solution 
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;  // Pointer to place the next non-val element

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k++] = nums[i];
            }
        }

        return k;  // k is the new length of the array with all val elements removed
    }
};
