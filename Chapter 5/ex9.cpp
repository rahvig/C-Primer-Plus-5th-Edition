#include <iostream>

using namespace std;

int main(){
  cout << "Enter the number of rows: ";
  int n;
  cin >> n;
  int aCount = 0;
  for(int i = 0; i < n; ++i){
    for(int j =  0; j < n-i-1; ++j){
      cout << ".";
    }
    while(aCount <= i){
      cout << "*";
      aCount++;
    }
    aCount = 0;
    cout << endl;
  }


  return 0;
}
