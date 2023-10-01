class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int s=0, e = 1, area = 0, sum = 0;
        int i,j;
        while (s<n && e<n)
        {
            while ( height[s] > height[e] && e != n ){
                e++;
            }
            if ( e == n )
                {
                    s++;
                    e = s+1;
                }
            else{
                i = s+1;
                j = e;
                sum = 0;
                while (i < j){
                    sum += height[i];
                    i++;
                }
                area += (height[s]*(e-(s+1) )) - sum;
                s = e;
                e++;
                cout<<area<<endl;
            }   
        }
        return area;
    }
};