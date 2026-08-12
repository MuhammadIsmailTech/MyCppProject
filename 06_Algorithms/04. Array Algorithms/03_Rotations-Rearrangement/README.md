# Array Algorithms in C++ – Part 3 (Rotations & Rearrangement)

![Language](https://img.shields.io/badge/Language-C%2B%2B-blue)
![Category](https://img.shields.io/badge/Category-Array%20Algorithms-green)
![Level](https://img.shields.io/badge/Level-Intermediate-orange)
![Programs](https://img.shields.io/badge/Programs-10-purple)

## Introduction

This folder contains **10 important Array Algorithms implemented in C++**.

Part 3 focuses on **array rotation, rearrangement, and ordering techniques**.

These algorithms are useful for:

* Data Structures and Algorithms (DSA)
* University assignments
* Coding interviews
* Competitive programming
* Problem-solving practice
* Understanding array manipulation

This part builds on the concepts learned in:

* **Part 1 – Beginner**
* **Part 2 – Intermediate**


# Prerequisites

Before starting Part 3, you should understand:

* C++ variables
* `if` / `else`
* Loops
* Functions
* Arrays
* Array indexing
* Swapping elements
* Time and space complexity

It is recommended to complete **Array Algorithms – Part 1 and Part 2** first.


# Algorithms Included

Part 3 contains the following 10 algorithms:

1. Left Rotate Array by One Position
2. Right Rotate Array by One Position
3. Left Rotate Array by K Positions
4. Right Rotate Array by K Positions
5. Move All Zeroes to End
6. Move Negative Numbers to Beginning
7. Rearrange Positive and Negative Numbers
8. Rotate Array Using Reversal Algorithm
9. Cyclic Rotation
10. Check if Array is Sorted


# 1. Left Rotate Array by One Position

### File

```text
LeftRotate.cpp
```

### Description

Left rotation moves the **first element** to the end of the array.

Example:

```text
Original:

10 20 30 40 50

After Left Rotation:

20 30 40 50 10
```

### Approach

1. Store the first element.
2. Shift every remaining element one position to the left.
3. Put the first element at the last position.

### Complexity

```text
Time Complexity:  O(n)
Space Complexity: O(1)
```


# 2. Right Rotate Array by One Position

### File

```text
RightRotate.cpp
```

### Description

Right rotation moves the **last element** to the beginning.

Example:

```text
Original:

10 20 30 40 50

After Right Rotation:

50 10 20 30 40
```

### Approach

1. Store the last element.
2. Shift the elements one position to the right.
3. Put the last element at index `0`.

### Complexity

```text
Time Complexity:  O(n)
Space Complexity: O(1)
```


# 3. Left Rotate Array by K Positions

### File

```text
LeftRotateK.cpp
```

### Description

This algorithm rotates an array to the left by `K` positions.

Example:

```text
Original:

10 20 30 40 50

K = 2

Result:

30 40 50 10 20
```

### Approach

The basic implementation repeatedly performs a one-position left rotation.

```text
K = 1
Rotate once

K = 2
Rotate twice

K = 3
Rotate three times
```

The code also uses:

```cpp
k = k % size;
```

This prevents unnecessary rotations.

For example:

```text
K = 7
Size = 5

7 % 5 = 2
```

Therefore, rotating by 7 positions is the same as rotating by 2 positions.

### Complexity

```text
Time Complexity:  O(n × k)
Space Complexity: O(1)
```

### Important

A more efficient method is introduced later using the **Reversal Algorithm**.


# 4. Right Rotate Array by K Positions

### File

```text
RightRotateK.cpp
```

### Description

This algorithm rotates an array to the right by `K` positions.

Example:

```text
Original:

10 20 30 40 50

K = 2

Result:

40 50 10 20 30
```

### Approach

The basic method performs a one-position right rotation repeatedly.

The value:

```cpp
k = k % size;
```

is used to avoid unnecessary rotations.

### Complexity

```text
Time Complexity:  O(n × k)
Space Complexity: O(1)
```

# 5. Move All Zeroes to End

### File

```text
MoveZeroes.cpp
```

### Description

Moves all zero values to the end while maintaining the relative order of the non-zero elements.

Example:

```text
Original:

0 1 0 3 12

Result:

1 3 12 0 0
```

Another example:

```text
Original:

1 0 2 0 3 0 4

Result:

1 2 3 4 0 0 0
```

### Approach

Maintain a position for the next non-zero element.

First:

```text
Move all non-zero values forward
```

Then:

```text
Fill the remaining positions with zero
```

### Complexity

```text
Time Complexity:  O(n)
Space Complexity: O(1)
```

# 6. Move Negative Numbers to Beginning

### File

```text
MoveNegative.cpp
```

### Description

Moves negative numbers to the beginning of the array.

Example:

```text
Original:

10 -5 7 -3 8 -2 4

Result:

-5 -3 -2 10 7 8 4
```

### Approach

Maintain a position where the next negative number should be placed.

When a negative value is found, swap it with the element at the current position.

### Complexity

```text
Time Complexity:  O(n)
Space Complexity: O(1)
```

### Important Note

This implementation does **not guarantee stable ordering**.

That means the original order of the negative and positive elements may change.


# 7. Rearrange Positive and Negative Numbers

### File

```text
RearrangePositiveNegative.cpp
```

### Description

Attempts to arrange positive and negative numbers alternately.

Example:

```text
Original:

1 2 -3 -4 5 -6

Result:

1 -3 2 -4 5 -6
```

The desired pattern is:

```text
Positive
Negative
Positive
Negative
Positive
Negative
```

### Approach

Use:

```text
Even indexes → Positive numbers
Odd indexes  → Negative numbers
```

When a misplaced value is found, swap it with a value of the opposite type.

### Complexity

```text
Time Complexity:  O(n)
Space Complexity: O(1)
```

### Important Note

If the array contains more positive numbers than negative numbers, or vice versa, perfect alternation may not be possible.


# 8. Rotate Array Using Reversal Algorithm

### File

```text
RotateUsingReversal.cpp
```

### Description

The **Reversal Algorithm** provides an efficient way to rotate an array.

For left rotation by `K` positions:

```text
1. Reverse first K elements
2. Reverse remaining elements
3. Reverse the complete array
```

Example:

```text
Original:

1 2 3 4 5 6 7

K = 2
```

### Step 1

Reverse first `K` elements:

```text
2 1 3 4 5 6 7
```

### Step 2

Reverse remaining elements:

```text
2 1 7 6 5 4 3
```

### Step 3

Reverse the complete array:

```text
3 4 5 6 7 1 2
```

Final result:

```text
3 4 5 6 7 1 2
```

### Complexity

```text
Time Complexity:  O(n)
Space Complexity: O(1)
```

### Why is it better?

The basic K-rotation algorithm has:

```text
O(n × k)
```

The reversal algorithm has:

```text
O(n)
```

Therefore, the reversal method is much more efficient for large arrays and large `K`.


# 9. Cyclic Rotation

### File

```text
CyclicRotation.cpp
```

### Description

Cyclic rotation moves the last element to the beginning.

Example:

```text
Original:

10 20 30 40 50

Cyclic Rotation:

50 10 20 30 40
```

### Approach

1. Store the last element.
2. Shift every other element one position to the right.
3. Put the stored element at index `0`.

### Complexity

```text
Time Complexity:  O(n)
Space Complexity: O(1)
```

### Important Concept

A cyclic rotation by one position is essentially the same operation as:

```text
Right Rotation by One
```

# 10. Check if Array is Sorted

### File

```text
CheckSorted.cpp
```

### Description

Checks whether an array is sorted in **ascending order**.

Example:

```text
10 20 30 40 50

↓

Sorted
```

But:

```text
10 30 20 40 50

↓

Not Sorted
```

### Approach

Compare every element with the next element:

```cpp
arr[i] <= arr[i + 1]
```

If any element is greater than the next element, the array is not sorted.

### Complexity

```text
Time Complexity:  O(n)
Space Complexity: O(1)
```


# Complexity Comparison

| No. | Algorithm                     | Time Complexity | Space Complexity |
| --: | ----------------------------- | --------------- | ---------------- |
|   1 | Left Rotate by One            | O(n)            | O(1)             |
|   2 | Right Rotate by One           | O(n)            | O(1)             |
|   3 | Left Rotate by K              | O(n × k)        | O(1)             |
|   4 | Right Rotate by K             | O(n × k)        | O(1)             |
|   5 | Move Zeroes                   | O(n)            | O(1)             |
|   6 | Move Negative Numbers         | O(n)            | O(1)             |
|   7 | Rearrange Positive & Negative | O(n)            | O(1)             |
|   8 | Reversal Rotation             | O(n)            | O(1)             |
|   9 | Cyclic Rotation               | O(n)            | O(1)             |
|  10 | Check Sorted                  | O(n)            | O(1)             |


# Basic Rotation vs Reversal Rotation

| Method             | Time     | Space |
| ------------------ | -------- | ----- |
| Rotate One by One  | O(n × k) | O(1)  |
| Reversal Algorithm | O(n)     | O(1)  |

### Example

If:

```text
n = 1,000,000
k = 500,000
```

Repeated rotation performs a very large number of operations.

The reversal algorithm still requires only a linear number of operations.

Therefore:

```text
Reversal Algorithm → Better
```


# Key Concepts Learned

## 1. Rotation

Rotation changes the positions of array elements while keeping all elements.

```text
Left:

1 2 3 4 5
↓
2 3 4 5 1
```

```text
Right:

1 2 3 4 5
↓
5 1 2 3 4
```

## 2. Rearrangement

Rearrangement changes the positions of elements according to a specific condition.

Examples:

```text
Move zeroes
Move negative numbers
Alternate positive and negative numbers
```

## 3. Swapping

Swapping exchanges two elements.

```cpp
swap(arr[i], arr[j]);
```

Example:

```text
Before:

10 20

After swap:

20 10
```

## 4. Two-Pointer Technique

Several array problems can be solved efficiently using two positions/pointers.

Example:

```text
left  → beginning
right → end
```

This technique becomes especially important in advanced array algorithms.


## 5. Reversal Technique

Reversing sections of an array can solve rotation problems efficiently.

The general idea is:

```text
Reverse
+
Reverse
+
Reverse
=
Rotation
```

---

# Folder Structure

```text
Array-Algorithms/
│
├── Part-01-Beginner/
│   ├── FindMaximum.cpp
│   ├── FindMinimum.cpp
│   ├── SumOfArray.cpp
│   ├── AverageOfArray.cpp
│   ├── CountEvenOdd.cpp
│   ├── ReverseArray.cpp
│   ├── CopyArray.cpp
│   ├── ReversePrint.cpp
│   ├── LargestSmallest.cpp
│   ├── LinearSearch.cpp
│   └── README.md
│
├── Part-02-Intermediate/
│   ├── SecondLargest.cpp
│   ├── SecondSmallest.cpp
│   ├── RemoveDuplicates.cpp
│   ├── RemoveElement.cpp
│   ├── InsertElement.cpp
│   ├── DeleteElement.cpp
│   ├── MergeArrays.cpp
│   ├── Frequency.cpp
│   ├── CountPositiveNegativeZero.cpp
│   ├── MissingNumber.cpp
│   └── README.md
│
└── Part-03-Rotations-Rearrangement/
    ├── LeftRotate.cpp
    ├── RightRotate.cpp
    ├── LeftRotateK.cpp
    ├── RightRotateK.cpp
    ├── MoveZeroes.cpp
    ├── MoveNegative.cpp
    ├── RearrangePositiveNegative.cpp
    ├── RotateUsingReversal.cpp
    ├── CyclicRotation.cpp
    ├── CheckSorted.cpp
    └── README.md
```

# Learning Outcomes

After completing Part 3, you should be able to:

* Rotate an array left
* Rotate an array right
* Rotate an array by `K` positions
* Move zeroes to the end
* Move negative numbers to the beginning
* Rearrange positive and negative numbers
* Use the Reversal Algorithm
* Perform cyclic rotation
* Check whether an array is sorted
* Understand in-place array manipulation
* Analyze algorithm efficiency

# Part 3 Progress

```text
Array Algorithms – Part 3

1. Left Rotate by One              ✅
2. Right Rotate by One             ✅
3. Left Rotate by K                ✅
4. Right Rotate by K               ✅
5. Move Zeroes to End              ✅
6. Move Negative Numbers           ✅
7. Rearrange Positive/Negative     ✅
8. Reversal Rotation               ✅
9. Cyclic Rotation                 ✅
10. Check Sorted                   ✅

Progress: 10/10
```


# Complete Array Algorithms Progress

```text
Array Algorithms

Part 1 – Beginner
10 Algorithms ✅

Part 2 – Intermediate
10 Algorithms ✅

Part 3 – Rotations & Rearrangement
10 Algorithms ✅

--------------------------------

Total = 30 Algorithms
```


# Next: Part 4 – Advanced Array Algorithms

After completing Part 3, the next level will focus on more advanced array problem-solving techniques.

Possible Part 4 topics include:

1. Kadane's Algorithm – Maximum Subarray Sum
2. Majority Element – Moore's Voting Algorithm
3. Leaders in an Array
4. Equilibrium Index
5. Subarray with Given Sum
6. Two Sum
7. Three Sum
8. Maximum Product Subarray
9. Longest Consecutive Sequence
10. Stock Buy and Sell

These problems will introduce important techniques such as:

* Greedy algorithms
* Prefix sums
* Hashing
* Two-pointer technique
* Sliding window
* Divide-and-conquer thinking

# Author

**Muhammad Ismail**

BS Computer Science Student
C++ / Data Structures & Algorithms
Building a complete C++ Algorithms Repository


## ⭐ Support

If this repository helps you learn C++ and DSA, consider giving it a **star ⭐** on GitHub.
