/*
program ini dibuat oleh raffaello ligustro w tgl: 19/01/2023
*/
#include <iostream>
using namespace std;

int main(){
	string cars [ ] = {"volvo", "BMW", "ford", "mazda"};
	cars[1] = "toyota";
	
	for (int i = 0; i < 5 ; i++){
		cout << cars[i] << endl;
	}
	
	return 0;
	
}
