int binarySearchLeft ( vector<int>& nums, int l, int r, int target )
        {
            int ans = 0;
            while ( l<=r ){
            int m = l + ( r-1 ) / 2;
            if ( nums[m] == target )
            {
                ans = m;
                r = m - 1;
            }
            if ( nums[m] < target )
                l = m + 1;
            else
                r = m - 1;
            }
            return -1;
        }
    int binarySearchRight ( vector<int>& nums, int l, int r, int target )
        {
            int ans = 0;
            while ( l<=r ){
            int m = l + ( r-1 ) / 2;
            if ( nums[m] == target )
            {
                ans = m;
                l = m + 1;
            }
            if ( nums[m] < target )
                l = m + 1;
            else
                r = m - 1;
            }
            return -1;
        }
    