#include <iostream>

int main(){
    int n;
    std::cout << "Enter the last number" << std::endl; 
    std::cin >> n;
    for (int a = 1; a <= n; a++){
        for (int b = 1; b <= n; b++){
            for (int c =1; c <= n; c++){
                if (a*a + b*b ==c*c){
                    std::cout << "a: " << a << " b: " << b << " c: " << c << " are triplets" << std::endl;
                }
            }
        }
    }
    return 0;
}