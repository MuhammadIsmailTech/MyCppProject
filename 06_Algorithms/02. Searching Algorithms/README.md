# Searching Algorithms in C++

![Language](https://img.shields.io/badge/Language-C%2B%2B-blue)
![Algorithms](https://img.shields.io/badge/Category-Searching-green)
![Level](https://img.shields.io/badge/Level-Beginner%20to%20Advanced-orange)

# Introduction

Searching is one of the most fundamental operations in Computer Science. It is the process of finding a specific element within a collection of data, such as an array, list, or database.

For example, suppose you have the following array:

```text
10 20 30 40 50 60 70 80 90
```

If you want to find **50**, a searching algorithm will determine whether the element exists and, if it does, return its position (index).

Searching algorithms are widely used in:

- Databases
- Search engines (Google, Bing)
- Contact lists
- Online shopping websites
- Banking systems
- Hospital management systems
- Student management systems

# Why Do We Need Searching?

Searching helps us quickly find information without checking every element manually.

Examples:

- Finding a student's record
- Searching for a product on Amazon
- Finding a contact in your phone
- Searching files on your computer
- Looking up a customer's account
- Finding a word in a dictionary

Without efficient searching algorithms, software becomes slower as the amount of data grows.

# Types of Searching Algorithms

Searching algorithms are mainly divided into two categories.

## 1. Sequential (Linear) Searching

Sequential searching checks each element one by one until the required element is found.

Examples:

- Linear Search
- Recursive Linear Search

Advantages

- Works on both sorted and unsorted arrays.
- Easy to understand and implement.

Disadvantages

- Slow for large datasets.

## 2. Interval (Divide and Conquer) Searching

Interval searching repeatedly divides the search space into smaller parts.

Examples

- Binary Search
- Recursive Binary Search
- Jump Search
- Interpolation Search
- Exponential Search
- Fibonacci Search
- Ternary Search

Advantages

- Much faster than Linear Search.
- Suitable for large datasets.

Disadvantages

- Most interval searching algorithms require the array to be sorted first.

# Linear Search vs Binary Search

## Linear Search

Checks every element one by one.

Example

```text
Array

10 20 30 40 50

Search = 40

Check 10

↓

Check 20

↓

Check 30

↓

Check 40 ✅
```

Time Complexity

```text
O(n)
```

## Binary Search

Divides the array into two halves repeatedly.

Example

```text
Array

10 20 30 40 50 60 70

Search = 60

Middle = 40

↓

Go Right

↓

Middle = 60 ✅
```

Time Complexity

```text
O(log n)
```


# Time Complexity

| Complexity | Meaning |
|------------|---------|
| O(1) | Constant Time |
| O(log n) | Logarithmic |
| O(√n) | Square Root |
| O(log log n) | Double Logarithmic |
| O(n) | Linear Time |

# Searching Algorithms Included

This repository contains the following searching algorithms.


# 1. Linear Search

### Idea

Check every element one by one until the required element is found.

Example

```text
Array

12 45 23 67 34

Search = 67

12 ❌

45 ❌

23 ❌

67 ✅
```

Works on

- Sorted Arrays
- Unsorted Arrays

Best Case

```text
O(1)
```

Average

```text
O(n)
```

Worst

```text
O(n)
```

Space

```text
O(1)
```


# 2. Recursive Linear Search

### Idea

Same as Linear Search but uses recursion instead of loops.

Each recursive call checks one element.

Works on

- Sorted Arrays
- Unsorted Arrays

Best

```text
O(1)
```

Worst

```text
O(n)
```

Space

```text
O(n)
```


# 3. Binary Search

### Idea

Divide the sorted array into two halves.

Compare the middle element.

If the key is smaller, search the left half.

If larger, search the right half.

Example

```text
10 20 30 40 50 60 70

↓

40

↓

Right Half

↓

60 ✅
```

Works on

- Sorted Arrays Only

Best

```text
O(1)
```

Average

```text
O(log n)
```

Worst

```text
O(log n)
```

Space

```text
O(1)
```

# 4. Recursive Binary Search

### Idea

Uses recursion to repeatedly divide the sorted array.

Works on

- Sorted Arrays Only

Best

```text
O(1)
```

Average

```text
O(log n)
```

Worst

```text
O(log n)
```

Space

```text
O(log n)
```

# 5. Jump Search

### Idea

Instead of checking every element, Jump Search skips a fixed number of elements (√n).

Once the correct block is found, it performs a Linear Search within that block.

Example

```text
10 20 30 40 50 60 70 80

↓

Jump

↓

10

↓

30

↓

50

↓

Linear Search

↓

60 ✅
```

Works on

- Sorted Arrays Only

Best

```text
O(1)
```

Average

```text
O(√n)
```

Worst

```text
O(√n)
```

Space

```text
O(1)
```

# 6. Interpolation Search

### Idea

Instead of checking the middle element, it estimates where the required value should be.

Works best when values are evenly distributed.

Example

```text
10 20 30 40 50 60 70

↓

Estimated Position

↓

60 ✅
```

Works on

- Sorted Arrays
- Uniformly Distributed Data

Best

```text
O(1)
```

Average

```text
O(log log n)
```

Worst

```text
O(n)
```

Space

```text
O(1)
```

# 7. Exponential Search

### Idea

First finds a suitable range by doubling the search index.

Then applies Binary Search within that range.

Example

```text
1

↓

2

↓

4

↓

8

↓

Binary Search
```

Works on

- Sorted Arrays

Best

```text
O(1)
```

Average

```text
O(log n)
```

Worst

```text
O(log n)
```

Space

```text
O(1)
```


# 8. Fibonacci Search

### Idea

Uses Fibonacci numbers to divide the array instead of calculating the middle.

Works similarly to Binary Search but relies on Fibonacci sequence.

Works on

- Sorted Arrays

Best

```text
O(1)
```

Average

```text
O(log n)
```

Worst

```text
O(log n)
```

Space

```text
O(1)
```

# 9. Ternary Search

### Idea

Instead of dividing the array into two parts, Ternary Search divides it into three parts.

Example

```text
Array

10 20 30 40 50 60 70 80 90

↓

Divide into Three Parts

↓

Check Middle 1

↓

Check Middle 2

↓

Repeat
```

Works on

- Sorted Arrays

Best

```text
O(1)
```

Average

```text
O(log₃ n)
```

Worst

```text
O(log₃ n)
```

Space

```text
O(log₃ n)
```

# Comparison Table

| Algorithm | Sorted Array Required | Best | Average | Worst | Space |
|-----------|----------------------|------|----------|--------|--------|
| Linear Search | ❌ No | O(1) | O(n) | O(n) | O(1) |
| Recursive Linear Search | ❌ No | O(1) | O(n) | O(n) | O(n) |
| Binary Search | ✅ Yes | O(1) | O(log n) | O(log n) | O(1) |
| Recursive Binary Search | ✅ Yes | O(1) | O(log n) | O(log n) | O(log n) |
| Jump Search | ✅ Yes | O(1) | O(√n) | O(√n) | O(1) |
| Interpolation Search | ✅ Yes (Uniform Data) | O(1) | O(log log n) | O(n) | O(1) |
| Exponential Search | ✅ Yes | O(1) | O(log n) | O(log n) | O(1) |
| Fibonacci Search | ✅ Yes | O(1) | O(log n) | O(log n) | O(1) |
| Ternary Search | ✅ Yes | O(1) | O(log₃ n) | O(log₃ n) | O(log₃ n) |


# Which Algorithm Should You Use?

| Situation | Recommended Algorithm |
|-----------|-----------------------|
| Small or Unsorted Array | Linear Search |
| Large Sorted Array | Binary Search |
| Very Large Sorted Array | Exponential Search |
| Evenly Distributed Data | Interpolation Search |
| Read-Only Memory Systems | Fibonacci Search |
| Learning Divide and Conquer | Ternary Search |


# Folder Structure

```text
Searching-Algorithms/
│
├── LinearSearch.cpp
├── RecursiveLinearSearch.cpp
├── BinarySearch.cpp
├── RecursiveBinarySearch.cpp
├── JumpSearch.cpp
├── InterpolationSearch.cpp
├── ExponentialSearch.cpp
├── FibonacciSearch.cpp
├── TernarySearch.cpp
└── README.md
```

# Learning Roadmap

### Beginner

- Linear Search
- Recursive Linear Search

### Intermediate

- Binary Search
- Recursive Binary Search
- Jump Search

### Advanced

- Interpolation Search
- Exponential Search
- Fibonacci Search
- Ternary Search

# Repository Contents

This repository includes:

- ✅ 9 Searching Algorithms
- ✅ Beginner-friendly C++ code
- ✅ Well-commented implementations
- ✅ Time and Space Complexity
- ✅ Easy-to-understand examples
- ✅ Suitable for university assignments
- ✅ Ready for GitHub portfolio


# Author

**Muhammad Ismail**

-  BS Computer Science Student
-  Learning Data Structures and Algorithms (DSA) in C++
-  Building a complete GitHub repository of algorithms from beginner to advanced

If you found this repository helpful, consider giving it a ⭐ on GitHub!