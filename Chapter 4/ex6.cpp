#include <iostream>

using namespace std;

struct CandyBar{
  string brand;
  float weight;
  int cals;
};

int main(){
  CandyBar snacks[] = {
    {"twix", 10.1, 1000},
    {"pe", 101, 13000},
    {"tsww", 1.1, 14000}
  };
  cout << snacks[0].brand << endl << snacks[0].weight << endl << snacks[0].cals << endl;
  cout << snacks[1].brand << endl << snacks[1].weight << endl << snacks[1].cals << endl;
  cout << snacks[2].brand << endl << snacks[2].weight << endl << snacks[2].cals << endl;

  return 0;
}
