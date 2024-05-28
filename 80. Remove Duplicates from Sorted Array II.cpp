class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = 0;
        
        while( i<n && j<n )
        {
            if ( nums[i] == nums[j] )
                j++;
            else if ( i != j && j-i > 1 )
            { 
                nums[i+2] = nums[j];
                i++;
                j++;
            }
            else
                j++;
        }
        if ( n > 1 )
            return i+2;
        else
            return 1;;
    }
};
//Other SOlution
class Solution {
    public int removeDuplicates(int[] nums) {
        int j = 1;
        for (int i = 1; i < nums.length; i++) {
            if (j == 1 || nums[i] != nums[j - 2]) {
                nums[j++] = nums[i];
            }
        }
        return j;
    }
}