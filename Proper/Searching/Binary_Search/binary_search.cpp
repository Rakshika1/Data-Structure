#include <bits/stdc++.h>
using namespace std;

int BinarySearch(int target, vector<int>& arr) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1; // not found
}

int main() {
    int n;
    cout << "Enter number to search: ";
    cin >> n;

    vector<int> arr = {10,20,30,40,50,60,70,80};

    int result = BinarySearch(n, arr);

    if (result != -1)
        cout << "Found at index: " << result;
    else
        cout << "Not found";

    return 0;
}