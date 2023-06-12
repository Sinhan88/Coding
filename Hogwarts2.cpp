#include <iostream>
#include <map>
using namespace std;

int main(){
    string student[2] = {
        "Cedric",
        "Huflpuff"
    };

    map<string, string> student_map{
        {"name", "Cedric"},
        {"dorm", "Huflepuff"}
    };

    cout << student_map["name"] << " : ";
    cout << student_map["dorm"] << endl;

    return 0;
}