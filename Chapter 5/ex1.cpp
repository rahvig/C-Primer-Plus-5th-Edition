#include <iostream>

using namespace std;


int main(){
  int s, l, sum = 0;
  cin >> s >> l;
  for(int i = s; i <= l; i++){
    sum+=i;
  }

  cout << sum << endl;



  return 0;
}
