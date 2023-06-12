// count_down.cpp
#include <iostream>
using namespace std;

int count_down(int init, int final){
    cout << init << " ";
    if (init == final)
        return 0;
    return count_down(init - 1, final);
    }

    int main(){
        count_down(10, 0);
        cout << endl;
    }