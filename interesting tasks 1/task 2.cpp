#include <iostream>

long long fact(int num){
    if (num <= 1){
        return 1;
    }
    return num * fact(num - 1);
}

int main(){
    std::cout << "Enter the number up to 20 that you want to see: " << std::endl;
    int row;
    std::cin >> row;
    int line[20];
    for (int i = 0; i <= row; i++){
        line[i] = fact(row)/(fact(i)*fact(row - i));
    }
    for (int i = 0; i <= row; i++){
        std::cout << line[i] << " ";
    }


    return 0;
}