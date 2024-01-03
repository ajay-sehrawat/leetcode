class Solution {
public:
    int maximizeSquareArea(int m, int n, vector<int>& hFences, vector<int>& vFences) {
        if( m == n )
            return m-1*n-1;
        
        hFences.push_back(m);
        vFences.push_back(n);

        int i=hFences.size()-1, j=vFences.size()-1;

        while( i>=0 && j>=0 )
        {
            cout<<hFences[i]<<" "<<vFences[j]<<endl;
            if ( hFences[i] == vFences[j] )
                return (hFences[i]-1 * vFences[j] -1);
            else if ( hFences[i] > vFences[j]  )
                i--;
            else
                j--;
        }
        return -1;
    }
};