//My solution Fails some test cases;
class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size(), inSum = 0;

        int i = 0, j=0, rainSum = 0;
        while ( i<n )
        {
            i = j;
            j = i+1;
            inSum = 0;
            while ( j<n && height[i] > height[j] ){
                inSum += height[j];
                j++;
            }
            cout<<"j = "<<j<<"i = "<<i<<endl;
            if ( j == n )
            {
                if ( i<n ){
                    i++;
                    j = i;
                    continue;
                }
                else
                    break;
            }
            rainSum += (min(height[i],height[j])*(j-i-1)) - inSum;
            cout<<"rainSum = "<<rainSum<<"inSum = "<<inSum<<endl;
        }
        return rainSum;
    }
};
//NeetCode SOlution
class Solution {
public:
    int trap(vector<int>& height) {
        if (height.empty()) {
            return 0;
        }

        int l = 0, r = height.size() - 1;
        int leftMax = height[l], rightMax = height[r];
        int res = 0;
        while (l < r) {
            if (leftMax < rightMax) {
                l++;
                leftMax = max(leftMax, height[l]);
                res += leftMax - height[l];
            } else {
                r--;
                rightMax = max(rightMax, height[r]);
                res += rightMax - height[r];
            }
        }
        return res;
    }
};
