#include <iostream>
using namespace std;
// Boredom
int main()
{
    int nums[3] = {5, 1, 3};
    int target = 5;
    int n = 3;
    int pivot = 0, temp = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] > nums[i + 1])
        {
            pivot = i + 1;
            temp = i;
        }
            
    }

    int l = 0, r = n - 1, m, ans = 9999;
    if (target <= nums[temp] && target > nums[n - 1])
    {
        l = 0;
        r = pivot - 1;
    }
    else
    {
        l = pivot;
        r = n - 1;
    }
    cout<<l<<" "<<r<<endl;
    while (l <= r)
    {
        m = l + (r - l) / 2;

        if (nums[m] == target)
        {
            ans = m;
            break;
        }
        if (nums[m] < target)
            l = m + 1;

        else
            r = m - 1;
    }
    if (ans != 9999)
        cout<<ans;
    else
        cout<<"-1";

    return 0;
}