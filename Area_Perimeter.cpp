#include<iostream>
using namespace std;

double find_area(double a, double t){
    double res = (a * t)/2;
    return res;
}

double find_perimeter(double a, double t, double c){
    double result = (a + t + c);
    return result;
}

int main(){
    double a, t, c;
    cin >> a >> t >> c;

    double luas_segitiga = find_area(a, t);
    cout << "LUAS : " <<luas_segitiga << endl;
    
    double kell_segitiga = find_perimeter(a, t, c);
    cout << "KELILING : " << kell_segitiga << endl;
    return 0;
}

