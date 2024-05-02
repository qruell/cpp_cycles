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

    int num = start;
    while (num <= end) {
        sum += num;
        num++;
    }

    std::cout << "Sum of numbers in the range [" << start << ", " << end << "]: " << sum << std::endl;

    return 0;
}
