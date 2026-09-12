# String Algorithms – Part 3 (Advanced)

![Language](https://img.shields.io/badge/Language-C%2B%2B-blue)
![Category](https://img.shields.io/badge/Category-String%20Algorithms-green)
![Level](https://img.shields.io/badge/Level-Advanced-orange)
![Algorithms](https://img.shields.io/badge/Algorithms-10-purple)

## 📚 Introduction

Welcome to **String Algorithms – Part 3 (Advanced)**.

This part continues the String Algorithms series after:

* Part 1: Beginner
* Part 2: Intermediate

Here we move toward more advanced **pattern matching, palindrome processing, and dynamic programming** techniques.

The algorithms in this section are useful for:

* Data Structures & Algorithms
* Competitive Programming
* Problem Solving
* Coding Interviews
* Text Processing
* Algorithmic Thinking

Each algorithm is implemented separately in **C++** so it can be studied and practiced independently.

# 📂 Algorithms Included

|  # | Algorithm                     | Main Technique        | Difficulty |
| -: | ----------------------------- | --------------------- | ---------- |
|  1 | KMP String Matching           | LPS / Prefix Function | Advanced   |
|  2 | Rabin-Karp                    | Rolling Hash          | Advanced   |
|  3 | Z Algorithm                   | Z Array               | Advanced   |
|  4 | Longest Palindromic Substring | Expand Around Center  | Advanced   |
|  5 | Longest Common Prefix         | String Traversal      | Advanced   |
|  6 | Longest Common Subsequence    | Dynamic Programming   | Advanced   |
|  7 | Longest Common Substring      | Dynamic Programming   | Advanced   |
|  8 | Edit Distance                 | Dynamic Programming   | Advanced   |
|  9 | Pattern Matching              | Naive Matching        | Advanced   |
| 10 | String Compression            | String Traversal      | Advanced   |

# 📁 Folder Structure

```text
Part-03-Advanced/
│
├── 01_KMPStringMatching.cpp
├── 02_RabinKarp.cpp
├── 03_ZAlgorithm.cpp
├── 04_LongestPalindromicSubstring.cpp
├── 05_LongestCommonPrefix.cpp
├── 06_LongestCommonSubsequence.cpp
├── 07_LongestCommonSubstring.cpp
├── 08_EditDistance.cpp
├── 09_PatternMatching.cpp
├── 10_StringCompression.cpp
│
└── README.md
```

# 1. KMP String Matching

### File

```text
01_KMPStringMatching.cpp
```

### Description

**KMP (Knuth-Morris-Pratt)** is an efficient string pattern-matching algorithm.

Unlike the naive approach, KMP avoids unnecessary comparisons after a mismatch.

It uses an **LPS array**.

LPS stands for:

```text
Longest Proper Prefix which is also a Suffix
```

### Example

```text
Text:
ABABDABACDABABCABAB

Pattern:
ABABCABAB

Output:
Pattern found at index 10
```

### Main Idea

The LPS array tells the algorithm how far the pattern can move after a mismatch.

### Complexity

```text
Time:  O(n + m)
Space: O(m)
```

# 2. Rabin-Karp Algorithm

### File

```text
02_RabinKarp.cpp
```

### Description

Rabin-Karp uses **hashing** to find a pattern inside a text.

Instead of comparing every substring character by character immediately, it first compares their hash values.

### Example

```text
Text:
Hello Programming

Pattern:
Program
```

### Main Idea

A rolling hash allows the hash value of the next substring to be calculated efficiently.

### Complexity

```text
Average Time: O(n + m)
Worst Case:   O(n × m)
Space:        O(1)
```

# 3. Z Algorithm

### File

```text
03_ZAlgorithm.cpp
```

### Description

The **Z Algorithm** creates a Z-array for a string.

For every position `i`, `Z[i]` represents the length of the longest substring starting at `i` that matches the prefix of the string.

### Example

For:

```text
aabxaab
```

The Z-array describes how much each position matches the prefix.

### Main Idea

The algorithm maintains a matching range:

```text
[L, R]
```

and reuses previously calculated information to avoid unnecessary comparisons.

### Complexity

```text
Time:  O(n)
Space: O(n)
```

# 4. Longest Palindromic Substring

### File

```text
04_LongestPalindromicSubstring.cpp
```

### Description

Finds the longest substring that reads the same from left to right and right to left.

### Example

```text
Input:
babad

Output:
bab
```

Another valid answer is:

```text
aba
```

### Main Idea

Every palindrome can be expanded around its center.

There are two cases:

```text
Odd length:
aba
 ↑
center
```

```text
Even length:
abba
 ↑↑
center
```

The algorithm checks both possibilities.

### Complexity

```text
Time:  O(n²)
Space: O(n)
```

# 5. Longest Common Prefix

### File

```text
05_LongestCommonPrefix.cpp
```

### Description

Finds the longest prefix shared by all strings.

### Example

```text
Input:
flower
flow
flight

Output:
fl
```

All three strings start with:

```text
fl
```

### Main Idea

Start with the first string as the current prefix and compare it with every other string.

### Complexity

```text
Time:  O(n × m)
Space: O(1)
```

Where:

```text
n = number of strings
m = length involved in comparisons
```

# 6. Longest Common Subsequence

### File

```text
06_LongestCommonSubsequence.cpp
```

### Description

The **Longest Common Subsequence (LCS)** finds the longest sequence that appears in both strings while maintaining the same relative order.

The characters do not need to be consecutive.

### Example

```text
String 1:
ABCBDAB

String 2:
BDCABA

LCS:
BCBA

Length:
4
```

### Important Difference

A subsequence can skip characters.

```text
ABCBDAB
↓ ↓ ↓ ↓
B C B A
```

### Technique

Dynamic Programming.

A DP table stores solutions to smaller subproblems.

### Complexity

```text
Time:  O(n × m)
Space: O(n × m)
```

# 7. Longest Common Substring

### File

```text
07_LongestCommonSubstring.cpp
```

### Description

Finds the longest substring that appears in both strings.

Unlike a subsequence, a substring must contain **consecutive characters**.

### Example

```text
String 1:
ABABC

String 2:
BABCA

Output:
BABC
```

### Substring vs Subsequence

```text
Substring:
Consecutive characters

Subsequence:
Characters can be skipped
```

For example:

```text
ABCDE
```

`ACE` is a subsequence.

`BCD` is a substring.

### Technique

Dynamic Programming.

### Complexity

```text
Time:  O(n × m)
Space: O(n × m)
```

# 8. Edit Distance

### File

```text
08_EditDistance.cpp
```

### Description

Edit Distance finds the minimum number of operations required to transform one string into another.

Three operations are allowed:

```text
1. Insert
2. Delete
3. Replace
```

### Example

```text
Input:

horse
ros

Output:

3
```

### Main Idea

A Dynamic Programming table stores the minimum operations required for smaller prefixes of both strings.

### Example Operations

```text
horse
 ↓
orse       Delete h
 ↓
rse        Delete o
 ↓
ros        Replace e with o
```

### Complexity

```text
Time:  O(n × m)
Space: O(n × m)
```

# 9. Pattern Matching

### File

```text
09_PatternMatching.cpp
```

### Description

Finds **all occurrences** of a pattern inside a text.

### Example

```text
Text:
AAAAA

Pattern:
AA
```

Output:

```text
Pattern found at:
0
1
2
3
```

### Main Idea

The algorithm checks the pattern at every possible position in the text.

This is a simple form of **Naive Pattern Matching**.

### Complexity

```text
Time:  O(n × m)
Space: O(k)
```

Where `k` is the number of matches.

# 10. String Compression

### File

```text
10_StringCompression.cpp
```

### Description

Compresses consecutive repeated characters by storing the character followed by its count.

### Example

```text
Input:
aaabbcccc

Output:
a3b2c4
```

Another example:

```text
Input:
wwwwaaadexxxxxx

Output:
w4a3d1e1x6
```

### Main Idea

Traverse the string and count consecutive occurrences of each character.

### Complexity

```text
Time:  O(n)
Space: O(n)
```

# 📊 Complexity Comparison

|  # | Algorithm                     | Technique           |  Time Complexity | Space Complexity |
| -: | ----------------------------- | ------------------- | ---------------: | ---------------: |
|  1 | KMP String Matching           | LPS                 |         O(n + m) |             O(m) |
|  2 | Rabin-Karp                    | Rolling Hash        | O(n + m) average |             O(1) |
|  3 | Z Algorithm                   | Z Array             |             O(n) |             O(n) |
|  4 | Longest Palindromic Substring | Center Expansion    |            O(n²) |             O(n) |
|  5 | Longest Common Prefix         | Traversal           |         O(n × m) |             O(1) |
|  6 | Longest Common Subsequence    | Dynamic Programming |         O(n × m) |         O(n × m) |
|  7 | Longest Common Substring      | Dynamic Programming |         O(n × m) |         O(n × m) |
|  8 | Edit Distance                 | Dynamic Programming |         O(n × m) |         O(n × m) |
|  9 | Pattern Matching              | Naive Matching      |         O(n × m) |             O(k) |
| 10 | String Compression            | Traversal           |             O(n) |             O(n) |

### Notation

```text
n = text/string length
m = pattern or second string length
k = number of matches or distinct results
```

# 🧠 Important Concepts

## 1. Prefix and Suffix

A **prefix** is a beginning part of a string.

Example:

```text
String:
ABCDEF

Prefixes:
A
AB
ABC
ABCD
ABCDE
ABCDEF
```

A **suffix** is an ending part.

```text
Suffixes:
F
EF
DEF
CDEF
BCDEF
ABCDEF
```

KMP uses the relationship between prefixes and suffixes.

## 2. LPS Array

The LPS array is one of the most important concepts in KMP.

For each position, it stores the length of the longest proper prefix that is also a suffix.

It allows KMP to skip unnecessary comparisons.

---

## 3. Rolling Hash

Rabin-Karp uses a rolling hash.

The basic idea is:

```text
Current Window
      ↓
Calculate Hash
      ↓
Move Window
      ↓
Update Hash
      ↓
Compare
```

This makes substring searching much more efficient on average.

## 4. Z Array

The Z-array stores prefix-matching information for every position.

It is useful for:

* Pattern matching
* String analysis
* Finding repeated patterns
* Prefix-related problems

## 5. Dynamic Programming

Part 3 introduces several important Dynamic Programming problems:

```text
LCS
Longest Common Substring
Edit Distance
```

The general idea is:

```text
Large Problem
     ↓
Smaller Problems
     ↓
Store Results
     ↓
Reuse Results
     ↓
Final Answer
```

This avoids repeatedly solving the same subproblem.

# 🔥 Important Difference: LCS vs Longest Common Substring

This is an important DSA concept.

### Longest Common Subsequence

Characters **do not need to be consecutive**.

```text
ABCDEF
↓ ↓ ↓
ACE
```

### Longest Common Substring

Characters **must be consecutive**.

```text
ABCDEF
  ↓↓↓
CDE
```

| Feature                 | LCS      | Longest Common Substring |
| ----------------------- | -------- | ------------------------ |
| Characters consecutive? | No       | Yes                      |
| Can skip characters?    | Yes      | No                       |
| Common technique        | DP       | DP                       |
| Typical complexity      | O(n × m) | O(n × m)                 |

# 🔥 Pattern Matching Progression

The String Algorithms series now introduces several levels of pattern matching:

```text
Naive Pattern Matching
        ↓
Rabin-Karp
        ↓
KMP
        ↓
Z Algorithm
```

### Naive Matching

Simple but can require:

```text
O(n × m)
```

### Rabin-Karp

Uses:

```text
Hashing
+
Rolling Hash
```

### KMP

Uses:

```text
LPS / Prefix information
```

### Z Algorithm

Uses:

```text
Z-array
+
Prefix matching
```

# 🎯 Learning Outcomes

After completing **Part 3 – Advanced**, you should be able to:

* Understand advanced string searching
* Implement KMP
* Build an LPS array
* Implement Rabin-Karp
* Understand rolling hash
* Implement the Z Algorithm
* Find the longest palindromic substring
* Find the longest common prefix
* Solve LCS using Dynamic Programming
* Find the longest common substring
* Calculate edit distance
* Perform pattern matching
* Compress strings
* Analyze advanced time and space complexity

# 📈 String Algorithms Roadmap

```text
String Algorithms
│
├── Part 1 – Beginner ✓
│
│   ├── Reverse String
│   ├── Check Palindrome
│   ├── Count Vowels & Consonants
│   ├── Count Words
│   ├── Count Characters
│   ├── Convert Case
│   ├── Remove Spaces
│   ├── String Length
│   ├── Compare Strings
│   └── Concatenate Strings
│
├── Part 2 – Intermediate ✓
│
│   ├── Remove Duplicate Characters
│   ├── First Non-Repeating Character
│   ├── First Repeating Character
│   ├── Character Frequency
│   ├── Anagram Check
│   ├── Reverse Words
│   ├── String Rotation
│   ├── Substring Search
│   ├── Longest Word
│   └── Replace Characters
│
├── Part 3 – Advanced ✓
│
│   ├── KMP String Matching
│   ├── Rabin-Karp
│   ├── Z Algorithm
│   ├── Longest Palindromic Substring
│   ├── Longest Common Prefix
│   ├── Longest Common Subsequence
│   ├── Longest Common Substring
│   ├── Edit Distance
│   ├── Pattern Matching
│   └── String Compression
│
└── Part 4 – Expert
    ├── Trie
    ├── Rolling Hash
    ├── Suffix Array
    ├── Suffix Tree
    ├── Manacher's Algorithm
    └── Advanced Pattern Matching
```

# ✅ Part 3 Checklist

```text
[✓] 01 KMP String Matching
[✓] 02 Rabin-Karp
[✓] 03 Z Algorithm
[✓] 04 Longest Palindromic Substring
[✓] 05 Longest Common Prefix
[✓] 06 Longest Common Subsequence
[✓] 07 Longest Common Substring
[✓] 08 Edit Distance
[✓] 09 Pattern Matching
[✓] 10 String Compression
```

# 🚀 Next Part

After completing Part 3, the next level is:

## String Algorithms – Part 4 (Expert)

The focus will move toward advanced data structures and highly optimized string algorithms, including:

* Trie
* Rolling Hash
* Suffix Array
* Suffix Tree
* Manacher's Algorithm
* Advanced Pattern Matching

# 👨‍💻 Author

**Muhammad Ismail**

BS Computer Science
C++ | Data Structures & Algorithms

⭐ If this repository helps you learn C++ and DSA, consider giving it a star on GitHub.