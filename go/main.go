package main

import (
	"fmt"
	"time"
)

func fibonacciRecursive(n int) int {
	if n <= 1 {
		return n
	}
	return fibonacciRecursive(n-1) + fibonacciRecursive(n-2)
}

func main() {
	n := 40
	start := time.Now()
	result := fibonacciRecursive(n)
	duration := time.Since(start)
	fmt.Printf("Fibonacci(%d): %d\n", n, result)
	fmt.Printf("Time taken: %v\n", duration)
}
