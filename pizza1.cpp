#include <iostream>
#include <vector>
using namespace std;

int main(){
    string customer;
    cout << "HI...,WHO IS THIS.....!"; getline(cin, customer);

    cout << "HELLO" << customer << "PLEASE PUT YOUR TOPPING REQUEST HERE...\nPRESS q TO QUIT PROGRAM.\n";

    string topping("");
    vector <string> toppings;
    while(true){
        if (topping =="q")
        break;
        toppings.push_back(topping);
    }
    cout << "YOUR TOPPING IS\n";
     for (int i = 0; i < toppings.size();i++){
        cout << toppings[i] << " ";
    }
    cout << endl;
    return 0;
}