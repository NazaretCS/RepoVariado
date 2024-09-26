#include <iostream>

void fibonacci(int n) {
    int a = 0, b = 1, temp;

    std::cout << "Fibonacci series: " << a << " " << b;

    for (int i = 2; i < n; ++i) {
        temp = a + b;
        std::cout << " " << temp;
        a = b;
        b = temp;
    }
    std::cout << std::endl;
}

int main() {
    int n;
    std::cout << "Enter a number between 1 and 20: ";
    std::cin >> n;

    while (n < 1 || n > 20) {
        std::cout << "Invalid number. Please enter a number between 1 and 20: ";
        std::cin >> n;
    }

    fibonacci(n);

    return 0;
}
