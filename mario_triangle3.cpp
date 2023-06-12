/*
program ini dibuat oleh raffaello ligustro w tgl: 12/01/2023
*/
#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;	
	for (int row = 0; row < N; row ++){
		for (int col = 0; col < N; col ++){
			if (row == 0){
				cout << " ";
			}
			else{
				if (row + col >= N - 1){
				cout << "*";
				}
				else{
				cout << " ";
				}
			}
		}
		cout << "\n";
	}
	return 0;
}
