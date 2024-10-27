#include <iostream>

int main() {
    long long n;
    std::cin >> n;

    long long sum;
    if (n % 2 == 0) {
        sum = n / 2;
    } else {
        sum = -(n + 1) / 2;
    }

    std::cout << sum << std::endl;
    return 0;
}
