#include <iostream>

int main() {
    int start, end;

    std::cout << "Enter two range limits (separated by space): ";
    std::cin >> start >> end;

    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }

    std::cout << "All numbers in the range [" << start << ", " << end << "]:" << std::endl;

    int num = start;
    while (num <= end) {
        std::cout << num << " ";
        ++num;
    }
    std::cout << std::endl;

    std::cout << "Even numbers in the range [" << start << ", " << end << "]:" << std::endl;
    num = (start % 2 == 0) ? start : start + 1;
    while (num <= end) {
        std::cout << num << " ";
        num += 2;
    }
    std::cout << std::endl;

    std::cout << "Odd numbers in the range [" << start << ", " << end << "]:" << std::endl;
    num = (start % 2 != 0) ? start : start + 1;
    while (num <= end) {
        std::cout << num << " ";
        num += 2;
    }
    std::cout << std::endl;

    std::cout << "Numbers divisible by seven in the range [" << start << ", " << end << "]:" << std::endl;
    num = (start % 7 == 0) ? start : (start + (7 - start % 7));
    while (num <= end) {
        std::cout << num << " ";
        num += 7;
    }
    std::cout << std::endl;

    return 0;
}
