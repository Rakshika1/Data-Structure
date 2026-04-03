#include <bits/stdc++.h>
using namespace std;

int sum(vector<int>& N,int index){
    if(index == N.size()){
        return 0;
    }

    return (N[index] %2!=0?N[index] + sum(N,index+1):sum(N,index+1));

}
int main() {
    int n;
    cin >> n;
    vector<int>N(n);
    for(int i=0;i<n;i++){
        cin >> N[i];
    }
    int index =0;
    cout << sum(N,index);
    
    
    
    return 0;
}