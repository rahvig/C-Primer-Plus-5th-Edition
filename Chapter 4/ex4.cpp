#include <iostream>
#include <cstring>

using namespace std;

int main(){
cout << "Enter your first name and last name: ";
string first, last;
getline(cin, first);
getline(cin, last);
cout << last << ", " << first << endl;


  return 0;
}
