#include<iostream>

int main(){
  int width;
  std::cout << "width: ";
  std::cin >> width;
  int height;
  std::cout << "height:  ";
  std::cin >> height;
  int length;
  std::cout << "length: ";
  std::cin >> length;
  std::cout << "area: " << (width*height+width*length+length*height)*2 <<std::endl;
  std::cout << "volume: " << width*length*height <<std::endl;
  return 0;
}
