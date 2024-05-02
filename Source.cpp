#include <iostream>

int main() {
    int start, end;

    std::cout << "Enter the range (two numbers separated by space): ";
    std::cin >> start >> end;

    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }

    std::cout << "All numbers in the range [" << start << ", " << end << "]:" << std::endl;
    for (int i = start; i <= end; ++i) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    std::cout << "Even numbers in the range [" << start << ", " << end << "]:" << std::endl;
    for (int i = start; i <= end; ++i) {
        if (i % 2 == 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    std::cout << "Odd numbers in the range [" << start << ", " << end << "]:" << std::endl;
    for (int i = start; i <= end; ++i) {
        if (i % 2 != 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    std::cout << "Numbers divisible by seven in the range [" << start << ", " << end << "]:" << std::endl;
    for (int i = start; i <= end; ++i) {
        if (i % 7 == 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
