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
  std::cout << "S1: " << (width*height)*2 <<std::endl;
  std::cout << "S2: " << (width*length)*2 <<std::endl;
  std::cout << "S3: " << (height*length)*2 <<std::endl;
  std::cout << "volume: " << (width*length*2)*height <<std::endl;
  return 0;
}
