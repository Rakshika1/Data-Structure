#include <bits/stdc++.h>
using namespace std;

long long int binpow(int value ,int power){

    if(power ==0){
        return 1;
    }
    long long res =  binpow(value, power/2);
    if(power%2){
        return res*res*value;
    }
    else{
        return res*res;
    }

}
int main() {
    
    cout << binpow(3,13);
    
    
    
    return 0;
}