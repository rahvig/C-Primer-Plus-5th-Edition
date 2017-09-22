#include <iostream>

double celciusToFahrenheit(double);


int main(int argc, char* argv[]){
  std::cout << "Please enter a Celcius value: ";
  double cel;
  std::cin >> cel;
  double far = celciusToFahrenheit(cel);
  std::cout << cel << " degrees Celcius is " << far << " degrees Fahrenheit" << std::endl;

  return 0;
}

double celciusToFahrenheit(double celcius){
  return 1.8 * celcius + 32.0;
}
