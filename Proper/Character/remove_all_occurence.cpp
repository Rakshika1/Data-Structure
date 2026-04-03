#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void removeAllOccurrences(string s ,string part){
  //first of all first that part int the string

  int pos = s.find(part);
  cout << pos;

  //now remove that part
  // using erase function
  while(pos!= string::npos){
      s.erase(pos,part.length());
      pos = s.find(part);

  }
  cout <<s;
}

int main() {
  cout << "Enter a string  :" << endl;
  string s ;
  string part;
  part = "abc";
  s = "daabcbaabcbc";
  removeAllOccurrences(s,part);
  // cout << "The updated strings is "<< s;
  
}