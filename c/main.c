#include <stdio.h>
#include <time.h>

int fibonacciRecursive(int n) {
    if (n <= 1) return n;
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

int main() {
    int n = 40;
    clock_t start, end;
    double cpu_time_used;

    start = clock();
    int result = fibonacciRecursive(n);
    end = clock();

    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Fibonacci(%d): %d\n", n, result);
    printf("Time taken: %f seconds\n", cpu_time_used);

    printf("Press Enter to exit...");
    getchar(); // Wait for user input before exiting

    return 0;
}
