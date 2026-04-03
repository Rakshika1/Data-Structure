#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    // ask for the number and then read it
    cin >> n;
    vector<long long> arr;
    arr.push_back(n);
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = (n * 3) + 1;
        }
        arr.push_back(n);
    }
    for (long long num : arr)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}