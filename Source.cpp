#include <iostream>

int main() {
    int a;
    std::cout << "Enter the value of 'a': ";
    std::cin >> a;

    int sum = 0;
    for (int i = a; i <= 500; ++i) {
        sum += i;
    }

    std::cout << "Sum of integers from " << a << " to 500: " << sum << std::endl;

    return 0;
}
