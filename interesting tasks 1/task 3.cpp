#include <iostream>

int main() {
    std::cout << "Enter the last number: " << std::endl;
    int num;
    std::cin >> num;

    bool nums[1000];

    for (int i = 0; i < num; i++) {
        nums[i] = true;
    }

    nums[0] = nums[1] = false;

    for (int i = 2; i * i < num; i++) {
        if (nums[i]) {
            for (int j = i * i; j < num; j += i) {
                nums[j] = false;
            }
        }
    }

    for (int i = 0; i < num; i++) {
        if (nums[i]) {
            std::cout << i << " ";
        }
    }

    return 0;
}