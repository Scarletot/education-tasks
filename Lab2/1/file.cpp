#include <iostream>

int main(){
  char s;
  std::cout << "enter symbol: ";
  std::cin >> s;
  int number = (int)s;
  std::cout << number << std::endl;
  std::cout << std::hex << number << std::endl;
  return 0;
}
