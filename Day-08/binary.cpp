#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n; // 10;
    int remainder;
    vector<int> rem;

    while (n != 0)
    {
        remainder = n % 2;        // 0
        rem.push_back(remainder); // rem = [0,1,0]
        n = n / 2;                // 2
    }
    reverse(rem.begin(), rem.end());
    for (auto it : rem)
    {
        cout << it;
    }

    cout << "\n Complement: ";
    
    for(auto &it : rem){
        it= (1-it);
        
    }

    // now convert complement into decimal 
    int decimal =0;
    int power =0;

    for(int i= rem.size()-1;i>=0;i--){
        decimal += rem[i] * pow(2,power);
        power++;
    }

    cout << decimal;
    
    

    return 0;
}