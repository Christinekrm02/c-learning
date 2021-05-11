/*Write a leap_year.cpp program that:

Takes a year as input.
Checks to see if the year is a four-digit number.
Displays whether or not the year falls on a leap year.
There are 3 criteria that must be taken into account to identify a leap year:

If the year can be evenly divided by 4 then it is a leap year, however…
If that year can be evenly divided by 100, and it is not evenly divided by 400, then it is NOT a leap year.
If that year is evenly divisible by 400, then it is a leap year.*/

#include <iostream>
using namespace std;

int main() {
 
  int y = 0;
 
  std::cout << "Enter year: ";
  std::cin >> y;
 
  if (y < 1000 || y > 9999) {
 
    std::cout << "Invalid entry.\n";
 
  }
  else if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
 
    std::cout << y;
    std::cout << " falls on a leap year.\n";
 
  }
  else {
 
    std::cout << y;
    std::cout << " is not a leap year.\n";
 
  }
 
}