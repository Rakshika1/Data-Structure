#include <bits/stdc++.h>
using namespace std;

int last_occurrence(int target, vector<int> &arr)
{

    int left = 0;
    int right = arr.size() - 1;
    int ans = -1;

    while (left <= right)
    {

        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
        {
            ans = mid;
            left = mid + 1;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return ans;
}

int main()
{

    int target;
    cout << "Enter a number which you want to find the occurence";

    cin >> target;
    vector<int> arr = {10, 20, 30, 30, 30, 30, 40, 50};
    // target = 30;

    int result = last_occurrence(target, arr);

    cout << "The first occurrence of the number is :" << result;

    return 0;
}