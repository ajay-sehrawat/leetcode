class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = 0;
        
        while( i<n && j<n )
        {
            if ( nums[i] == nums[j] )
                j++;
            else if ( i != j )
            { 
                nums[i+1] = nums[j];
                i++;
                j++;
            }
        }
        return i+1;
    }
};
//Other Solution
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i - 1]){
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};