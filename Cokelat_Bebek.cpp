#include <iostream>
using namespace std;

int main(){
     string Cokelat_Bebek[4][2] = {
        {"100", "200"},
        {"101", "345"},
        {"102", "220"},
        {"103", "1000"}
    };
    for (int i = 0; i < 4; i++){
        cout << Cokelat_Bebek[i][0] << " Memperoleh Cokelat Sebanyak " << Cokelat_Bebek[i][1] << endl;
    }
    return 0;
}