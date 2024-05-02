#include <iostream>

int main() {
    int a;
    std::cout << "Enter a value for 'a': ";
    std::cin >> a;

    int sum = 0;
    int current = a;
    while (current <= 500) {
        sum += current;
        current++;
    }

    std::cout << "Sum of integers from " << a << " to 500: " << sum << std::endl;

    return 0;
}
