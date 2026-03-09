#include <bits/stdc++.h>
using namespace std;

int main()
{
    string sequence;
    cin >> sequence;
    int count=1 ;
    int previous=1;
    // AAHHAYYYI
    for (int i = 0; i < sequence.size(); i++)
    {
        if(sequence[i] == sequence[i+1]){
            count = count +1; // A == A count =2
            previous = previous +1;//previous = 2
        }
        else if(sequence[i]!=sequence[i+1]){
            count =0;
        }
    return 0;
}}--