class Solution {
public:
    string maxValue(string s, int x) {
        int n = s.size();
        int i, val;
        bool neg = true, pos = true;
        string temp;
        if ( s[0] == '-' )
        {
            temp += s[0];
            i = 1;
            while( i<n )
            {
                if ( neg && s[i] > x+'0' ){
                    temp += x+'0';
                    neg = false;
                }
                temp += s[i];
                i++;
            }
            if ( temp.size() == n )
                temp += x+'0';
        }
        else
        {
            i = 0;
            while ( i<n )
            {
                if (pos && s[i] < x+'0' ){
                    temp += x+'0';
                    pos = false;
                    }
                temp += s[i];
                i++;
            }
            if ( temp.size() == n )
                temp += x+'0';
        }
        return temp;
    }
};