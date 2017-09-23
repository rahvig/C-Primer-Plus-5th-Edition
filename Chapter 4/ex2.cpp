#include <iostream>

using namespace std;


int main(){
  string name;
  string dessert;
  cout << "Enter your name please: ";
  getline(cin, name);
  cout << "Enter your fave dessert: ";
  getline(cin, dessert);
  cout << "Heres some " << dessert << " " << name << endl;




  return 0;
}
