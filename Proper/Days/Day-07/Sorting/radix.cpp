#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[4] = {18, 12, 14, 15};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int unit = arr[i] % 10;
            int unit2 = arr[i + 1] % 10;
            if (unit > unit2)
            {
                // swap unit and unit2
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    // for tens place
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int tens = arr[i] / 10;
            int tens2 = arr[i + 1] / 10;
            if (tens > tens2)
            {
                swap(arr[j], arr[j+ 1]);
            }
        }
    }

    for (int i = 0; i < 4; i++)
    {
        cout << arr[i]<<" ";
    }

    return 0;
}