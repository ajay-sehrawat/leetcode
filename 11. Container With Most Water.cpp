class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i=0, j = n-1, maxWater = 0, tempWater;

        while( i<j )
        {
            tempWater = min(height[i],height[j])*(j-i);
            maxWater = max(maxWater,tempWater);
            if ( height[i] < height[j] )
                i++;
            else
                j--;
        }
        return maxWater;
    }
};