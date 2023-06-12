/*
program ini dibuat oleh raffaello ligustro w tgl: 19/01/2023
*/
#include <iostream>
using namespace std;

int main(){
	int my_numbers[5] = { 10,20,30,40,50};
	cout << sizeof(my_numbers)<< endl;
	
	for (int i = 0; i < sizeof(my_numbers)/sizeof (int); i++){
		cout << my_numbers[i] << endl;
	}
	
	return 0;
}
