#include <iostream>

using namespace std;

const double SECONDS_ARC = 3600.0;
const double MINUTES_ARC = 60.0;


int main(){
  //Convert latitude in degrees, minutes, and seconds to latitude in decimal format
  cout << "Enter a latitude in degrees, minutes, and seconds: \n";
  cout << "First, enter the degrees: ";
  int deg;
  cin >> deg;
  cout << "Next, enter the minutes of arc: ";
  int min;
  cin >> min;
  cout << "Finally, enter the seconds of arc: ";
  int sec;
  cin >> sec;
  double latInDec = deg + min/MINUTES_ARC + sec/SECONDS_ARC;
  cout << latInDec << " degrees" << endl;



  return 0;
}
