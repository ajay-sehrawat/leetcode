/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n = mountainArr.length();

        //Find The peak of the array
        int l = 1;
        int r = n - 2;
        int mid;
        while (l != r) {
            mid = (l+r)>>1;
            if (mountainArr.get(mid) < mountainArr.get(mid + 1)) {
                l = mid + 1;
            } else {
                r = mid;
            }
        }
        //mid is our peak now
        int peak = l;

        //Find the element before peak
        int ans = -1;
        l = 0;
        r = peak;
        //Binary Search
        while ( l<=r ){
            mid = (l+r)>>1;
            if ( mountainArr.get(mid) == target ){
                ans = mid;
                break;
            }
            if ( mountainArr.get(mid) < target )
                l = mid+1;
            else
                r = mid-1;
        }
        
        if ( ans != -1 )
            return ans;
        else{
            //Find Element after peak in decreasing array so modify binary search
            //Binary Search
            l = peak+1;
            r = n-1;
            while( l<= r ){
                mid = (l+r)>>1;
                if ( mountainArr.get(mid) == target ){
                    ans = mid;
                    break;
                }
                if( mountainArr.get(mid) > target )
                    l = mid+1;
                else
                    r = mid-1;
            }
        }

        if ( ans != -1)
            return ans;
        else
            return -1;
    }
};