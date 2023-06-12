/*
program ini dibuat oleh raffaello ligustro w tgl: 2/02/2023
*/
#include <iostream>
using namespace std;

int main(){
    int Bil;
    cin >> Bil;
        if ( Bil < 0 ){
            cout << "Bilangan bulat Negatif" << endl;
        }
        else if ( Bil > 0 ){
            cout << "Bilangan bulat Positif" << endl;
        }
        else {
            cout << "Bilangan bulat Nol" << endl;
        }
    return 0;
}