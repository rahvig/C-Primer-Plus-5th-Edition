#include <iostream>

using namespace std;

const int sec_per_min = 60;
const int sec_per_hr = 60*60;
const int sec_per_day = 24 * 60 * 60;

int main(){
  //Convert seconds to days, mins, seconds.
  cout << "Enter the number of seconds: ";
  long seconds;
  cin >> seconds;
  int days, hours, minutes, sec;
  days = seconds / sec_per_day;
  hours = (seconds % sec_per_day) / sec_per_hr;
  minutes = (seconds % sec_per_hr) / sec_per_min;
  sec = seconds % sec_per_min;

  cout << days << " days, " << hours << " hours, " << minutes << " minutes, " << sec << " seconds.\n";


  return 0;
}
