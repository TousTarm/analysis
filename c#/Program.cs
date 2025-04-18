using System;

class Fibonacci
{
    static int FibonacciRecursive(int n)
    {
        if (n <= 1)
        {
            return n;
        }
        return FibonacciRecursive(n - 1) + FibonacciRecursive(n - 2);
    }

    static void Main(string[] args)
    {
        int n = 40;

        var watch = System.Diagnostics.Stopwatch.StartNew();
        Console.WriteLine("Recursive Fibonacci(40): " + FibonacciRecursive(n));
        watch.Stop();
        Console.WriteLine("Recursive: " + watch.ElapsedMilliseconds + "ms");
    }
}
