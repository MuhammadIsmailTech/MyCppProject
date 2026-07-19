# Sorting Algorithms in C++

![Language](https://img.shields.io/badge/Language-C%2B%2B-blue)
![Algorithms](https://img.shields.io/badge/Category-Sorting-green)
![Level](https://img.shields.io/badge/Level-Beginner%20to%20Advanced-orange)

# Introduction

Sorting is one of the most important topics in Computer Science and Data Structures. It is the process of arranging data in a specific order, usually:

- Ascending Order (Smallest → Largest)
- Descending Order (Largest → Smallest)

Example:

Before Sorting

```
64 25 12 22 11
```

After Sorting (Ascending)

```
11 12 22 25 64
```

After Sorting (Descending)

```
64 25 22 12 11
```

Sorting is widely used in searching, databases, operating systems, machine learning, web applications, and many real-world software systems.


# Why Do We Need Sorting?

Sorting makes data easier to process.

For example:

- Finding the highest marks in a class
- Searching a student's record
- Displaying products by price
- Ranking players in a game
- Organizing files on a computer
- Displaying recent messages in apps

Without sorting, many operations become slower.


# Types of Sorting Algorithms

Sorting algorithms can be classified into different categories.

## 1. Comparison-Based Sorting

These algorithms compare two elements to decide their order.

Examples:

- Bubble Sort
- Selection Sort
- Insertion Sort
- Merge Sort
- Quick Sort
- Heap Sort
- Shell Sort
- Comb Sort
- Cocktail Shaker Sort
- Cycle Sort


## 2. Non-Comparison Sorting

These algorithms do not compare elements directly.

Examples:

- Counting Sort
- Radix Sort
- Bucket Sort
- Pigeonhole Sort

These algorithms are usually faster when the input satisfies certain conditions.


# Stable vs Unstable Sorting

## Stable Sorting

A stable algorithm keeps duplicate values in the same order as the original array.

Example

Original

```
(John,80)
(Ali,70)
(Ahmed,80)
```

After Stable Sort

```
(Ali,70)
(John,80)
(Ahmed,80)
```

John remains before Ahmed.

Examples

- Bubble Sort
- Insertion Sort
- Merge Sort
- Counting Sort
- Radix Sort
- Bucket Sort


## Unstable Sorting

Equal values may change their order.

Examples

- Selection Sort
- Quick Sort
- Heap Sort
- Shell Sort
- Cycle Sort

# In-place vs Out-of-place Sorting

## In-place

Uses very little extra memory.

Examples

- Bubble Sort
- Selection Sort
- Insertion Sort
- Quick Sort
- Heap Sort
- Shell Sort
- Comb Sort

 

## Out-of-place

Needs additional memory.

Examples

- Merge Sort
- Counting Sort
- Radix Sort
- Bucket Sort
- Pigeonhole Sort

 

# Time Complexity

| Complexity | Meaning |
| ---------|---------|
| O(1) | Constant Time |
| O(log n) | Logarithmic |
| O(n) | Linear |
| O(n log n) | Efficient Sorting |
| O(n²) | Slow for Large Data |


# Sorting Algorithms Included

This repository contains the following implementations.

 

# 1. Bubble Sort

### Idea

Compare adjacent elements and swap them if they are in the wrong order.

Example

```
5 4 3 2 1

↓

4 3 2 1 5

↓

3 2 1 4 5

↓

2 1 3 4 5

↓

1 2 3 4 5
```

Best Case

```
O(n)
```

Average

```
O(n²)
```

Worst

```
O(n²)
```

Space

```
O(1)
```

Stable

✅ Yes

# 2. Recursive Bubble Sort

Same as Bubble Sort, but uses recursion instead of loops.

Useful for understanding recursion.

 

# 3. Selection Sort

### Idea

Find the smallest element and place it at the beginning.

Example

```
64 25 12 22 11

↓

11 25 12 22 64

↓

11 12 25 22 64

↓

11 12 22 25 64
```

Best

```
O(n²)
```

Average

```
O(n²)
```

Worst

```
O(n²)
```

Space

```
O(1)
```

Stable

❌ No

 

# 4. Insertion Sort

### Idea

Insert every element into its correct position.

Example

```
64

64 25

25 64

25 64 12

12 25 64

...
```

Best

```
O(n)
```

Average

```
O(n²)
```

Worst

```
O(n²)
```

Space

```
O(1)
```

Stable

✅ Yes

 

# 5. Merge Sort

### Technique

Divide and Conquer

Steps

1. Divide array
2. Divide again
3. Sort small parts
4. Merge together

Example

```
38 27 43 3

↓

38 27

43 3

↓

38

27

43

3

↓

27 38

3 43

↓

3 27 38 43
```

Best

```
O(n log n)
```

Average

```
O(n log n)
```

Worst

```
O(n log n)
```

Space

```
O(n)
```

Stable

✅ Yes


# 6. Quick Sort

### Technique

Divide and Conquer

Choose one element as Pivot.

Move smaller elements to the left.

Move larger elements to the right.

Repeat recursively.

Best

```
O(n log n)
```

Average

```
O(n log n)
```

Worst

```
O(n²)
```

Space

```
O(log n)
```

Stable

❌ No


# 7. Heap Sort

### Technique

Uses Binary Heap.

Steps

- Build Max Heap
- Move maximum element to the end
- Heapify remaining elements

Best

```
O(n log n)
```

Average

```
O(n log n)
```

Worst

```
O(n log n)
```

Space

```
O(1)
```

Stable

❌ No


# 8. Counting Sort

### Technique

Counts frequency of each number.

Works only for integers within a limited range.

Best

```
O(n+k)
```

Average

```
O(n+k)
```

Worst

```
O(n+k)
```

Space

```
O(n+k)
```

Stable

✅ Yes

# 9. Radix Sort

### Technique

Sort numbers digit by digit.

Example

```
170
45
75
90
802
24

↓

Units

↓

Tens

↓

Hundreds
```

Best

```
O(nk)
```

Stable

✅ Yes

 

# 10. Bucket Sort

### Technique

Distribute elements into buckets.

Sort each bucket individually.

Merge buckets.

Works well for floating-point numbers.

Average

```
O(n+k)
```

Worst

```
O(n²)
```

Stable

✅ Usually


# 11. Shell Sort

### Technique

Improved Insertion Sort.

Instead of comparing adjacent elements, compare elements with a gap.

Gap becomes smaller until it becomes 1.

Average

```
O(n^1.5)
```

Space

```
O(1)
```

Stable

❌ No


# 12. Comb Sort

### Technique

Improved Bubble Sort.

Uses a gap greater than one.

Gap keeps decreasing until it becomes one.

Average

```
O(n²)
```

Space

```
O(1)
```

 

# 13. Cocktail Shaker Sort

### Technique

Bubble Sort in both directions.

Left → Right

Right → Left

Repeats until sorted.

Best

```
O(n)
```

Worst

```
O(n²)
```

Stable

✅ Yes


# 14. Cycle Sort

### Technique

Places every element directly into its correct position.

Uses minimum number of writes.

Useful where writing to memory is expensive.

Worst

```
O(n²)
```

Space

```
O(1)
```

 

# 15. Pigeonhole Sort

### Technique

Similar to Counting Sort.

Creates holes (containers).

Each value is placed into its corresponding hole.

Works well when the range of values is small.

Time

```
O(n + Range)
```

Space

```
O(Range)
```

Stable

✅ Yes

 

# Comparison Table

| Algorithm | Best | Average | Worst | Space | Stable |
| --------|------|----------|--------|--------|---------|
| Bubble Sort | O(n) | O(n²) | O(n²) | O(1) | Yes |
| Recursive Bubble | O(n) | O(n²) | O(n²) | O(n) | Yes |
| Selection Sort | O(n²) | O(n²) | O(n²) | O(1) | No |
| Insertion Sort | O(n) | O(n²) | O(n²) | O(1) | Yes |
| Merge Sort | O(n log n) | O(n log n) | O(n log n) | O(n) | Yes |
| Quick Sort | O(n log n) | O(n log n) | O(n²) | O(log n) | No |
| Heap Sort | O(n log n) | O(n log n) | O(n log n) | O(1) | No |
| Counting Sort | O(n+k) | O(n+k) | O(n+k) | O(n+k) | Yes |
| Radix Sort | O(nk) | O(nk) | O(nk) | O(n+k) | Yes |
| Bucket Sort | O(n+k) | O(n+k) | O(n²) | O(n+k) | Usually |
| Shell Sort | Depends on Gap | O(n^1.5) | O(n²) | O(1) | No |
| Comb Sort | O(n log n) | O(n²) | O(n²) | O(1) | No |
| Cocktail Shaker Sort | O(n) | O(n²) | O(n²) | O(1) | Yes |
| Cycle Sort | O(n²) | O(n²) | O(n²) | O(1) | No |
| Pigeonhole Sort | O(n+Range) | O(n+Range) | O(n+Range) | O(Range) | Yes |



# Folder Structure

```
Sorting-Algorithms/
│
├── BubbleSort.cpp
├── RecursiveBubbleSort.cpp
├── SelectionSort.cpp
├── InsertionSort.cpp
├── MergeSort.cpp
├── QuickSort.cpp
├── HeapSort.cpp
├── CountingSort.cpp
├── RadixSort.cpp
├── BucketSort.cpp
├── ShellSort.cpp
├── CombSort.cpp
├── CocktailShakerSort.cpp
├── CycleSort.cpp
├── PigeonholeSort.cpp
└── README.md
```


# Learning Roadmap

Beginner

- Bubble Sort
- Recursive Bubble Sort
- Selection Sort
- Insertion Sort

Intermediate

- Merge Sort
- Quick Sort
- Heap Sort
- Shell Sort

Advanced

- Counting Sort
- Radix Sort
- Bucket Sort
- Comb Sort
- Cocktail Shaker Sort
- Cycle Sort
- Pigeonhole Sort

# Author

**Muhammad Ismail**

-  BS Computer Science Student
-  Learning Data Structures and Algorithms in C++
-  Building a GitHub portfolio with clean, well-documented implementations

If you find this repository helpful, consider giving it a ⭐ on GitHub.