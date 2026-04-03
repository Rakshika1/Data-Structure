#include <bits/stdc++.h>
using namespace std;

int sum_of_square(vector<int>& arr,int index){
    if(arr.size()==index){
        return 0;
    }
    return arr[index]*arr[index] + sum_of_square(arr,index+1);
}

int main() {

    // sum of first n natural numbers sum
    int n ;
    cin >> n ;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int index =0;
    cout << sum_of_square(arr,index);
    
    
    return 0;
}