public static void main(String[] args) {
    int n = 40;

    long start = System.currentTimeMillis();
    System.out.println("Recursive Fibonacci(40): " + Fibonacci.fibonacciRecursive(n));
    System.out.println("Recursive: " + (System.currentTimeMillis() - start) + "ms");

}