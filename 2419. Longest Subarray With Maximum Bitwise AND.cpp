//Solution works but TLE, 41 out of 52 passed
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int bitAnd, maxAnd = -1, maxSize = 0;
        for( int i=0; i<n; i++ )
        {
            bitAnd = nums[i];
            for( int j=i; j<n; j++ )
            {
                bitAnd = bitAnd & nums[j];
                if ( maxAnd < bitAnd )
                {
                    maxAnd = bitAnd;
                    maxSize = j-i+1;
                }
                else if ( bitAnd == maxAnd )
                    maxSize = max(maxSize,j-i+1);
            }
        }
        return maxSize;
    }
};

//Other Solution
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int bitAnd, maxAnd = -1, maxSize = 0;
        int first = nums[0], lastPos=0;
        for( int i=1; i<n; i++ )
        {
            if ( first != nums[i] ){
                if ( maxAnd < first )
                {
                    maxAnd = first;
                    maxSize = i-lastPos;
                }
                else if ( maxAnd == first )
                    maxSize = max(maxSize,i-lastPos);
                first = nums[i];
                lastPos = i;
            }
        }
       if ( maxAnd < first )
        {
            maxAnd = first;
            maxSize= n-lastPos;
        }
        else if ( maxAnd == first )
            maxSize = max(maxSize,n-lastPos);
        return maxSize;
    }
};

//More Optimized by finding maxiumum element and then finding the lognest array with that
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int maxAnd = *max_element(nums.begin(), nums.end());  // Find the maximum element in the array
        int maxSize = 0, currentSize = 0;

        // Traverse the array and find the longest subarray with maxAnd
        for (int i = 0; i < n; i++) {
            if (nums[i] == maxAnd) {
                currentSize++;  // If the element matches maxAnd, increase the current subarray size
                maxSize = max(maxSize, currentSize);  // Update the maxSize if needed
            } else {
                currentSize = 0;  // Reset current size if the element doesn't match
            }
        }
        
        return maxSize;
    }
};