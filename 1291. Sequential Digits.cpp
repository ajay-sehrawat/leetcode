//Very Intresting Solution
class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> result;
        int num = 0;
        for(int i = 1; i<10 ; i++)
        {
            num = i;
            for(int j = i+1;j<10;j++)
            {
                num = num*10 + j;
                if(num >= low && num <= high)
                {
                    result.push_back(num);
                }
            }
        }
        sort(result.begin(), result.end());
        return result;
    }
};
//My Solution
class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>arr = {12,23,34,45,56,67,78,89,123,234,345,456,567,678,789,
                         1234,2345,3456,4567,5678,6789,12345,23456,34567,45678,56789,
                         123456,234567,345678,456789,1234567,2345678,3456789,
                         12345678,23456789,123456789};
        
        int n = arr.size();
        vector<int>ans;
        for( int i=0; i<n; i++ )
        {
            if ( arr[i] >= low && arr[i] <= high )
                ans.push_back(arr[i]);
        }
        return ans;
    }
};
