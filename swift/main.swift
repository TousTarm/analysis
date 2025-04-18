import Foundation

func fibonacciRecursive(_ n: Int) -> Int {
    if n <= 1 {
        return n
    }
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2)
}

let n = 40
let start = Date()
let result = fibonacciRecursive(n)
let duration = Date().timeIntervalSince(start)
print("Fibonacci(\(n)): \(result)")
print("Time taken: \(duration) seconds")
_ = readLine()