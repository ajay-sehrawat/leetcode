class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = heights.size();
        int temp, pos;
        string swapp;
        for( int i=0; i<n-1; i++ )
        {
            pos = i;
            for( int j=i+1; j<n; j++ )
            {
                if ( heights[j] > heights[pos] )
                    pos = j;
            }
            swap(names[i],names[pos]);
            swap(heights[i],heights[pos]); 
        }
        return names;
    }
};