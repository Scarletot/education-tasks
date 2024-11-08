#include <iostream>


int temp;


int main(){
  typedef int num;
  typedef struct{
  
  } b;
  struct student {
    char age;
    num rate;
  } a = {
    40,
    20
  };
  
  std::cout <<(int)a.age << std::endl; 
  /*
  std::cout <<"int: "<< sizeof(int) << std::endl;
  std::cout <<"double: " << sizeof(double) << std::endl;
  std::cout <<"char: "<< sizeof(char) << std::endl;
  std::cout <<"float: "<< sizeof(float) << std::endl;
  */
  std::cout << sizeof(student)<< std::endl; 

  int nums[12];
  for (char i = 0; i < 12; i++){
    nums[i] = i*2;
  } 
  for (char i = 0; i < 12; i++){
    std::cout << nums[i] << std::endl;
  }
  student omfc[10];
  for (char i = 0; i < 10; i++){
    omfc[i].age = i * 10;
    omfc[i].rate = i;
  } 
  for (char i = 0; i < 10; i++){
    std::cout << (int)omfc[i].age << std::endl;
    std::cout << omfc[i].rate << std::endl;
  }

  return 0;
}
