#include <iostream>
#include <vector>
using namespace std;

int main(){
    //string names[4] = {};
    //string dorms[4] = {};

   // string students[4][2] = {
   //     {"Hermione", "Gryffindor"},
   //     {"Harry", "Gryffindor"},
   //     {"Ron", "Gryffindor"},                                (Arry Version)
   //     {"Draco", "Slytherin"}
   // };
   // cout << students[3][0] << ":" << students[3][1] << endl;

    vector<vector<string>> students_vect = {
          {"Hermione", "Gryffindor"},
        {"Harry", "Gryffindor"},                                //(Vector Version)
        {"Ron", "Gryffindor"},
        {"Draco", "Slytherin"}
    };
    vector<string> student;
    student.push_back("Cedric");student.push_back("Hapelpaf");
    students_vect.push_back(student);
    cout << students_vect[4][0] << ":" << students_vect[4][1];
    return 0;
}