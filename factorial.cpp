// factorial.cpp
#include <iostream>
using namespace std;

int factorial(int N){
    if (N == 1)
    return 1;
    return N * factorial( N - 1);
}

int main(){
    int N;
    cout << "N < 12" << endl << "enter number : ";
    cin >> N;
    cout << factorial(N);
    return 0;
}