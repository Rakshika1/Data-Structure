#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr = {10, 20, 30, 40, 50, 60};

    // now search for the element which user can enter
    int n;
    cout << "Enter the number which you want to search";
    cin >> n;

    // for(int i=0;i<arr.size();i++){
    //     if(arr[i]==n){
    //         cout << "Elemenet found at index" << i;
    //         break;
    //     }
    //     else{
    //         cout << "Element not found"
    //     }

    // }

    auto it = find(arr.begin(), arr.end(), n);

    // here it is a pointer  which point to a element
    // *it is the actual value;

    // its interanl work
    //     for(auto it = arr.begin(); it != arr.end(); it++){
    //     if(*it == n){
    //         return it;
    //     }
    // }
    // return arr.end();

    if (it != arr.end())
    {
        cout << "Element found at index " << (it - arr.begin());
    }
    else
    {
        cout << "Element not found";
    }

    return 0;

    return 0;
}