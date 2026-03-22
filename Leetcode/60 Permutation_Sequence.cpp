#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string getPermutation(int n, int k) {
       // convert the n into string ;
       string s = to_string(n);
       cout << s;
       return s;
        
    }
};
int main() {
    Solution sol;
    int n, k;
    cin >> n >> k;
    cout << sol.getPermutation(n, k) << endl;
    return 0;
} 