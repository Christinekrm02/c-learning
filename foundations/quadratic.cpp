#include <iostream>
#include <cmath>
//write a program that calculates the value of x in a quadratic formula
//ax^2 + bx + c = 0
//X is the square root of b squared minus 4ac, plus or equal negative b, all divided by 2a

int main(){
    float a;
    float b;
    float c;

//Ask user to enter a value for a, then route the inout to the variable a
  /*  std::cout << "Enter a: ";
    std::cin >> a;

    std:: cout << "Enter b: ";
    std::cin >> b;

    std::cout << "Enter c: ";
    std::cin>> c; */

    a = 4;
    b = 11;
    c = 3;
    
    //Solve for the roots
    double root1, root2;

    root1 = (-b + std::sqrt(b*b - 4*a*c)) /2*a;
    root2 = (-b - std::sqrt(b*b - 4*a*c)) /2*a;

    std::cout << root1 << root2;
    return 0;
}
