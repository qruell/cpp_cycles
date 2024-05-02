#include <iostream>
#include <cmath>

int main() {
    int x, y;
    std::cout << "Enter the number x: ";
    std::cin >> x;
    std::cout << "Enter the number y (degree): ";
    std::cin >> y;

    double result = pow(x, y);

    std::cout << x << " in degree " << y << " = " << result << std::endl;

    return 0;
}
