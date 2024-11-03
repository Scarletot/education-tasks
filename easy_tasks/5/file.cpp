#include<iostream>
#include<iomanip>
#include<cmath>
int main(){
  float PI = 3.14f;
  int radius;
  std::cout << "radius: ";
  std::cin >> radius;
  double area=PI*pow(radius,2) ;
  double circuit=2*PI*radius ;

  std::cout <<std::fixed <<std::setprecision(2);
  std::cout << "area: " << area <<std::endl;
  std::cout << "circuit: "<< circuit <<std::endl;
  return 0;
}
