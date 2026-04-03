#include <bits/stdc++.h>
using namespace std;

// Write the recursive function to calculate sum of first N natural number 
int sum(vector<int>& N ,int index){
    

    if(index ==N.size()){
        return 0;
    }
    return N[index] + sum(N,index+1);
    
}
int main() {
   int  n;
   cin >> n;
   vector<int> v(n);
   for(int i=0;i<n;i++){
    cin >> v[i];
   }

   cout << sum(v,0);
    return 0;
}