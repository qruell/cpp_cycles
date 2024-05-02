#include <iostream>

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    std::cout << "Integers from zero to " << number << ":" << std::endl;
    for (int i = 0; i <= number; ++i) {
        std::cout << i << std::endl;
    }

    return 0;
}
