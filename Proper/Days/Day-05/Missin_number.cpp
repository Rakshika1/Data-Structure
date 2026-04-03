#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n - 1);
    int sum = 0;
    int actual_sum = 0;
    for (int j = 1; j <= n; j++)
    {
        actual_sum = actual_sum + j;
    }
    for (int i = 0; i < n - 1; i++)
    {

        cin >> arr[i];
        sum = sum + arr[i];
    }

    cout << actual_sum - sum;
}