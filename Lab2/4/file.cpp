#include <iostream>
#include <iomanip>
int main(){
  float C;
  std::cout << "Ведите целсію: ";
  std::cin >> C;
  if (C < -273)
  {
    std::cout << "Занадто холодно для пидрахунку!" << std::endl;
  }
  else
  {
    std::cout << std::fixed << std::setprecision(2);
    float F = C * 1.8 + 32 ;  
    std::cout << "перевод у фаренгейт: " << F << std::endl; 
  }
  return 0;
}
