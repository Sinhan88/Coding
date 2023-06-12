#include <iostream>
 using namespace std;
 
int main(){
	int N, i;
	cin >> N;
	if (N <= 0 || N == 1){
    	cout << "BUKAN PRIMA\n";
    	return 0;
	}
	else {
	    for (i = 2; i <= N / 2; i++){
	    	if (N % i == 0){
	    		cout << "BUKAN PRIMA\n";
	    		return 0;;
	    	}
	    }
	}
	cout << "PRIMA";
	return 0;
}



