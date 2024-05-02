#include <iostream>

int main() {
    int a;
    std::cout << "Enter a value for 'a' (1 <= a <= 20): ";
    std::cin >> a;

    if (a < 1 || a > 20) {
        std::cout << "Invalid input. 'a' must be between 1 and 20." << std::endl;
        return 1;
    }

    int product = 1;
    int current = a;
    while (current <= 20) {
        product *= current;
        ++current;
    }

    std::cout << "Product of integers from " << a << " to 20: " << product << std::endl;

    return 0;
}
