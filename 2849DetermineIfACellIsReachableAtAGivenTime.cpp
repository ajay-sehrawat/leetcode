class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        if ( t == 1 && sx == fx && sy == fy )
            return false;
        if ( abs(sx-fx) <= t && abs(sy-fy) <= t )
            return true;
        else
            return false;
    }
};