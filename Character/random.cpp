#include <iostream>
#include<algorithm>
#include<string.h>

using namespace std;
// //array pass by referenece 
// int getlength(char name[]){
//   int i=0;
//   int length =0;
//   while(name[i]!= NULL){
//     i++;
//     length++;
//   }
//   return length;
// }

// void reverseCharArray(char name[]){
//   int i=0;
//   int n = getlength(name);
//   int j = n-1;

//   while(i<=j){
//     swap(name[i],name[j]);
//     i++;
//     j--;
//   }
// }
// void replaceSpaces(char sentence){
//   int i =0;
//   int n = strlen(sentence);

//   for(int i=0;i<n;i++){
//     if(sentence[i]==' '){
//       sentence[i] = '@';
//     }
//   }
// }

// bool palindrom(char word[]){
//   int i =0;
//   int j = strlen(word)-1;
//   while(i<=j){
//     //now check and move
//     if(word[i]!=word[j]){
//       return false;
//     }
//     else{
//      i++;
//      j--;
//     }
//   }
//   return true;

// }

void uppercase(char word[]){

  int n = strlen(word);
  for(int i=0;i<n;i++){
    word[i] = word[i] - 'a' + 'A';
  }

}
int main() {
  // cout << "Hello world!" << endl;
  // char name[50];
  // cin >> name;
  // cout << "The reverses string is "<< reverseCharArray(name);

  char arr[100] = "noon";
  cout << "palindrom checking:" << uppercase(arr) << endl;

  return 0;
}