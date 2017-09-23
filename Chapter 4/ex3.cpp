#include <iostream>
#include <cstring>

using namespace std;

int main(){
cout << "Enter your first name and last name: ";
char first[10], last[10];
cin.getline(first, 10).getline(last, 10);
cout << last << ", " << first << endl;


  return 0;
}
