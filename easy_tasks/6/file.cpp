#include<iostream>
#include<iomanip>
#include<cmath>
int main(){
  float P; 
  std::cout << "P: ";
  std::cin >> P;

  int T; 
  std::cout << "T: ";
  std::cin >> T;

  float R; 
  std::cout << "R: ";
  std::cin >> R;
  float I = (P*T*R)/100;
  std::cout << "int I: "<< round(I) <<std::endl;
  std::cout <<std::fixed <<std::setprecision(2);
  std::cout << "float I: "<< I <<std::endl;

  return 0;
}
