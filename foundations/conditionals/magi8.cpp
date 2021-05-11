#include <iostream>
//to access rand()
#include <cstdlib>
using namespace std;

int main(){
    cout <<"MAGIC 8-BALL: ";

/*manipulate rand() function 
to be able to specify range in answer*/
    srand(time(NULL));
    int answer = std::rand() % 10;
    cout << answer << "\n";

    if(answer == 0){
        cout << "It is certain";

    } else if (answer > 5 and answer < 9){
        cout << "Try again";
    } else{
        cout << "Very doubtful";
    }

}