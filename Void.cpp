#include <iostream>
using namespace std;

void say_hello(string to="Jane Doe"){ // variable to disebut sebagai parameter
    cout << "HELLO "<< to <<" \n";
    cout << "NICE TO MEET YOU "<< to <<" \n";
}
void say_good_bye(string to="Jane Doe"){
    cout << "SEE YOU LATER "<< to <<" \n";
}

int main(){
    say_hello(); //merupakan argumen
    say_good_bye();
    return 0;
}