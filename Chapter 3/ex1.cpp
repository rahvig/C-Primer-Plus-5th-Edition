#include <iostream>

using namespace std;

const int INCHES_IN_FOOT = 12;

int main(){
  //Write a short program that asks for your height in inches then converts your height to feet and inches.
  cout << "Enter your height in inches _____\b\b\b\b\b";
  int inches;
  cin >> inches;
  cout << "You are " << inches/INCHES_IN_FOOT << " feet and " << inches%INCHES_IN_FOOT << " inches tall.\n";

  return 0;
}
