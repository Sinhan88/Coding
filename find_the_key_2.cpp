// find_the_key_2.cpp
#include <iostream>
using namespace std;
 
bool find_the_key(){
  string ans;
  cout << "Did you find the key ? ";
  getline(cin, ans);
  if (ans == "yes") // base case
    return true; // base case
  return find_the_key(); // recursive case 
}
 
int main() {
  if (find_the_key() == true){
      cout << "Thankyou ...\n";
  }
}     
