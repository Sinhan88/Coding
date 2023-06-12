#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    int arr[1001];
    for (int i = 0; i < 1001; i++){
        arr[i] = 0;
    }

    int number;
    for (int i = 0; i < N; i++){
        cin >> number;
        arr [number]++;
    }

    int max_mod_number, max_counter = 0;
    for (int i = 0; i < 1000; i++){
        if (arr[i] >= max_counter){
            max_mod_number = i;
            max_counter = arr[i];
        }
    }
    cout << max_mod_number << endl;
    return 0;
}