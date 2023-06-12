/*
program ini dibuat oleh raffaello ligustro w tgl: 12/01/2023
*/
#include <iostream>
using namespace std;

int main(){
	int N, faktor = 0;
	cin >> N;
	for (int i = N; i > 0; i++){
		if ( N % i == 0){
		faktor++;
		}
		if ( faktor > 2 ){
		cout << "BUKAN PRIMA\n";
		}
		return 0;
	}
	cout << "PRIMA\n";
	return 0;
}
