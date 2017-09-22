#include <iostream>

using namespace std;

double BMICalc(double, double);

int main(){
  //BMI Calculator
  int feet;
  int inches;
  double weight;
  cout << "Enter your height, first enter the number of feet then inches: ";
  cin >> feet >> inches;
  int totInches = feet*12 + inches;
  double heightInMeters = totInches * 0.0254;
  cout << "Now enter your weight in pounds: ";
  cin >> weight;
  double kg = weight /2.2;
  cout << "Your BMI is " << BMICalc(heightInMeters, kg) << endl;


  return 0;
}

double BMICalc(double h, double kg){
  return kg/(h*h);
}
