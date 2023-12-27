class Solution {
private:
    int calculate(int s, int x2, int x1, int y2, int y1, int rad )
    {
        int val = 0;
        int d = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
        cout << "d = " << d << endl;
        if (d <= rad) {
            val = floor(s / (1 + floor(sqrt(d))));
        }
        cout << "val = " << val << endl;
        return val;
    }
public:
    vector<int> bestCoordinate(vector<vector<int>>& towers, int radius) {
        int n = towers.size();
        int strength=0, temp=0, cx, cy;
        for( int i=0; i<n; i++ )
        {
            for ( int j=0; j<n; j++ )
            {
                temp += calculate( towers[j][2], towers[j][0], towers[i][0], towers[j][1], towers[i][1], radius);
            }
            if( strength < temp )
            {
                strength = temp;
                cx = towers[i][0];
                cy = towers[i][1];
            }
            temp = 0;
        }
        cout<<"strength = "<<strength<<endl;
        return {cx,cy};
    }
};