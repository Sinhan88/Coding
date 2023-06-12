#include <iostream>
#include <cmath>
using namespace std;

double square(double number){
    double result = number * number;
    return result;
}

int main(){
    double a, b;
    cin >> a >> b;
    double c = sqrt(square(a) + square(b));
    cout << c << endl;
    return 0;
}