#include <iostream>

using namespace std;

struct CandyBar{
  string brand;
  float weight;
  int cals;
};

int main(){
  CandyBar snack = {"twix", 10.1, 1000};
  cout << snack.brand << endl << snack.weight << endl << snack.cals << endl;

  return 0;
}
