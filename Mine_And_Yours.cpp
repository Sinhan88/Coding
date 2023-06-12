#include<iostream>
using namespace std;

int d = 100, e = 200;

void this_is_steve(){
    int a = 2, b = 3, c = 4, d = 5;
    cout << a << " " << b << " " << c << " " << d << endl;   
}

void this_is_mike(){
    int a = 20, b = 30, c = 40;
    cout << a << " " << b << " " << c << " " << d << endl;
}

int main(){
    this_is_steve();
    this_is_mike();
    cout << e << endl;
    return 0;
}