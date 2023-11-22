class Solution {
public:
//Solution did modifed the input array;
/* We will traverse element one by one. Suppose our element is x then we will change the value at position x-1 say y to -y.Now if after changing it to negative it is still positive it mean there are two element that want to occupy the same position which is our ans.*/
    int findDuplicate(vector<int>& nums) {
        int n = nums.size(), no = 0;
        for ( int i=0; i<n; i++ )
        {
            int no = abs(nums[i]);
            nums[no-1] = -nums[no-1];
            if ( nums[no-1] > 0 )
                return no;
        }
        return -1;
    }
};