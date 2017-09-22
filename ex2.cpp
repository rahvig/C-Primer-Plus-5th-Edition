#include <iostream>


int main(int argc, char* argv[]){
  //C++ program to convert furlongs to yards. (1 furlong is 220 yards)
  std::cout << "Enter the number of furlongs you wish to convert" << std::endl;
  double furlongs;
  std::cin >> furlongs;
  std::cout << "The number of yards is " << furlongs * 220 << std::endl;


  return 0;
}
