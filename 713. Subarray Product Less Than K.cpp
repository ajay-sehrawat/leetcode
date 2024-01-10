//TLE For This Solution.
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        int pro = 0;
        for( int i=0; i<n; i++ )
        {
            if ( nums[i] < k )
                pro++;
            for( int j=i+1; j<n; j++ )
            {
                if ( nums[i]*nums[j] < k )
                {
                    nums[i] *= nums[j];
                    pro++;
                }
                else
                    break;
            }
        }
        return pro;
    }
};
//AC
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        int pro = 0, j = 0, i = 0;
        int temp = 1;

        while (j < n) {
            temp *= nums[j];
            while (i <= j && temp >= k) {
                temp /= nums[i];
                i++;
            }
            pro += (j - i + 1);
            j++;
        }

        return pro;
    }
};