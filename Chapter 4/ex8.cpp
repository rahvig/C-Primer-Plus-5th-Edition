#include <iostream>

using namespace std;

struct pizzaService{
  string company;
  float diameter;
  float weight;
};

int main(){
  pizzaService* c = new pizzaService;
  cout << "What is the name of the company: ";
  getline(cin, c->company);
  cout << "What is the diameter of the pizza: ";
  cin >> c->diameter;
  cout << "What is the weight of the pizza: ";
  cin >> c->weight;

  cout << c->company << "\n" << c->diameter << "\n" << c->weight << endl;

  delete c;

  return 0;
}
