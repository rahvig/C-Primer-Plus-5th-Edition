#include <iostream>

using namespace std;

struct CandyBar{
  string brand;
  float weight;
  int cals;
};

int main(){
  CandyBar* snacks = new CandyBar[3];
  snacks[0] = {"s", 1, 1};
  snacks[1] = {"r", 3, 11};
  snacks[2] = {"t", 2, 1};
  cout << snacks->brand << endl << snacks->weight << endl << snacks->cals << endl;
  cout << (snacks+1)->brand << endl << snacks[1].weight << endl << snacks[1].cals << endl;
  cout << snacks[2].brand << endl << snacks[2].weight << endl << snacks[2].cals << endl;

  return 0;
}
