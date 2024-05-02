#include <iostream>

int main() {
    int k;
    std::cout << "Enter the variant number: ";
    std::cin >> k;
    std::cout << "Multiplication table for " << k << ":" << std::endl;
    for (int i = 1; i <= 10; ++i) {
        std::cout << k << " x " << i << " = " << k * i << std::endl;
    }
    return 0;
}
