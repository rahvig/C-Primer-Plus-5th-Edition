#include <iostream>

using namespace std;


int main(){
  cout << "What is your first name? ";
  char Fname[20];
  char Lname[20];
  cin.getline(Fname, 100);
  cout << "What is your last name? ";
  cin.getline(Lname, 100);
  cout << "What letter grade do you deserve? ";
  char gr;
  cin >> gr;
  cout << "What is your age? ";
  int age;
  cin >> age;

  cout << Lname << ", " << Fname << endl << char(gr + 1) << endl << age << endl;





  return 0;
}
