#include <iostream>
#include <vector>
using namespace std;

int main(){
    int numbers_arr[5] = {1, 2, 3, 4, 5};
    vector<int> numbers_vect = {10, 20, 30, 40, 50};
    numbers_vect.push_back(10);
    numbers_vect.push_back(20);
    numbers_vect.push_back(30); //Khusus dev c++ versi lama
    numbers_vect.push_back(40);
    numbers_vect.push_back(50);

    // print vector
    for (int i = 0; i < numbers_vect.size();i++){
        cout << numbers_vect[i] << " ";
    }
    cout << endl;

    // delete numbers in vector
    numbers_vect.pop_back();
    for (int i = 0; i < numbers_vect.size();i++){
        cout << numbers_vect[i] << " ";
    }
    cout << endl;
    
    // insert item into vector
    vector<string> cars;
    cars.push_back ("Mazda");
    cars.push_back ("Honda");
    cars.push_back ("Nissan");
    cars.push_back ("Mithsubishi");
    cars.push_back ("Hino");
    
    cars.insert( cars.begin()+1, "Suzuki");
    cars.insert( cars.end(), "DFSK");
    for (int i = 0; i < cars.size();i++){
        cout << cars[i] << " ";
    }
    cout << endl;

    // erase item from vector
    cars.erase(cars.begin()+4);
     for (int i = 0; i < cars.size();i++){
        cout << cars[i] << " ";
    }
    cout << endl;



    return 0;
}