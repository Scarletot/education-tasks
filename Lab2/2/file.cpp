#include <iostream>
#include <iomanip>
int main(){
  double a;
  double b;
  std::cout << "enter a: ";
  std::cin >> a;
  std::cout << "enter b: ";
  std::cin >> b;
  std::cout << std::fixed << std::setprecision(12);
  std::cout << "sum: " << a+b << std::endl;
  std::cout << "sub: " << a-b << std::endl;
  std::cout << "multiplication: " << a*b << std::endl;
  std::cout << "share: " << a / b << std::endl;
  return 0;
}
