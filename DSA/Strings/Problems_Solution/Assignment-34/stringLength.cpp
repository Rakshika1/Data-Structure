#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int findLength(char ch[],int size){
 int index =0;
 while(ch[index]!='\0'){
  index++;
 }
 return index;

}
int findLengthByFor(char ch[],int size){

  int length =0;
  for(int i=0;i<size;i++){
    if(ch[i]=='\0'){
      break;
    }
    else{
      length++;
    }
  }
  return length;
}
int main(){
 char ch[100];
 cin >> ch;
  int lengthA = findLength(ch, 100);
  int lengthB = findLengthByFor(ch,100);
  cout<<"Length of string via our method: "<<lengthA<<endl;
  cout<<"Length of string via our method: "<<strlen(ch)<<endl;
  cout<<"Length of string via our method: "<<lengthB<<endl;

}

/*
Time Complexity: O(N), where N is length of char array
Space Complexity: O(1)
*/

/*
INPUT: Rakshika
OUTPUT: 
Length of string via our method: 8
Length of string via builtin method: 8
Length of string via our method: 8
*/