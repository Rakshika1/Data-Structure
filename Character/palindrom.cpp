
bool palindrom(char word[]){
  int i =0;
  int j = strlen(word)-1;
  while(i<=j){
    //now check and move
    if(word[i]!=word[j]){
      return false;
    }
    else{
     i++;
     j--;
    }
  }
  return true;

}
int main() {
  // cout << "Hello world!" << endl;
  // char name[50];
  // cin >> name;
  // cout << "The reverses string is "<< reverseCharArray(name);

  char arr[100] = "noon";
  cout << "palindrom checking:" << palindrom(arr) << endl;

  return 0;
}