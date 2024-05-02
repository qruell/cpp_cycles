#include <iostream>

int main() {
    int sum = 0;
    int count = 0;
    int num = 1;

    while (num <= 1000) {
        sum += num;
        ++num;
        ++count;
    }

    double mean = static_cast<double>(sum) / count;

    std::cout << "Arithmetic mean of integers from 1 to 1000: " << mean << std::endl;

    return 0;
}
