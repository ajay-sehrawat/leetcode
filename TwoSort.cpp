#include <bits/stdc++.h>
using namespace std;
int main()
{
    int nums1[2] = {1, 2};
    int nums2[2] = {3, 4};

    int arr[4];
    int i = 0, j = 0, k = 0;
    while (i < 2 && j < 2)
    {
        if (nums1[i] < nums2[j])
            arr[k++] = nums1[i++];
        else
            arr[k++] = nums2[j++];
    }
    while (i < 2)
        arr[k++] = nums1[i++];

    while (j < 2)
        arr[k++] = nums2[j++];

    for (int i = 0; i < k; i++)
        cout << arr[i] << " ";

    cout << "median = ";

    float median = 0;
    median = 5/2;
    cout<<"mediantest = "<<median<<endl;
    if (k % 2 == 0)
    {
        median = (arr[k / 2] + arr[(k / 2) - 1]) / 2;
        cout<<median;
    }
    else
        cout<<arr[k / 2];
}
