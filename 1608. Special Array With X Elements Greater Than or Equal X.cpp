/*
//Shit solution but 100% runtime
class Solution {
public:
    int specialArray(vector<int>& nums) {
        int count = 0, n = nums.size();
        
        for( int i=0; i<=n; i++ )
        {
            count = 0;
            for( int j=0; j<n; j++ )
            {
                if ( nums[j] >= i )
                    count++;
            }
            if ( count == i )
                return i;
        }
        return -1;
    }
};*/
class Solution {
    
    int getFirstGreaterOrEqual(vector<int>& nums, int val) {
        int start = 0;
        int end = nums.size() - 1;

        int index = nums.size();
        while (start <= end) {
            int mid = (start + end) / 2;

            if (nums[mid] >= val) {
                index = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }

        return index;
    }
    
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int N = nums.size();
        for (int i = 1; i <= N; i++) {
            int k = getFirstGreaterOrEqual(nums, i);
            
            if (N - k == i) {
                return i;
            }
        }
        
        return -1;
    }
};