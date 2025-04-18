def fibonacci_recursive(n)
    return n if n <= 1
    fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2)
  end
  
  n = 40
  start_time = Time.now
  result = fibonacci_recursive(n)
  end_time = Time.now
  
  elapsed_time = end_time - start_time
  
  puts "Fibonacci(#{n}): #{result}"
  puts "Time taken: #{elapsed_time} seconds"  