//while loops loops UNTIL the condition is false

#include <iostream>
using namespace std;

int main(){
    int password;
    int tries = 0;

  cout << "Enter password \n";
  cin >> password;

  while(password != 54321 && tries < 2){
      cout << "Try again: ";
      cin >> password;
      tries++;
  }
  if(password == 54321){
      cout << "Access granted";
  }

}