// find_the_key.cpp
#include <iostream>
using namespace std;
 
bool find_the_key(){
  string ans;
  cout << "Did you find the key ? ";
  getline(cin, ans);
  if (ans == "yes")
    return true;
  return false;
}
 
int main() {
  while(true){
    if (find_the_key() == true){
      cout << "Thankyou ...\n";
      break;
    }
  }
}     
