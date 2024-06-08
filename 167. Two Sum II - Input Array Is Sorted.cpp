//Binary Search Method
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int check, n = numbers.size();

        for( int i=0; i<n; i++ )
        {
            check = target - numbers[i];
            int start = i+1, end = n-1, mid;

            while( start<=end )
            {
                mid = (start+end)/2;
                if ( numbers[mid] == check )
                    return {i+1,mid+1}; //Answer 
                else if( numbers[mid]< check )
                    start = mid+1;
                else
                    end = mid-1;
            }
        }
        return {-1,-1}; //just for return statement
    }
};
//Two Pointer Method
//This is 2 pointer method approach before this was Binary Search Method
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size()-1;
        while( i<j )
        {
            int sum = numbers[i]+numbers[j];
            if ( sum  == target )
                break;
            else if ( sum>target )
                j--;
            else
                i++;
        }
        return {i+1, j+1}; 
    }
};