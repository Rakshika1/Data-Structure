#include <bits/stdc++.h>
using namespace std;

// int LCM(int num,in){
//     // 33 = 11 * 3
//     // 10 = 2*5
//     //12 = 2*2*3 = lcm = 6
    

// }
int lcm(int a, int b)
{
    return (a * b) / gcd(a,b);
}
int gcd(int a, int b)
{
    if(b == 0)
        return a;
    return gcd(b, a % b);
}
int GCD(int num1,int num2){
    while(num2!=0){
        int r = num1 % num2;
        num1 = num2;
        num2 = r;
    }
    return num1;
}

int main() {
    int n;
    cout << "ENTER THE NUMBER";
    cin >> n;
    cout << LCM(n);
    cout << GCD(int a, int b);

    
    
    
    return 0;
}