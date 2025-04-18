function fibonacciRecursive(n) {
    if (n <= 1) {
        return n;
    }
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

const n = 40;
console.time("Recursive");
console.log("Recursive Fibonacci(40):", fibonacciRecursive(n));
console.timeEnd("Recursive");