# Array Algorithms in C++ – Part 4 (Advanced)

![Language](https://img.shields.io/badge/Language-C%2B%2B-blue)
![Category](https://img.shields.io/badge/Category-Array%20Algorithms-green)
![Level](https://img.shields.io/badge/Level-Advanced-red)
![Algorithms](https://img.shields.io/badge/Algorithms-10-purple)

## Introduction

Welcome to **Array Algorithms – Part 4 (Advanced)**.

This section contains **10 advanced array algorithms implemented in C++**.

These problems are designed to improve your problem-solving skills and introduce important DSA techniques such as:

- Greedy Algorithms
- Hashing
- Two-Pointer Technique
- Sliding Window
- Array Traversal
- Dynamic Tracking
- Prefix/Total Sum
- Optimization

These algorithms are commonly useful in:

- Data Structures and Algorithms
- Coding interviews
- Competitive programming
- University assignments
- Problem-solving practice
- Technical interviews

# Prerequisites

Before starting Part 4, you should understand:

- C++ variables
- Conditional statements
- Loops
- Functions
- Arrays
- Searching
- Sorting
- Array traversal
- `swap()`
- Basic time and space complexity
- Basic STL containers

You should also understand the algorithms from:

- Array Algorithms – Part 1
- Array Algorithms – Part 2
- Array Algorithms – Part 3

# Algorithms Included

Part 4 contains the following 10 advanced algorithms:

### Part 4A

1. Kadane's Algorithm – Maximum Subarray Sum
2. Majority Element – Moore's Voting Algorithm
3. Leaders in an Array
4. Equilibrium Index
5. Subarray with Given Sum

### Part 4B

6. Two Sum
7. Three Sum
8. Maximum Product Subarray
9. Longest Consecutive Sequence
10. Stock Buy and Sell

---

# 1. Kadane's Algorithm – Maximum Subarray Sum

### File

```text
KadanesAlgorithm.cpp
Description

Kadane's Algorithm finds the maximum sum of a contiguous subarray.

Example:

Array:

-2 1 -3 4 -1 2 1 -5 4

The maximum-sum subarray is:

4 -1 2 1

Its sum is:

4 + (-1) + 2 + 1 = 6

Therefore:

Maximum Subarray Sum = 6
Main Idea

At every element, we decide whether to:

Start a new subarray

or

Continue the existing subarray

Two variables are maintained:

currentSum
maxSum
Example
Input:

-2 1 -3 4 -1 2 1 -5 4

Output:

Maximum Subarray Sum = 6
Complexity
Time Complexity:  O(n)
Space Complexity: O(1)
Important Concept

Kadane's Algorithm is one of the most important algorithms for solving maximum subarray problems.

2. Majority Element – Moore's Voting Algorithm
File
MajorityElement.cpp
Description

A majority element is an element that occurs more than n/2 times.

Example:

Array:

2 2 1 1 1 2 2

There are 7 elements.

7 / 2 = 3

The number 2 appears 4 times.

Therefore:

Majority Element = 2
Main Idea

Moore's Voting Algorithm maintains:

candidate
count

When the count becomes zero, a new candidate is selected.

Example
Input:

2 2 1 1 1 2 2

Output:

Majority Element = 2
Complexity
Time Complexity:  O(n)
Space Complexity: O(1)
Important Concept

A frequency array or hash map can also solve this problem, but Moore's Voting Algorithm uses constant extra space.

3. Leaders in an Array
File
ArrayLeaders.cpp
Description

An element is called a leader if it is greater than every element to its right.

Example:

Array:

16 17 4 3 5 2

The leaders are:

17 5 2

Why?

17 > 4, 3, 5, 2
5  > 2
2  → No element exists to its right
Main Idea

Start from the right side of the array.

Maintain:

maxRight

If the current element is greater than maxRight, it is a leader.

Example
Input:

16 17 4 3 5 2

Output:

2 5 17

The output is normally discovered from right to left.

Complexity
Time Complexity:  O(n)
Space Complexity: O(1)
4. Equilibrium Index
File
EquilibriumIndex.cpp
Description

An equilibrium index is an index where:

Sum of elements on the left
=
Sum of elements on the right

Example:

Array:

-7 1 5 2 -4 3 0

At index 3:

Left Sum:

-7 + 1 + 5 = -1

Right Sum:

-4 + 3 + 0 = -1

Therefore:

Equilibrium Index = 3
Main Idea

First calculate the total sum.

Then maintain:

leftSum

For each index:

rightSum = totalSum - leftSum - arr[i]

If:

leftSum == rightSum

then the current index is an equilibrium index.

Complexity
Time Complexity:  O(n)
Space Complexity: O(1)
Important Concept

Instead of calculating left and right sums repeatedly, the total sum allows us to solve the problem efficiently.

5. Subarray with Given Sum
File
SubarrayGivenSum.cpp
Description

Find a contiguous subarray whose elements have a given target sum.

Example:

Array:

1 4 20 3 10 5

Target:

33

The subarray:

20 3 10

has the sum:

20 + 3 + 10 = 33

Therefore:

Subarray Found
Main Idea

Use the Sliding Window Technique.

Maintain:

currentSum
start
end

Expand the window by moving end.

If the sum becomes too large, move start forward.

Example
Input:

1 4 20 3 10 5

Target:

33

Output:

Subarray found from index 2 to 4
Complexity
Time Complexity:  O(n)
Space Complexity: O(1)
Important Note

This sliding-window implementation works for arrays containing non-negative numbers.

For arrays containing negative numbers, a prefix-sum and hashing approach is more appropriate.

6. Two Sum
File
TwoSum.cpp
Description

Find two elements whose sum equals a given target.

Example:

Array:

2 7 11 15

Target:

9

Because:

2 + 7 = 9

Therefore:

Pair Found
Main Idea

Use an unordered_map to store elements that have already been visited.

For every element:

needed = target - currentElement

If needed already exists in the hash map, the pair has been found.

Example
Input:

2 7 11 15

Target:

9

Output:

Pair found: 2 + 7 = 9
Indices: 0 1
Complexity
Average Time Complexity: O(n)
Space Complexity: O(n)
Important Concept

This algorithm demonstrates Hashing.

Hashing allows us to search for a value very quickly.

7. Three Sum
File
ThreeSum.cpp
Description

Find three elements whose sum equals a given target.

Example:

Array:

1 2 3 4 5

Target:

9

One valid triplet is:

1 + 3 + 5 = 9
Main Idea

First sort the array.

Then:

i     → first element
left  → second element
right → third element

Move the pointers depending on the current sum.

Example
Input:

1 2 3 4 5

Target:

9

Output:

Triplet found: 1 + 3 + 5 = 9
Complexity
Time Complexity:  O(n²)
Space Complexity: O(1)

The sorting step takes:

O(n log n)

but the two-pointer search takes:

O(n²)

Therefore, the overall complexity is:

O(n²)
Important Concept

This algorithm teaches the Two-Pointer Technique.

8. Maximum Product Subarray
File
MaximumProductSubarray.cpp
Description

Find the contiguous subarray having the maximum product.

Example:

Array:

2 3 -2 4

The maximum product is:

2 × 3 = 6

Therefore:

Maximum Product = 6

Another important example:

-2 3 -4

Here:

(-2) × 3 × (-4) = 24

Therefore:

Maximum Product = 24
Main Idea

Unlike maximum-sum problems, multiplication can change a negative value into a positive value.

Therefore, maintain:

currentMaximum
currentMinimum

When a negative number is encountered, the maximum and minimum values are swapped.

Complexity
Time Complexity:  O(n)
Space Complexity: O(1)
Important Concept

The current minimum can become the future maximum when multiplied by a negative number.

9. Longest Consecutive Sequence
File
LongestConsecutiveSequence.cpp
Description

Find the length of the longest sequence of consecutive integers.

Example:

Array:

100 4 200 1 3 2

The longest consecutive sequence is:

1 2 3 4

Therefore:

Length = 4

The elements do not have to be next to each other in the original array.

Main Idea

Use:

unordered_set

Store all numbers in the set.

For each number, check whether:

number - 1

exists.

If it does not exist, the current number is the beginning of a sequence.

Then check:

number + 1
number + 2
number + 3
...
Example
Input:

100 4 200 1 3 2

Output:

Longest Consecutive Sequence Length = 4
Complexity
Average Time Complexity: O(n)
Space Complexity: O(n)
Important Concept

This algorithm demonstrates how hashing can reduce a sorting-based solution from O(n log n) to approximately O(n) on average.

10. Stock Buy and Sell
File
StockBuySell.cpp
Description

Given stock prices for different days, find the maximum profit from one buy and one sell.

You must buy before selling.

Example:

Prices:

7 1 5 3 6 4

Best choice:

Buy at:  1
Sell at: 6

Profit:

6 - 1 = 5

Therefore:

Maximum Profit = 5
Main Idea

Maintain:

minimumPrice
maximumProfit

For every price:

currentProfit = currentPrice - minimumPrice

Then update the maximum profit.

Example
Input:

7 1 5 3 6 4

Output:

Maximum Profit = 5
Complexity
Time Complexity:  O(n)
Space Complexity: O(1)
Important Concept

This is a classic Greedy Algorithm.

At every position, we remember the cheapest price seen so far.

Complexity Comparison
#	Algorithm	Main Technique	Time Complexity	Space Complexity
1	Kadane's Algorithm	Dynamic Tracking	O(n)	O(1)
2	Majority Element	Moore's Voting	O(n)	O(1)
3	Leaders in Array	Reverse Traversal	O(n)	O(1)
4	Equilibrium Index	Total Sum	O(n)	O(1)
5	Subarray with Given Sum	Sliding Window	O(n)	O(1)
6	Two Sum	Hashing	O(n) average	O(n)
7	Three Sum	Two Pointers	O(n²)	O(1)*
8	Maximum Product Subarray	Dynamic Tracking	O(n)	O(1)
9	Longest Consecutive Sequence	Hashing	O(n) average	O(n)
10	Stock Buy and Sell	Greedy	O(n)	O(1)

* The stated space complexity excludes implementation-dependent auxiliary memory used internally by std::sort.

Important Algorithmic Techniques

Part 4 introduces several important strategies.

1. Kadane's Algorithm

Used for:

Maximum Subarray Sum

Basic idea:

currentSum
     ↓
maximumSum
2. Moore's Voting Algorithm

Used for:

Majority Element

Basic idea:

Candidate + Count

It solves the problem using:

O(1) extra space
3. Reverse Traversal

Used for:

Leaders in an Array

Instead of starting from the beginning:

0 → n-1

we start from:

n-1 → 0
4. Total Sum Technique

Used for:

Equilibrium Index

Instead of repeatedly calculating both sides:

rightSum = totalSum - leftSum - currentElement
5. Sliding Window

Used for:

Subarray with Given Sum

A window is created using:

start
end

The window expands and shrinks depending on the current sum.

6. Hashing

Used for:

Two Sum
Longest Consecutive Sequence

C++ provides:

unordered_map
unordered_set

These provide average constant-time lookup for many common operations.

7. Two-Pointer Technique

Used for:

Three Sum

Two pointers move toward each other:

left  →     ← right

This avoids checking every possible combination.

8. Greedy Algorithm

Used for:

Stock Buy and Sell

The algorithm keeps the best choice available so far.

Part 4A vs Part 4B
Part	Algorithms	Main Focus
Part 4A	5	Optimization & Array Analysis
Part 4B	5	Hashing, Two Pointers & Greedy
Total	10	Advanced Array Problem Solving
Folder Structure
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
├── Part-03-Rotations-Rearrangement/
│   ├── LeftRotate.cpp
│   ├── RightRotate.cpp
│   ├── LeftRotateK.cpp
│   ├── RightRotateK.cpp
│   ├── MoveZeroes.cpp
│   ├── MoveNegative.cpp
│   ├── RearrangePositiveNegative.cpp
│   ├── RotateUsingReversal.cpp
│   ├── CyclicRotation.cpp
│   ├── CheckSorted.cpp
│   └── README.md
│
└── Part-04-Advanced/
    │
    ├── Part-04A/
    │   ├── KadanesAlgorithm.cpp
    │   ├── MajorityElement.cpp
    │   ├── ArrayLeaders.cpp
    │   ├── EquilibriumIndex.cpp
    │   ├── SubarrayGivenSum.cpp
    │   └── README.md
    │
    ├── Part-04B/
    │   ├── TwoSum.cpp
    │   ├── ThreeSum.cpp
    │   ├── MaximumProductSubarray.cpp
    │   ├── LongestConsecutiveSequence.cpp
    │   ├── StockBuySell.cpp
    │   └── README.md
    │
    └── README.md
Learning Outcomes

After completing Part 4, you should be able to:

Find the maximum subarray sum
Find a majority element
Find leaders in an array
Find an equilibrium index
Find a subarray with a target sum
Solve the Two Sum problem
Solve the Three Sum problem
Find the maximum product subarray
Find the longest consecutive sequence
Calculate maximum stock profit
Understand hashing
Apply the two-pointer technique
Apply sliding-window techniques
Understand greedy problem solving
Optimize basic brute-force solutions
Analyze time and space complexity
Array Algorithms – Complete Progress
Part 1 – Beginner
10 Algorithms
████████████████████ 100% ✅

Part 2 – Intermediate
10 Algorithms
████████████████████ 100% ✅

Part 3 – Rotations & Rearrangement
10 Algorithms
████████████████████ 100% ✅

Part 4 – Advanced
10 Algorithms
████████████████████ 100% ✅
Total Array Algorithms
10 + 10 + 10 + 10 = 40 Algorithms

Total: 40 Array Algorithms Completed ✅

Algorithm Learning Path
Array Algorithms
       │
       ├── Part 1: Beginner
       │       └── Basic Array Operations
       │
       ├── Part 2: Intermediate
       │       └── Array Manipulation
       │
       ├── Part 3: Rotations & Rearrangement
       │       └── Rotation & Rearrangement
       │
       └── Part 4: Advanced
               ├── Kadane's Algorithm
               ├── Moore's Voting
               ├── Sliding Window
               ├── Hashing
               ├── Two Pointers
               └── Greedy Algorithms
Common C++ STL Used

Some Part 4 algorithms use the C++ Standard Template Library.

unordered_map

Used for key-value storage:

unordered_map<int, int> seen;
unordered_set

Used for fast membership checking:

unordered_set<int> numbers;
sort()

Used to sort an array:

sort(arr, arr + size);
max()

Returns the larger value:

max(a, b);
min()

Returns the smaller value:

min(a, b);
What Makes These Algorithms Advanced?

Beginner algorithms usually ask:

"How do I process every element?"

Advanced algorithms ask:

"How can I solve this problem efficiently?"

For example, a brute-force maximum subarray solution can take:

O(n²)

Kadane's Algorithm reduces it to:

O(n)

Similarly:

Two Sum
Brute Force → O(n²)
Hashing     → O(n) average

This is the main goal of advanced DSA:

Solve the same problem with less time and less unnecessary work.

Part 4 Summary
Algorithm	Key Idea
Kadane's Algorithm	Maximum subarray sum
Majority Element	Moore's Voting
Leaders	Right-to-left traversal
Equilibrium Index	Total sum
Subarray Given Sum	Sliding window
Two Sum	Hashing
Three Sum	Two pointers
Maximum Product	Track maximum and minimum
Longest Consecutive	Hashing
Stock Buy & Sell	Greedy approach


## Author

Muhammad Ismail

🎓 BS Computer Science Student
💻 C++ / Data Structures & Algorithms
📚 Building a complete C++ Algorithms Repository

⭐ Support

If this repository helps you learn C++ and DSA, consider giving it a star ⭐ on GitHub