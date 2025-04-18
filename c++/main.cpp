#include <iostream>
#include <chrono>

int fibonacciRecursive(int n) {
    if (n <= 1) return n;
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

int main() {
    int n = 40;

    auto start = std::chrono::high_resolution_clock::now();
    int result = fibonacciRecursive(n);
    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> elapsed = end - start;

    std::cout << "Fibonacci(" << n << "): " << result << std::endl;
    std::cout << "Time taken: " << elapsed.count() << " seconds" << std::endl;

    std::cin.get(); // Pause before exiting
    return 0;
}
