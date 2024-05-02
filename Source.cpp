#include <iostream>

int main() {
    int start, end;
    int sum = 0;

    std::cout << "Enter the range (two numbers separated by space): ";
    std::cin >> start >> end;

    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }

    for (int i = start; i <= end; ++i) {
        sum += i;
    }

    std::cout << "Sum of all numbers in the range [" << start << ", " << end << "]: " << sum << std::endl;

    return 0;
}
