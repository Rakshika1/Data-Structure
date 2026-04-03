// sum of digit of nay number 


// 450 = 4+5 + 0
// 450 % 10 == 0
// 450/10 == 45
// 45 % 10 == 5
// 45/10 == 4
// 4 % 10 == 4
// 4 /10 == 0 
// stop
#include <bits/stdc++.h>
using namespace std;

int sum_of_digit(int val){
    if(val ==0){
        return 0;
    }
    int lastDigit;
    lastDigit = val % 10 ;
    val = val /10;
    return lastDigit+ sum_of_digit(val);

    
}

int main() {

    // sum of first n natural numbers sum
    int val ;
    cin >> val ;
  
    cout << sum_of_digit(val);
    
    
    return 0;
}