#include <bits/stdc++.h>
using namespace std;

long long int binpow(int value, int power)
{
    long long int res = 1;
    while (power > 0)
    {
        if (power & 1)
        {
            res = res * value;
        }
        value = value * value;
        power >>= 1;
    }
    return res;
}
int main()
{

    cout << binpow(3, 13);

    return 0;
}