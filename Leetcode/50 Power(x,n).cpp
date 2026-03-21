#include <iostream>
#include <cmath>
using namespace std;

class Solution
{
public:
    double myPow(double x, long long n)
    {
        if (n == 0)
            return 1;
        if (n < 0)
        {
            n = abs(n);
            x = 1 / x;
        }
        if (n % 2 == 0)
        {
            return myPow(x * x, n / 2);
        }
        else
        {
            return x * myPow(x, n - 1);
        }
    }
};

int main()
{
    Solution sol;

    // Test cases
    cout << "myPow(2.0, 10)   = " << sol.myPow(2.0, 10) << endl;   // Expected: 1024
    cout << "myPow(2.1, 3)    = " << sol.myPow(2.1, 3) << endl;    // Expected: 9.261
    cout << "myPow(2.0, -2)   = " << sol.myPow(2.0, -2) << endl;   // Expected: 0.25
    cout << "myPow(3.0, 0)    = " << sol.myPow(3.0, 0) << endl;    // Expected: 1
    cout << "myPow(1.0, 1000) = " << sol.myPow(1.0, 1000) << endl; // Expected: 1

    return 0;
}