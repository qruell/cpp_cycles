#include <iostream>

int main() {
    int k;
    std::cout << "Enter the variant number: ";
    std::cin >> k;

    int multiplier = 1;
    while (multiplier <= 10) {
        std::cout << k << " x " << multiplier << " = " << (k * multiplier) << std::endl;
        ++multiplier;
    }

    return 0;
}
