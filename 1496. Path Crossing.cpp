class Solution {
public:
    bool isPathCrossing(string path) {
        int x = 0,y = 0;
        set<vector<int>> check;
        check.insert({0,0});
        for ( char p : path ) 
        {
            if (p == 'N')
                x++;
            else if (p == 'S')
                x--;
            else if (p == 'E')
                y++;
            else if (p == 'W')
                y--;
            
            if (!check.insert({x,y}).second)
                return true;
        }
        
        return false;
    }
};