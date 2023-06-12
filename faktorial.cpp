/*
program ini dibuat oleh raffaello ligustro w tgl: 19/01/2023
*/
#include <iostream>
using namespace std;

int main(){
	int N, Result = 1;
	cin >> N;
	if (N < 1){
		cout << "INVALID!!!" << endl;
		return 0;
	}
	else {
		for (int i = N; i > 1; i--){
			Result = Result * i;
		}
	}
	cout << Result << endl;
	return 0;
}
