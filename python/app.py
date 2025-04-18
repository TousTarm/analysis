import time

def fibonacciRecursive(n):
    if n <= 1:
        return n
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2)

n = 40

start = time.time()
print("Recursive Fibonacci(40):", fibonacciRecursive(n))
print("Recursive:", time.time() - start, "seconds")