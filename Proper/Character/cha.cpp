#include <iostream>
#include<algorithm>

using namespace std;
//array pass by referenece 
int getlength(char name[]){
  int i=0;
  int length =0;
  while(name[i]!= NULL){
    i++;
    length++;
  }
  return length;
}

void reverseCharArray(char name[]){
  int i=0;
  int n = getlength(name);
  int j = n-1;

  while(i<=j){
    swap(name[i],name[j]);
    i++;
    j--;
  }
}
void replaceSpaces(char sentence){
  int i =0;
  int n = strlen(sentence);

  for(int i=0;i<n;i++){
    if(sentence[i]==' '){
      sentence[i] = '@';
    }
  }
}
int main() {
  cout << "Hello world!" << endl;
  char name[50];
  cin >> name;
  cout << "The reverses string is "<< reverseCharArray(name);

  return 0;
}