#include <iostream>

int main(){
  int number;
  std::cout << "enter number: ";
  std::cin >> number;
  if (number%2 == 0)
  {
    std::cout << "Так " << std::endl;
  }
  else
  {
    std::cout << "Ні " << std::endl;
  }
  std::cout <<"hex: " << std::hex << number << std::endl;
  std::cout <<"oct: " <<  std::oct << number << std::endl;
  return 0;
}
