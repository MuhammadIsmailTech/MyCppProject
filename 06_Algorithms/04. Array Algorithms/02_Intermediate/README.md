# Array Algorithms in C++ – Part 2 (Intermediate)

![Language](https://img.shields.io/badge/Language-C%2B%2B-blue)
![Category](https://img.shields.io/badge/Category-Array%20Algorithms-green)
![Level](https://img.shields.io/badge/Level-Intermediate-orange)
![Programs](https://img.shields.io/badge/Programs-10-purple)

## Introduction

This folder contains **10 intermediate-level Array Algorithms implemented in C++**.

These algorithms build on the basic array concepts learned in **Part 1** and introduce more practical operations such as:

- Finding the second largest and second smallest elements
- Removing duplicate elements
- Inserting and deleting elements
- Merging arrays
- Finding element frequencies
- Counting positive, negative, and zero values
- Finding a missing number

These problems are useful for **Data Structures and Algorithms (DSA)** practice, university coursework, coding interviews, and problem-solving skills.

---

# What is an Array?

An array is a collection of elements of the same data type stored in consecutive memory locations.

Example:

```text
Index:   0   1   2   3   4

Array:  10  20  30  40  50
```

Each element can be accessed using its index.

```cpp
arr[0] = 10;
arr[2] = 30;
arr[4] = 50;
```

---

# Prerequisites

Before starting Part 2, you should understand:

- C++ variables
- `if` and `else`
- `for` and `while` loops
- Functions
- Arrays
- Array indexing
- Basic searching
- Time and space complexity

It is recommended to complete **Array Algorithms – Part 1** first.

---

# Algorithms Included

Part 2 contains the following 10 algorithms:

1. Second Largest Element
2. Second Smallest Element
3. Remove Duplicate Elements
4. Remove an Element
5. Insert an Element
6. Delete an Element
7. Merge Two Arrays
8. Find Frequency of Each Element
9. Count Positive, Negative and Zero Elements
10. Find Missing Number

---

# 1. Second Largest Element

### File

```text
SecondLargest.cpp
```

### Description

This algorithm finds the **second largest distinct element** in an array.

Example:

```text
Array:

10 25 45 78 90 34

Largest = 90
Second Largest = 78
```

### Approach

Maintain two variables:

```text
largest
secondLargest
```

Traverse the array and update them whenever a larger value is found.

### Example

```text
Input:

25 10 45 78 12 90 34

Output:

Second Largest = 78
```

### Complexity

```text
Time Complexity:  O(n)
Space Complexity: O(1)
```

---

# 2. Second Smallest Element

### File

```text
SecondSmallest.cpp
```

### Description

This algorithm finds the **second smallest distinct element** in an array.

Example:

```text
Array:

25 10 45 78 12 90 34

Smallest = 10
Second Smallest = 12
```

### Approach

Maintain two variables:

```text
smallest
secondSmallest
```

Traverse the array and update them when smaller values are found.

### Example

```text
Input:

25 10 45 78 12 90 34

Output:

Second Smallest = 12
```

### Complexity

```text
Time Complexity:  O(n)
Space Complexity: O(1)
```

---

# 3. Remove Duplicate Elements

### File

```text
RemoveDuplicates.cpp
```

### Description

This algorithm removes repeated elements from a **sorted array**.

Example:

```text
Before:

10 10 20 20 30 40 40 50

After:

10 20 30 40 50
```

### Approach

Use two indexes:

```text
i → traverses the array
j → keeps track of the last unique element
```

When a different element is found, move it to the next unique position.

### Important Note

The implementation in this repository assumes the array is **sorted**.

For an unsorted array, different techniques such as hashing or nested loops can be used.

### Complexity

```text
Time Complexity:  O(n)
Space Complexity: O(1)
```

---

# 4. Remove an Element

### File

```text
RemoveElement.cpp
```

### Description

This algorithm searches for a particular value and removes its first occurrence.

Example:

```text
Original:

10 20 30 40 50

Remove:

30

Result:

10 20 40 50
```

### Approach

1. Search for the element.
2. Find its position.
3. Shift all elements after it one position to the left.
4. Decrease the logical array size.

### Complexity

```text
Time Complexity:  O(n)
Space Complexity: O(1)
```

---

# 5. Insert an Element

### File

```text
InsertElement.cpp
```

### Description

This algorithm inserts a new element at a specified position.

Example:

```text
Original:

10 20 30 40 50

Insert:

25 at index 2

Result:

10 20 25 30 40 50
```

### Approach

Elements are shifted one position to the right to create an empty position.

```text
Before:

10 20 30 40 50

        ↓

Insert 25 at index 2

        ↓

10 20 25 30 40 50
```

### Complexity

```text
Time Complexity:  O(n)
Space Complexity: O(1)
```

---

# 6. Delete an Element

### File

```text
DeleteElement.cpp
```

### Description

This algorithm deletes an element using its **index**.

Example:

```text
Original:

10 20 30 40 50

Delete index:

2

Result:

10 20 40 50
```

### Approach

After finding the position, shift all elements after that position one step to the left.

### Complexity

```text
Time Complexity:  O(n)
Space Complexity: O(1)
```

---

# 7. Merge Two Arrays

### File

```text
MergeArrays.cpp
```

### Description

This algorithm combines two arrays into a single array.

Example:

```text
Array 1:

10 20 30

Array 2:

40 50 60

Merged Array:

10 20 30 40 50 60
```

### Approach

1. Copy the first array into the new array.
2. Copy the second array after the first array.
3. Print the merged array.

### Complexity

Let:

```text
n = size of first array
m = size of second array
```

Then:

```text
Time Complexity:  O(n + m)
Space Complexity: O(n + m)
```

---

# 8. Find Frequency of Each Element

### File

```text
Frequency.cpp
```

### Description

This algorithm counts how many times each element occurs in an array.

Example:

```text
Array:

10 20 10 30 20 10

Frequency:

10 → 3
20 → 2
30 → 1
```

### Approach

For every element, compare it with the remaining elements and count its occurrences.

A `visited` array is used so that an element's frequency is not printed multiple times.

### Complexity

```text
Time Complexity:  O(n²)
Space Complexity: O(n)
```

### Note

For large arrays, a hash table such as `unordered_map` can reduce the average time complexity to approximately:

```text
O(n)
```

---

# 9. Count Positive, Negative and Zero Elements

### File

```text
CountPositiveNegativeZero.cpp
```

### Description

This algorithm counts three types of values:

- Positive numbers
- Negative numbers
- Zero

Example:

```text
Array:

10 -5 0 25 -8 0 15 -2

Positive = 3
Negative = 3
Zero = 2
```

### Approach

For every element:

```text
if value > 0
    Positive

else if value < 0
    Negative

else
    Zero
```

### Complexity

```text
Time Complexity:  O(n)
Space Complexity: O(1)
```

---

# 10. Find Missing Number

### File

```text
MissingNumber.cpp
```

### Description

This algorithm finds one missing number from a sequence containing numbers from `1` to `n`.

Example:

```text
Array:

1 2 3 5 6

Missing:

4
```

### Formula

The sum of numbers from `1` to `n` is:

```text
Sum = n × (n + 1) / 2
```

Then:

```text
Missing Number = Expected Sum - Actual Sum
```

### Example

For:

```text
1 2 3 5 6
```

The expected sum is:

```text
6 × 7 / 2 = 21
```

Actual sum:

```text
1 + 2 + 3 + 5 + 6 = 17
```

Therefore:

```text
Missing Number = 21 - 17

                = 4
```

### Complexity

```text
Time Complexity:  O(n)
Space Complexity: O(1)
```

### Important Note

This implementation assumes:

- Numbers start from `1`
- Numbers end at `n`
- Exactly one number is missing
- There are no duplicate values

---

# Complexity Comparison

| No. | Algorithm | Best | Average | Worst | Space |
|----:|-----------|------|---------|-------|-------|
| 1 | Second Largest | O(n) | O(n) | O(n) | O(1) |
| 2 | Second Smallest | O(n) | O(n) | O(n) | O(1) |
| 3 | Remove Duplicates | O(n) | O(n) | O(n) | O(1) |
| 4 | Remove Element | O(n) | O(n) | O(n) | O(1) |
| 5 | Insert Element | O(n) | O(n) | O(n) | O(1) |
| 6 | Delete Element | O(n) | O(n) | O(n) | O(1) |
| 7 | Merge Arrays | O(n+m) | O(n+m) | O(n+m) | O(n+m) |
| 8 | Frequency | O(n²) | O(n²) | O(n²) | O(n) |
| 9 | Positive/Negative/Zero | O(n) | O(n) | O(n) | O(1) |
| 10 | Missing Number | O(n) | O(n) | O(n) | O(1) |

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
└── Part-02-Intermediate/
    ├── SecondLargest.cpp
    ├── SecondSmallest.cpp
    ├── RemoveDuplicates.cpp
    ├── RemoveElement.cpp
    ├── InsertElement.cpp
    ├── DeleteElement.cpp
    ├── MergeArrays.cpp
    ├── Frequency.cpp
    ├── CountPositiveNegativeZero.cpp
    ├── MissingNumber.cpp
    └── README.md
```

---

# Learning Outcomes

After completing Part 2, you should be able to:

- Find the second largest element
- Find the second smallest element
- Remove duplicates from a sorted array
- Insert elements into an array
- Delete elements from an array
- Remove a specific value
- Merge two arrays
- Calculate element frequencies
- Count positive, negative, and zero values
- Find a missing number
- Analyze time and space complexity
- Understand array manipulation techniques

---

# Part 1 vs Part 2

| Feature | Part 1 | Part 2 |
|---------|--------|--------|
| Level | Beginner | Intermediate |
| Array Traversal | ✅ | ✅ |
| Searching | Basic | Improved |
| Insertion | ❌ | ✅ |
| Deletion | ❌ | ✅ |
| Duplicate Handling | ❌ | ✅ |
| Frequency Counting | ❌ | ✅ |
| Array Merging | ❌ | ✅ |
| Missing Number | ❌ | ✅ |
| Complexity Analysis | ✅ | ✅ |

---

# Important Concepts Learned

Part 2 introduces several important DSA techniques.

### 1. Array Traversal

Visiting every element:

```cpp
for (int i = 0; i < size; i++)
{
    // Process arr[i]
}
```

### 2. Element Shifting

Used during insertion and deletion.

```text
Insertion:

10 20 30 40
      ↓
10 20 __ 30 40
```

### 3. Maintaining Multiple Variables

Used for problems such as:

```text
Largest
Second Largest

Smallest
Second Smallest
```

### 4. Nested Loops

Used for frequency counting and other comparison-based problems.

### 5. Mathematical Approach

The missing-number problem uses:

```text
n × (n + 1) / 2
```

instead of comparing every possible number.

---

# Applications

These array techniques are useful in:

- Student management systems
- Inventory systems
- Banking applications
- E-commerce applications
- Data analysis
- Competitive programming
- Coding interviews
- Database-related programming
- Operating systems
- Machine learning preprocessing

---

# Next: Part 3

After completing Part 2, continue with:

## Array Algorithms – Part 3 (Rotations & Rearrangement)

The next 10 algorithms are:

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

These algorithms introduce more advanced **array manipulation and rearrangement techniques**.

---

# Repository Progress

```text
Sorting Algorithms
        ↓
Searching Algorithms
        ↓
Recursion Algorithms
        ↓
Array Algorithms
        ├── Part 1: Beginner       ✅
        └── Part 2: Intermediate   ✅
                ↓
        Part 3: Rotation &
        Rearrangement              🔜
```

---

# Author

**Muhammad Ismail**

🎓 BS Computer Science Student  
💻 C++ / Data Structures & Algorithms  
📚 Learning Algorithms from Beginner to Advanced

---

## ⭐ Support

If this repository helps you learn DSA, consider giving it a **star ⭐** on GitHub.