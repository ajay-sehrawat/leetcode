while ( i>j )
        {
            if ( nums[j] - nums[i] != j-i ){
                count++;
                i++;
                j++;
            }
            
        }