#include <iostream>
using namespace std;

int main(){
    int A, B, Hasil, Sisa;
    cin >> A;
    cin >> B;

    Hasil = A/B;
    Sisa = A%B;
    
    cout << "Hasil = " << Hasil << endl;
    cout << "Sisa = " << Sisa << endl;
    return 0;
}