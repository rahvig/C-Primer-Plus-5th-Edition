#include <iostream>

void time(int hr, int min);

int main(int argc, char* argv[]){
  std::cout << "Enter the number of hours: ";
  int hr;
  std::cin >> hr;
  std::cout << "Enter the number of minutes: ";
  int min;
  std::cin >> min;
  time(hr, min);
  return 0;
}

void time(int hr, int min){
  std::cout << "Time: " << hr <<  ":" << min << std::endl;
}
