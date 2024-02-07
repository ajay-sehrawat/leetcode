//Brute Force Approach
class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        if (nums.size() < 3) {
            return false;
        }
        for (size_t i = 0; i < nums.size() - 2; i++) {
            for (size_t j = i + 1; j < nums.size() - 1; j++) {
                for (size_t k = j + 1; k < nums.size(); k++) {
                    if (nums[k] > nums[i] and nums[j] > nums[k]) {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};

//Better Brute Force, Brute Forcing Only One Side to find 2 in the 132 series.
class Solution {
public:
    bool find132pattern(vector<int>& nums) {

        //assume an element as 3 in the 132 problem then chosse the minimum element on 
        // the left side of 3 as we transverse for 3 and choose the max element on the 
        //right side of 3 will that be O(n) time
        int n = nums.size();
        int minm = INT_MAX;
        stack<int> stack();
        for( int i=1; i<n; i++ )
        {
            minm = min( minm, nums[i-1] );
            if ( nums[i] > minm )
            {
                for( int j =n-1; j>i; j-- )
                {
                    if ( nums[j] > minm && nums[j] < nums[i] )
                        return true;
                    else if ( nums[j] > nums[i] )
                        stack.push(nums[j]);
                        
                }
            } 
        }
        return false;
    }
};

//Stack Based Solution
class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        if (nums.size() < 3) {
            return false;
        }
        stack<int> stk;
        vector<int> min_array(nums.size());
        min_array[0] = nums[0];

        for (size_t i = 1; i < nums.size(); i++) {
            min_array[i] = min(min_array[i - 1], nums[i]);
        }
        for (size_t j = nums.size() - 1; j > 0; j--) {
            if (nums[j] <= min_array[j]) {
                continue;
            }
            while (!stk.empty() and stk.top() <= min_array[j]) {
                stk.pop();
            }
            if (!stk.empty() and stk.top() < nums[j]) {
                return true;
            }
            stk.push(nums[j]);
        }
        return false;
    }
};