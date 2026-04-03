#include <bits/stdc++.h>
using namespace std;

int Factorial(int num){
    int n =1;
    for(int i=1;i<num;i++){   
        n =  n+ n*i;
    }
    return n;

}
int Factorial1(int num){ // 3   fact(3)*fact(2) 
    if(num==1){
        return 1;
    }
    return num*Factorial1(num-1);
}

int digits(int num){
    int count =0;
    while(num!=0){
        num=num/10;
        count++;
    }
    return count;
    
}
int main() {
    int n ;
    // cout << "TYPE THE NUMBER WHOM FACTORIAL YOU WANT TO CALCULATE:";
    cout <<"Enter the number";
    cin >> n;

    //method 1

    // cout << Factorial(n);
    // cout << Factorial1(n);

    //method 2

    int digits;
    digits = floor(log10(n)) +1;
    cout << digits;

    //method 3 convert to string
    int string ;
    string = to_string(n).length();
    cout << string;

   
    
    
    
    return 0;
}