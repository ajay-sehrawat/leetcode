#include <iostream>
using namespace std;
// Boredom
int main()
{
    int height[7] = {2, 3, 4, 5, 18, 17, 6};
    int n = 7;
    int m = n;
    int water = 0, temp = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            if (height[i] <= height[j])
                temp = height[i] * (j - i);
            else
                temp = height[j] * (j - i);

            water = max(temp, water);
        }
    }
    cout << water;

    return 0;
}