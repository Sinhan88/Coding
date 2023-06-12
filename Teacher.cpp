#include <iostream>
#include <map>
using namespace std;

int main(){
    string teacher[2] = {
        "Anas",
        "Informatika"
    };

    map<string, string> teacher_map{
        {"name", "Anas"},
        {"subject", "Informatika"}
    };

    cout << teacher_map["name"] << " : ";
    cout << teacher_map["subject"] << endl;

    return 0;
} 