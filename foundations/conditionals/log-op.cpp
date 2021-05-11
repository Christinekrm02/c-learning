#include<iostream>

//can also use keyword "and"
int main(){
    int hunger = true;
    int anger = true;

    if(hunger && anger){
        return true;
    }
}

//can also use keyword "or"
int main(){
    int day = 6;
    if(day ==6 || day ==7){
        std::cout << "Weekend";
    }
}
//can also use "not" keyword
int main(){
    bool logged_in = false;

    if(!logged_in){
        std::cout << "Try again";
    }
}