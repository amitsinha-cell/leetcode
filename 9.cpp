#include <iostream>

using namespace std;
    

bool isPalindrome(int x){
  int digit, reverse = 0, y = x;

  
  if (x < 0){
    return false;
  }
  
  else{
    while (y!=0){
      digit = y % 10;
      reverse = reverse*10 + digit;
      y = int(y/10);
    }
  }

  if (x == reverse){
    return true;
  }
  else{
    return false;
  }
}

int main(){
  int a;
  cout << "enter an integer";
  cin >> a;
  cout << isPalindrome(a);
  return 0;
}