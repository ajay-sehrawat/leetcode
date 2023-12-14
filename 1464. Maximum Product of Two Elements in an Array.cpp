class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int check = nums[0];
        int second = -1;
        for( int i=1; i<n; i++ )
        {
            if( nums[i] >= check ){
                second = check;
                check = nums[i];
            }
            else if( nums[i] >= second ){
                second = nums[i];
            }
        }

        return (check-1)*(second-1);
    }
};