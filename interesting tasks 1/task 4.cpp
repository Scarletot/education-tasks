#include <iostream>

int main(){
    std::cout << "Enter any number: " << std::endl;
    int num;
    std::cin >> num;
    int res[100];
    int pos = 0;
    for (int i = 2; i <= num; i++){
        if (num % i == 0){
            num /= i;
            res[pos] = i;
            pos ++;
            i --;
        }
    }
    for (int i = 0; i < pos; i++) {
            std::cout << res[i] << " ";

    }
    return 0;
}