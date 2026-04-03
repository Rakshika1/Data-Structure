#include <bits/stdc++.h>
using namespace std;
int Missing_Number(vector<int> &arr)
{
    int left = 0;
    int ans = 0;
    int right = arr.size() - 1;
    while (left <= right)
    {
        int diff = 0;
        int mid = left + (right - left) / 2;
        diff = arr[mid] - mid;
        if (diff == 1)
        {
            // skip left part
            left = mid + 1;
        }
        else if (diff == 2)
        {
            // skip right part
            // ans store the number;
            ans = mid;
            right = mid - 1;
        }
    }
    return ans + 1;
}
int main()
{

    int n;
    cout << "Missing number Hunter:";

    vector<int> arr = {1, 2, 3, 4, 6, 7, 8};
    int result = Missing_Number(arr);
    cout << result;

    return 0;
}