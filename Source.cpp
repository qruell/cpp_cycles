#include <iostream>

int main() {
    int x, y;
    std::cout << "Enter the base (x): ";
    std::cin >> x;
    std::cout << "Enter the exponent (y): ";
    std::cin >> y;

    int result = 1;
    int exponent = y;
    while (exponent != 0) {
        result *= x;
        --exponent;
    }

    std::cout << x << " raised to the power of " << y << " = " << result << std::endl;

    return 0;
}
