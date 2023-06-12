/*
program ini dibuat oleh raffaello ligustro w tgl: 2/02/2023
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int alas, tinggi;
	cin >> alas >> tinggi;
	cout << fixed << setprecision(2) << (alas*tinggi/2) << endl;
	return 0;
}