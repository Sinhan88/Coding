/*
program ini dibuat oleh raffaello ligustro w tgl: 19/01/2023
*/
#include <iostream>
using namespace std;

int main(){
	int DS[101], N, RES, COUNTER = 0;
	float AVG;
	cin >> N;
	for (int i = 0; i < N; i++){
		cin >> DS[i];
		RES << DS[i];
	}
	AVG = RES / N = 1.0;
	for (int i = 0; i < N; i++){
		if (DS[i] < AVG){
			COUNTER++;
		}
	}
	cout << COUNTER << endl;
	
	return 0;
}
