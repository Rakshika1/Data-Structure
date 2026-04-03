#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // functio to calculate fibonaaci using memoization

    int fibonacci(int n, vector<int> &dp)
    {
        if (n <= 1)
        {
            return n;
        }

        // / if already computed return stored value
        if (dp[n] != -1)
        {
            return dp[n];
        }
        // otherwise compute
        dp[n] = fibonacci(n - 1, dp) + fibonacci(n - 2, dp);
        return dp[n];
    }
};
int main()
{
    int n = 10;
    vector<int> dp(n + 1, -1);
    Solution sol;
    cout << sol.fibonacci(n, dp);

    return 0;
}