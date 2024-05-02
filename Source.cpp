#include <iostream>

int main() {
    int sum = 0;
    int count = 0;

    for (int i = 1; i <= 1000; ++i) {
        sum += i;
        count++;
    }

    double mean = static_cast<double>(sum) / count;

    std::cout << "Arithmetic mean of integers from 1 to 1000: " << mean << std::endl;

    return 0;
}
