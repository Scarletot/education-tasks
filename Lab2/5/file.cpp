#include <iostream>
#include <cmath>
int main(){
  double point;
  std::cout << "Ведите оцінку: ";
  std::cin >> point;
  if (0.0 <= point && point <= 4.4)
  {
    std::cout << "Незадовільна оцінка(2,0)" << std ::endl;
  }
  else if (4.5 <= point && point <= 5.2)
  {
    std::cout << "Задовільна (3,0)" << std ::endl;
  }
  else if (5.3 <= point && point <= 6.2)
  {
    std::cout << "Оцінка вище задовільно(3,5)" << std ::endl;
  }
  else if (6.3 <= point && point <= 7.2)
  {
    std::cout << "Хороша оцінка(4,0)" << std ::endl;
  }
  else if (7.3 <= point && point <= 8.2)
  {
    std::cout << "Оцінка вище добре(4,5)" << std ::endl;
  }
  else if (8.3 <= point && point <= 9.0)
  {
    std::cout << "Дуже добре (5,0)" << std ::endl;
  }
  else
  {
    std::cout << "Неправильно кількість пунктів!" << std ::endl;
  }
  return 0;
}
