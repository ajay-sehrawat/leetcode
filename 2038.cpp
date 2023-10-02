class Solution {
public:
    bool winnerOfGame(string colors) {
        int n = colors.size();
        int ca = 0, cb = 0, sa=0, sb = 0;

        for ( int i=0; i<n; i++ )
        {
            if ( colors[i] == 'A' ){
                cb = 0;
                ca++;
                if ( ca > 2 )
                    sa++;
            }
            else {
                ca = 0;
                cb++;
                if ( cb>2 )
                    sb++;
            }
        }
        cout<<sa<<" "<<sb;
        return sa>sb;
    }
};