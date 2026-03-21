#include <bits/stdc++.h>
using namespace std;

bool prime(int num)
{
    // prime number which are divisilbe by itself but not dividible by other
    //  2,3 ,5, 7,11,13,
    int count = 0;
    if (num <= 1)
    {
        return false;
    }

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
bool prime2(int num)
{
    // prime number which are divisilbe by itself but not dividible by other
    //  2,3 ,5, 7,11,13,
    int count = 0;
    if (num <= 1)
    {
        return false;
    }

    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cout << "Enter the number";
    cin >> n;

    cout << prime(n);
    cout << prime2(n);

    return 0;
}