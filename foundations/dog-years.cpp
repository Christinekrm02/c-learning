//Calculate in human years the age, in human years, of any dog older than 2

#include <iostream>

int main(){
    //Program for dogs older than 4 years
    int dog_age = 4;
    int early_years;
    int later_years;
    int human_years;

    //First two years of a dog'slife count as 21 human years
     early_years = 21;
     later_years = (dog_age-2)*4;
     human_years = early_years + later_years;

     std::cout << "My name is Hero and I am " << dog_age << "years old. ";
     std::cout << "In human years, I am " << human_years << "years. \n";

}