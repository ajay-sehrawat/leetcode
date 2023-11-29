class Solution {
public:
    void sortColors(vector<int>& nums) {
        //just insertion sort nothing else.
        int n = nums.size();
        int key, j;
        for( int i=1; i<n; i++ )
        {
            key = nums[i];
            j = i-1;
            while ( j>=0 && nums[j] > key ){
                nums[j+1] = nums[j];
                j--;
            }
            nums[j+1] = key;
        }
    }
};