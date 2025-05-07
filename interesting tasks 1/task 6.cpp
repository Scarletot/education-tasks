#include <iostream>

int main() {
    char* ones[20] = {
        "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine",
        "ten", "eleven", "twelve", "thirteen", "fourteen",
        "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"
    };

    char* tens[10] = {
        "", "", "twenty", "thirty", "forty",
        "fifty", "sixty", "seventy", "eighty", "ninety"
    };

    char* hundreds[10] = {
        "", "one hundred", "two hundred", "three hundred", "four hundred",
        "five hundred", "six hundred", "seven hundred", "eight hundred", "nine hundred"
    };

    for (int i = 0; i < 1000; i++) {
        int h = i / 100;
        int rest = i % 100;

        if (h > 0) {
            std::cout << hundreds[h];
            if (rest > 0) std::cout << " and ";
        }

        if (rest < 20) {
            if (rest > 0 || h == 0) std::cout << ones[rest];
        } else {
            int t = rest / 10;
            int o = rest % 10;

            std::cout << tens[t];
            if (o > 0) std::cout << " " << ones[o];
        }

        std::cout << std::endl;
    }

    return 0;
}
