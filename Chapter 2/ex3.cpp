#include <iostream>


std::string string1(void);
std::string string2(void);

int main(int argc, char* argv[]){
  string1();
  string1();
  string2();
  string2();
  
  return 0;
}

std::string string1(void){
  std::cout << "Three blind mice" << std::endl;
}

std::string string2(void){
  std::cout << "See how they run" << std::endl;
}
