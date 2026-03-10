#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // functio to calculate fibonaaci using memoization

    int fibonacci(int n)
    {
      // create a table and fill it with 0;

      vector<int>dp(n+1,0);
      // base case
      dp[0] =0;
      dp[1] =1;

      // fill the table using the bottom up using loops

    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    return dp[n];
    }
};
int main()
{
    int n = 10;
    vector<int> dp(n + 1, -1);
    Solution sol;
    cout << sol.fibonacci(n);

    return 0;
}