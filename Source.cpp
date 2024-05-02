#include <iostream>

int main() {
    int number;
    int sum = 0;

    std::cout << "Enter numbers (enter 0 to finish):" << std::endl;

    do {
        std::cin >> number;
        sum += number;
    } while (number != 0);

    std::cout << "Sum of the numbers entered: " << sum << std::endl;

    return 0;
}
