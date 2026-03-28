#include <iostream>
using namespace std;

class Solution
{
public:
    int mySqrt(int x)
    {
        int left = 0;
        int right = x;
        int ans = 0;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            long long sq = (long long)mid * mid; // prevents overflow

            if (sq == x)
            {
                return mid;
            }
            else if (sq > x)
            {
                right = mid - 1;
            }
            else
            {
                ans = mid;
                left = mid + 1;
            }
        }
        return ans;
    }
};

int main()
{
    Solution sol;

    // Test cases
    cout << "mySqrt(0)  = " << sol.mySqrt(0) << " (expected: 0)" << endl;
    cout << "mySqrt(1)  = " << sol.mySqrt(1) << " (expected: 1)" << endl;
    cout << "mySqrt(4)  = " << sol.mySqrt(4) << " (expected: 2)" << endl;
    cout << "mySqrt(8)  = " << sol.mySqrt(8) << " (expected: 2)" << endl;
    cout << "mySqrt(9)  = " << sol.mySqrt(9) << " (expected: 3)" << endl;
    cout << "mySqrt(2147483647) = " << sol.mySqrt(2147483647) << " (expected: 46340)" << endl;

    return 0;
}