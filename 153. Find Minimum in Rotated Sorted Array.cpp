//O(logN)
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int right = n-1;
        int mid, minEle = min(nums[left],nums[right]);
        while ( left < right )
        {
            mid = (left+right)/2;
            minEle = min(nums[mid],minEle);
            if ( nums[mid] > nums[left] && nums[mid] >= nums[right] )
            {
                left = mid;
            }
            else
                right = mid;
        }
        return minEle;
    }
};