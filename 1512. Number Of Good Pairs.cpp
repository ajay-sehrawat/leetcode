class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        int s = 0 , e =  1, count= 0;
        while ( s<n-1 ){
            e = s+1;
            while ( e<n ){
                if ( nums[s] == nums[e] ){
                    count++;
                }
                e++;
            }
            s++;    
        }
        return count;
    }
};