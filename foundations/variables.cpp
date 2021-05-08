#include <iostream>

int main(){
//Declare double variable and initialize with temperature
double tempf = 64.6;
double tempc;
//Calculate temperature in celsius
//C = (F-32)/1.8
tempc = (tempf - 32)/1.8;
//Display result

 std::cout << "The temperature is " << tempc << "degrees Celsius \n";
 
}
