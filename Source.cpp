#include <iostream>

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    int i = 0;
    while (i <= number) {
        std::cout << i << std::endl;
        ++i;
    }

    return 0;
}
