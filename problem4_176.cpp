#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    string bulan[ ] = {"Januari", "Febuari", "Maret", "April", "Mei", "Juni", "Juli", "Agustus", "September", "Oktober", "November", "Desember"};
    if (N <= 12){
        cout << bulan[N-1] << endl;
    }
    else {
        cout << "Tidak ada bulan yang sesuai" << endl;
    }
    return 0;
}