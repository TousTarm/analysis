use std::time::Instant;

fn fibonacci_recursive(n: u32) -> u32 {
    if n <= 1 {
        return n;
    }
    fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2)
}

fn main() {
    let n = 40;
    let start = Instant::now();
    let result = fibonacci_recursive(n);
    let duration = start.elapsed();

    println!("Fibonacci({}): {}", n, result);
    println!("Time taken: {:?}", duration);
}