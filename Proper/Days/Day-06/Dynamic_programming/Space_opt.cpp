#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int fib(int n)
    {
        if (n == 0)
        {
            return 0;
        }
        if (n == 1)
        {
            return 1;
        }
        int curr;
        int prev = 1;
        int prev2 = 0;
        for (int i = 2; i < n; i++)
        {
            curr = prev + prev2;
            prev2 = prev;
            prev = curr;
        }
        return prev;
    }
};

int main()
{
    // Create object of Solution class
    Solution obj;

    return 0;
}