class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n = dist.size();
        vector<float> greed(n);

        for ( int i=0; i<n; i++ )
        {
            greed[i] = dist[i]/float(speed[i]);
        }
        sort(greed.begin(), greed.end());

        int count = 0;
        for ( int i=0; i<n; i++ ){
            if ( greed[i] <= count )
                break;
            count++;
        }
        return count;
    }
};