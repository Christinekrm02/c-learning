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

int main(){
    int year = 40;
    float year_by_4 = year / 4;
   // year = 20;
    cout << year_by_4;
    /*cout << "Type year here: "; //user to type number and press enter
    cin >> year; // user input here */

}