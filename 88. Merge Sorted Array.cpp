//With Extra Space Beats 100%
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> temp(m,0);

        for( int i=0; i<m; i++ )
            temp[i] = nums1[i];

        int i=0, j=0, k = 0;
        while( i<m && j<n )
        {
            if ( temp[i] <= nums2[j] ){
                nums1[k] = temp[i++];
            }
            else{
                nums1[k] = nums2[j++];
            }
            k++;
        }
        while( i< m ){
            nums1[k++] = temp[i++]; 
        }
        while( j<n ){
            nums1[k++] = nums2[j++];
        }
    }
};
//No Extra Space Needed As nums1 is given as size of O(m+n) by question
class Solution { 
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1;
        int j = n-1;
        int k = m+n-1;
        while(i>=0 && j>=0){
            if(nums1[i] > nums2[j]){
                nums1[k--] = nums1[i--];
            }
            else{
                nums1[k--] = nums2[j--];
            }
        }
        while(j>=0){
            nums1[k] = nums2[j];
            j--; k--;
        }
    }
};