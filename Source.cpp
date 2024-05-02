#include <iostream>

int main() {
    int a;

    std::cout << "Enter the value of 'a' (1 <= a <= 20): ";
    std::cin >> a;

    if (a < 1 || a > 20) {
        std::cout << "Invalid input. 'a' must be between 1 and 20." << std::endl;
        return 1;
    }

    long long product = 1;
    for (int i = a; i <= 20; ++i) {
        product *= i;
    }

    std::cout << "Product of integers from " << a << " to 20: " << product << std::endl;

    return 0;
}
