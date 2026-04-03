#include <bits/stdc++.h>
using namespace std;

int main()
{

    for (int i = 0; i <= 3; i++)
    {
        string s = "";

        int num = i;
        while (num > 0)
        {
            s = char('0' + num % 2) + s;
            num = num / 2;
        }
        while(s.size()<2){
            s = '0' + s;
        }
        if (s == "")
            s = "0";
        cout << "The string s is the " << " " << s << endl;
    }
}
