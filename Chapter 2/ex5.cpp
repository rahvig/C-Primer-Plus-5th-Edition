#include <iostream>

double lightYearToAU(double);


int main(int argc, char* argv[]){
  std::cout << "Please enter the number of light years: ";
  double ly;
  std::cin >> ly;
  double au = lightYearToAU(ly);
  std::cout << ly << " light years = " << au << " astronomical units" << std::endl;

  return 0;
}

double lightYearToAU(double ly){
  return ly * 63240;
}
