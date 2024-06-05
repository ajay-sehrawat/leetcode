//Direct Approach
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans1, ans2;
        unordered_map<int,int> mp1, mp2;
        
        for( int i: nums1)
            mp1[i]++;
        
        for( int i: nums2 )
        {
            if ( mp1[i] == 0 ){
                ans2.push_back(i);
                mp1[i]++;
                }
            
            mp2[i]++;
        }
        for( int i: nums1 )
        {
            if ( mp2[i] == 0 ){
                ans1.push_back(i);
                mp2[i]++;
                }
        }
        return {{ans1},{ans2}};
    }
};