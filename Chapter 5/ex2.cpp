#include <iostream>

using namespace std;

int main(){
  int sum = 0, x;

  while(cin >> x){
    sum+=x;
    if(x == 0){
      break;
    }
  }

  cout << sum << endl;

  return 0;
}
