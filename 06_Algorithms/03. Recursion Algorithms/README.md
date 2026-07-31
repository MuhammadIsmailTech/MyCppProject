# Recursion Algorithms in C++

![Language](https://img.shields.io/badge/Language-C%2B%2B-blue)
![Algorithms](https://img.shields.io/badge/Category-Recursion-green)
![Level](https://img.shields.io/badge/Level-Beginner%20to%20Intermediate-orange)

# Introduction

Recursion is one of the most important concepts in Computer Science. It is a programming technique where a function calls itself to solve a smaller version of the same problem until a stopping condition (called the **Base Case**) is reached.

Many complex algorithms become simpler and easier to understand using recursion.

Examples include:

- Calculating factorials
- Fibonacci numbers
- Binary Search
- Merge Sort
- Quick Sort
- Tree Traversal
- Tower of Hanoi


# What is Recursion?

A recursive function has **two essential parts**:

## 1. Base Case

The base case stops the recursion.

Without a base case, the function will continue calling itself forever, causing a **Stack Overflow**.

Example

```text
if(n == 0)
    return;
```


## 2. Recursive Case

The recursive case is where the function calls itself.

Example

```text
return n * factorial(n - 1);
```

# How Recursion Works

Suppose we want to calculate:

```text
Factorial(5)
```

The recursive calls happen like this:

```text
factorial(5)

↓

5 × factorial(4)

↓

5 × 4 × factorial(3)

↓

5 × 4 × 3 × factorial(2)

↓

5 × 4 × 3 × 2 × factorial(1)

↓

5 × 4 × 3 × 2 × 1

↓

120
```

# Recursion Tree

Example:

```text
factorial(4)

            factorial(4)
                  |
            factorial(3)
                  |
            factorial(2)
                  |
            factorial(1)
                  |
               Return
```

Each function call is stored in the **Call Stack** until the base case is reached.


# Call Stack

Every recursive function call is stored inside memory called the **Call Stack**.

Example

```text
factorial(4)

Stack

factorial(1)

factorial(2)

factorial(3)

factorial(4)
```

When the base case is reached, the stack starts returning values from top to bottom.


# Advantages of Recursion

- Simple and elegant code
- Easy to solve divide-and-conquer problems
- Reduces lengthy loops in some problems
- Useful for trees and graphs
- Easy to understand mathematical problems


# Disadvantages of Recursion

- Uses extra memory (Call Stack)
- Slower than iteration in some cases
- Can cause Stack Overflow
- Harder to debug if recursion is deep

# When Should We Use Recursion?

Recursion is useful when solving problems that naturally break into smaller subproblems.

Examples

- Tree Traversal
- Binary Search
- Merge Sort
- Quick Sort
- Tower of Hanoi
- Dynamic Programming
- Graph Algorithms
- Mathematical Problems


# Time Complexity Symbols

| Complexity | Meaning |
|------------|---------|
| O(1) | Constant Time |
| O(log n) | Logarithmic |
| O(n) | Linear Time |
| O(2ⁿ) | Exponential Time |


# Recursion Algorithms Included

This repository contains the following recursive algorithms.

# 1. Factorial

### Formula

```text
n! = n × (n-1)!
```

Example

```text
5!

↓

5 × 4 × 3 × 2 × 1

↓

120
```

Base Case

```cpp
if(n == 0 || n == 1)
    return 1;
```

Time Complexity

```text
O(n)
```

Space Complexity

```text
O(n)
```


# 2. Fibonacci Series

### Formula

```text
F(n) = F(n-1) + F(n-2)
```

Example

```text
0 1 1 2 3 5 8 13 21 34
```

Time Complexity

```text
O(2ⁿ)
```

Space Complexity

```text
O(n)
```

> **Note:** The basic recursive Fibonacci algorithm is easy to understand but inefficient for large values of `n`. More efficient approaches use Dynamic Programming or Memoization.


# 3. Sum of Natural Numbers

### Formula

```text
Sum(n)

=

n + Sum(n-1)
```

Example

```text
1 + 2 + 3 + 4 + 5

=

15
```

Time Complexity

```text
O(n)
```

Space Complexity

```text
O(n)
```

# 4. Power Function

### Formula

```text
power(x,n)

=

x × power(x,n-1)
```

Example

```text
2⁵

=

32
```

Time Complexity

```text
O(n)
```

Space Complexity

```text
O(n)
```

# 5. GCD (Euclidean Algorithm)

### Formula

```text
GCD(a,b)

=

GCD(b,a%b)
```

Example

```text
GCD(48,18)

↓

GCD(18,12)

↓

GCD(12,6)

↓

GCD(6,0)

↓

Answer = 6
```

Time Complexity

```text
O(log n)
```

Space Complexity

```text
O(log n)
```

---

# 6. LCM Using GCD

### Formula

```text
LCM(a,b)

=

(a × b) / GCD(a,b)
```

Example

```text
LCM(12,18)

↓

36
```

Time Complexity

```text
O(log n)
```

Space Complexity

```text
O(log n)
```

# 7. Decimal to Binary

### Formula

```text
Binary(n)

=

Binary(n/2)

+

(n%2)
```

Example

```text
Decimal

13

↓

1101
```

Time Complexity

```text
O(log n)
```

Space Complexity

```text
O(log n)
```

# 8. Reverse String

### Idea

Print characters from the last index to the first using recursion.

Example

```text
Hello

↓

olleH
```

Time Complexity

```text
O(n)
```

Space Complexity

```text
O(n)
```


# 9. Reverse Array

### Idea

Swap the first and last elements recursively until the middle is reached.

Example

```text
10 20 30 40 50

↓

50 40 30 20 10
```

Time Complexity

```text
O(n)
```

Space Complexity

```text
O(n)
```

# 10. Tower of Hanoi

### Rules

- Only one disk can be moved at a time.
- Only the top disk can be moved.
- A larger disk cannot be placed on a smaller disk.

Example

```text
Source (A)

3
2
1

↓

Destination (C)
```

Time Complexity

```text
O(2ⁿ)
```

Space Complexity

```text
O(n)
```


# Comparison Table

| Algorithm | Best | Average | Worst | Space |
|-----------|------|----------|--------|--------|
| Factorial | O(n) | O(n) | O(n) | O(n) |
| Fibonacci | O(2ⁿ) | O(2ⁿ) | O(2ⁿ) | O(n) |
| Sum of Natural Numbers | O(n) | O(n) | O(n) | O(n) |
| Power Function | O(n) | O(n) | O(n) | O(n) |
| GCD | O(log n) | O(log n) | O(log n) | O(log n) |
| LCM | O(log n) | O(log n) | O(log n) | O(log n) |
| Decimal to Binary | O(log n) | O(log n) | O(log n) | O(log n) |
| Reverse String | O(n) | O(n) | O(n) | O(n) |
| Reverse Array | O(n) | O(n) | O(n) | O(n) |
| Tower of Hanoi | O(2ⁿ) | O(2ⁿ) | O(2ⁿ) | O(n) |

---

# Folder Structure

```text
Recursion-Algorithms/
│
├── Factorial.cpp
├── Fibonacci.cpp
├── SumOfNaturalNumbers.cpp
├── PowerFunction.cpp
├── GCD.cpp
├── LCM.cpp
├── DecimalToBinary.cpp
├── ReverseString.cpp
├── ReverseArray.cpp
├── TowerOfHanoi.cpp
└── README.md
```

# Learning Roadmap

## Beginner

- Factorial
- Fibonacci Series
- Sum of Natural Numbers
- Power Function

## Intermediate

- GCD
- LCM
- Decimal to Binary

## Advanced Beginner

- Reverse String
- Reverse Array
- Tower of Hanoi


# Repository Features

This repository includes:

- ✅ 10 Recursion Algorithms
- ✅ Beginner-friendly C++ implementations
- ✅ Well-commented source code
- ✅ Time and Space Complexity analysis
- ✅ Step-by-step explanations
- ✅ Real examples for understanding recursion
- ✅ Clean project structure for GitHub
- ✅ Suitable for university assignments and DSA interview preparation


# Prerequisites

Before learning recursion, you should know:

- Variables
- Functions
- Loops
- Arrays
- Basic C++ syntax


# Next Step

After completing **Recursion Algorithms**, continue with:

1. Array Algorithms
2. String Algorithms
3. Stack Algorithms
4. Queue Algorithms
5. Linked List Algorithms
6. Tree Algorithms
7. Graph Algorithms
8. Greedy Algorithms
9. Dynamic Programming
10. Backtracking


# Author

**Muhammad Ismail**

-  BS Computer Science Student
-  Learning Data Structures and Algorithms (DSA) in C++
-  Building a complete GitHub repository of beginner-to-advanced C++ algorithms

If you found this repository helpful, please consider giving it a ⭐ on GitHub!