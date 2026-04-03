#include <bits/stdc++.h>
using namespace std;

int peakElementMountainIndex(vector<int> &arr)
{
    int left = 0;
    int right = arr.size() - 1;
    while (left < right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] < arr[mid + 1])
        {
            // Me A line par hu
            //  And peak right mee exist kart hai;
            left = mid + 1;
        }
        else if (arr[mid] > arr[mid + 1])
        {
            // Me B line par hu
            // Yaa me peak par hu;
            right = mid;
        }
    }
    return left;
}

int main()
{
    cout << "Mountain peak element finding:" << endl;
    vector<int> arr = {10, 20, 30, 90, 70, 60, 50, 40};
    int result = peakElementMountainIndex(arr);
    cout << result;

    return 0;
}