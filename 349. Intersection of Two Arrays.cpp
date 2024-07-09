class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int n = nums1.size(), m = nums2.size();
        int i = 0, j =0;
        vector<int> ans;
        while( i<n && j<m )
        {
            if( nums1[i] == nums2[j] )
            {
                if ( ans.empty() || nums1[i] != ans.back() )
                    ans.push_back(nums1[i]);
                i++;
                j++;
            }
            else if ( nums1[i] > nums2[j] )
                j++;
            else
                i++;
        }
        return ans;
    }
};
//O(n) Method using unordered_map() but still upper method is faster
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        for( int i: nums1 )
            mp[i] = 1;
        
        vector<int> ans;
        for( int i: nums2 )
        {
            if ( mp[i] == 1 ){
                ans.push_back(i);
                mp[i] = 0;
            } 
        }
        return ans;
    }
};