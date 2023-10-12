class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        int n = flowers.size();
        int m = people.size();
        vector<int> num;
        int count = 0;
        for (int i=0; i<m; i++ ){
            count = 0;
            for( int j=0; j<n; j++ )
            {
                if ( people[i] >= flowers[j][0] && people[i] <= flowers[j][1] )
                    count++; 
            }
            num.push_back(count);
        }
        return num;
    }
};