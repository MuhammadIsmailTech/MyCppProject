# String Algorithms – Part 4 (Expert)

![Language](https://img.shields.io/badge/Language-C%2B%2B-blue)
![Category](https://img.shields.io/badge/Category-String%20Algorithms-green)
![Level](https://img.shields.io/badge/Level-Expert-red)
![Algorithms](https://img.shields.io/badge/Algorithms-10-purple)

## 📚 Introduction

Welcome to **String Algorithms – Part 4 (Expert)**.

This is the fourth and most advanced section of the String Algorithms series.

In this part, we move from traditional string manipulation and pattern matching toward advanced **string data structures, hashing, palindrome algorithms, suffix-based algorithms, and optimized pattern matching**.

The algorithms in this section are useful for:

* Data Structures & Algorithms
* Competitive Programming
* Coding Interviews
* Text Processing
* Search Systems
* Pattern Matching
* String Analysis
* Algorithmic Problem Solving

Each algorithm is implemented separately in **C++** for easier learning, testing, and GitHub organization.
 

# 📂 Algorithms Included

|  # | Algorithm                 | Main Concept                | Difficulty |
| -: | ------------------------- | --------------------------- | ---------- |
|  1 | Trie                      | Prefix Tree                 | Expert     |
|  2 | Trie Insert & Search      | Prefix Searching            | Expert     |
|  3 | Word Search Using Trie    | Trie-Based Searching        | Expert     |
|  4 | Rolling Hash              | String Hashing              | Expert     |
|  5 | Double Hashing            | Collision Reduction         | Expert     |
|  6 | Manacher's Algorithm      | Palindrome Searching        | Expert     |
|  7 | Suffix Array              | Sorted Suffixes             | Expert     |
|  8 | Suffix Array + LCP        | Suffix & Prefix Analysis    | Expert     |
|  9 | Suffix Tree               | Suffix-Based Data Structure | Expert     |
| 10 | Advanced Pattern Matching | KMP / LPS                   | Expert     |
 

# 📁 Folder Structure

```text
Part-04-Expert/
│
├── 01_Trie.cpp
├── 02_TrieInsertSearch.cpp
├── 03_WordSearchUsingTrie.cpp
├── 04_RollingHash.cpp
├── 05_DoubleHashing.cpp
├── 06_ManachersAlgorithm.cpp
├── 07_SuffixArray.cpp
├── 08_SuffixArrayLCP.cpp
├── 09_SuffixTree.cpp
├── 10_AdvancedPatternMatching.cpp
│
└── README.md
```
 

# 1. Trie

### File

```text
01_Trie.cpp
```

### What is a Trie?

A **Trie**, also called a **Prefix Tree**, is a tree-based data structure designed for storing strings.

It is especially useful when many strings share common prefixes.

### Example

Suppose we store:

```text
apple
app
application
```

They share the prefix:

```text
app
```

A Trie stores the shared characters only once along the common path.

### Main Operations

```text
Insert
Search
Prefix Search
```

### Complexity

If `L` is the length of the word:

```text
Insert: O(L)
Search: O(L)
```

### Applications

* Autocomplete
* Dictionaries
* Spell checking
* Search suggestions
* Prefix searching
 

# 2. Trie Insert and Search

### File

```text
02_TrieInsertSearch.cpp
```

This program focuses specifically on the two fundamental Trie operations:

```text
Insert
Search
```

### Insert

A word is inserted character by character.

Example:

```text
computer
```

The Trie creates a path:

```text
c → o → m → p → u → t → e → r
```

### Search

The algorithm follows the same character path.

If the complete path exists and the final node marks the end of a word, the word exists.

### Complexity

```text
Insert: O(L)
Search: O(L)
```
 

# 3. Word Search Using Trie

### File

```text
03_WordSearchUsingTrie.cpp
```

A Trie can store a collection of words and efficiently determine whether a particular word exists.

### Example Dictionary

```text
apple
application
banana
computer
programming
```

Search:

```text
computer
```

Result:

```text
Word exists
```

Search:

```text
mobile
```

Result:

```text
Word does not exist
```

### Applications

Trie-based word searching is useful in:

* Dictionaries
* Search engines
* Autocomplete systems
* Spell checkers
* Word games
 

# 4. Rolling Hash

### File

```text
04_RollingHash.cpp
```

**Rolling Hash** is a technique for calculating hash values of strings efficiently.

Instead of recalculating the complete hash every time a search window moves, the previous hash can be updated.

### Basic Idea

```text
Current Window
      ↓
Calculate Hash
      ↓
Move Window
      ↓
Remove Old Character
      ↓
Add New Character
      ↓
New Hash
```

### Example

For a text:

```text
ABCDEFG
```

a window can move like:

```text
ABC
 ↓
BCD
 ↓
CDE
 ↓
DEF
 ↓
EFG
```

The hash can be updated as the window moves.

### Complexity

For calculating a hash:

```text
Time: O(n)
Space: O(1)
```

### Applications

* Pattern matching
* Duplicate substring detection
* Plagiarism detection
* String comparison
* Rabin-Karp algorithm
 

# 5. Double Hashing

### File

```text
05_DoubleHashing.cpp
```

A single hash function can sometimes produce the same hash for different strings.

This is called a **hash collision**.

Double hashing uses two independent hash functions.

```text
String
  ↓
Hash Function 1
  ↓
Hash 1

String
  ↓
Hash Function 2
  ↓
Hash 2
```

The pair:

```text
(Hash 1, Hash 2)
```

provides stronger collision resistance than a single hash.

### Applications

* String comparison
* Pattern matching
* Competitive programming
* Duplicate detection
* Hash-based algorithms

### Complexity

```text
Time: O(n)
Space: O(1)
```
 

# 6. Manacher's Algorithm

### File

```text
06_ManachersAlgorithm.cpp
```

Manacher's Algorithm finds the **longest palindromic substring in O(n)** time.

This is one of the most important advanced palindrome algorithms.

### Example

```text
Input:
babad

Output:
bab
```

Another valid result is:

```text
aba
```

### Comparison

Earlier, in Part 3, the longest palindromic substring was solved using center expansion:

```text
Time: O(n²)
```

Manacher's Algorithm improves this to:

```text
Time: O(n)
```

### Main Idea

Manacher's Algorithm uses information about previously calculated palindrome ranges to avoid repeating comparisons.

### Complexity

```text
Time: O(n)
Space: O(n)
```
 

# 7. Suffix Array

### File

```text
07_SuffixArray.cpp
```

A **Suffix Array** stores the starting indexes of all suffixes of a string in lexicographically sorted order.

### Example

For:

```text
banana
```

The suffixes are:

```text
banana
anana
nana
ana
na
a
```

Sorted suffixes:

```text
a
ana
anana
banana
na
nana
```

Their starting indexes are:

```text
5
3
1
0
4
2
```

Therefore, the suffix array is:

```text
[5, 3, 1, 0, 4, 2]
```

### Applications

* Pattern searching
* Finding repeated substrings
* String indexing
* Finding longest repeated substrings
* Text processing

### Note

The implementation in this repository is designed for **learning purposes**. Production-quality suffix-array algorithms can construct suffix arrays much more efficiently.
 

# 8. Suffix Array + LCP

### File

```text
08_SuffixArrayLCP.cpp
```

LCP means:

> **Longest Common Prefix**

It determines the number of starting characters shared by two strings or suffixes.

### Example

```text
Suffix 1:
banana

Suffix 2:
ban

LCP:
ban
```

Length:

```text
3
```

When combined with a Suffix Array, LCP information becomes very useful for advanced string problems.

### Applications

* Longest repeated substring
* Pattern searching
* String similarity
* Suffix analysis
* Competitive programming
 

# 9. Suffix Tree

### File

```text
09_SuffixTree.cpp
```

A **Suffix Tree** is an advanced tree-based data structure containing all suffixes of a string.

It can provide very efficient solutions for many string problems.

### Example

For:

```text
banana
```

its suffixes include:

```text
banana
anana
nana
ana
na
a
```

A suffix tree organizes these suffixes into a compact structure.

### Applications

* Fast pattern searching
* Finding repeated substrings
* Longest common substring
* String matching
* Text indexing

### Important Note

The C++ implementation included in this repository is an **educational suffix-trie style implementation** to demonstrate the basic concept.

A true compressed suffix tree is significantly more complex and uses edge compression.
 

# 10. Advanced Pattern Matching

### File

```text
10_AdvancedPatternMatching.cpp
```

This algorithm uses the **KMP technique** to find all occurrences of a pattern in a text.

Unlike basic pattern matching, it does not stop after finding the first occurrence.

### Example

```text
Text:
AAAAA

Pattern:
AA
```

Output:

```text
0
1
2
3
```

The algorithm uses the LPS array to efficiently continue searching after finding a match.

### Complexity

```text
Time: O(n + m)
Space: O(m + k)
```

Where:

```text
n = text length
m = pattern length
k = number of matches
```
 

# 📊 Complexity Summary

|  # | Algorithm                 | Technique          | Time Complexity | Space Complexity |
| -: | ------------------------- | ------------------ | --------------: | ---------------: |
|  1 | Trie                      | Prefix Tree        |            O(L) |         O(N × L) |
|  2 | Trie Insert & Search      | Prefix Searching   |            O(L) |         O(N × L) |
|  3 | Word Search Using Trie    | Trie               |            O(L) |         O(N × L) |
|  4 | Rolling Hash              | Hashing            |            O(n) |             O(1) |
|  5 | Double Hashing            | Two Hash Functions |            O(n) |             O(1) |
|  6 | Manacher's Algorithm      | Palindrome Radius  |            O(n) |             O(n) |
|  7 | Suffix Array              | Sorted Suffixes    |    O(n² log n)* |             O(n) |
|  8 | Suffix Array + LCP        | Suffix + Prefix    |    O(n² log n)* |             O(n) |
|  9 | Suffix Tree               | Suffix Trie        |          O(n²)* |           O(n²)* |
| 10 | Advanced Pattern Matching | KMP / LPS          |        O(n + m) |         O(m + k) |

### Notation

```text
n = length of the input string
m = length of the pattern
L = length of a word
N = number of stored words
k = number of matches
```

`*` The suffix-array and suffix-tree implementations in this learning repository are educational implementations and are not optimal production implementations.
 

# 🧠 Important Concepts

## 1. Trie

```text
Trie
 ↓
Prefix Tree
 ↓
Store Words
 ↓
Fast Prefix Searching
```

Useful for:

```text
Autocomplete
Dictionary
Spell Checker
Search Suggestions
```
 

## 2. Hashing

String hashing converts a string into a numerical value.

```text
String
   ↓
Hash Function
   ↓
Integer Hash
```

Hashing is useful for comparing strings efficiently.
 

## 3. Double Hashing

Instead of relying on:

```text
Hash 1
```

we use:

```text
Hash 1 + Hash 2
```

This reduces the probability of accidental collisions.
 

## 4. Manacher's Algorithm

Manacher's Algorithm improves palindrome searching from:

```text
O(n²)
```

to:

```text
O(n)
```

This makes it an important advanced string algorithm.
 

## 5. Suffix Array

A suffix array represents the sorted starting positions of all suffixes.

It provides a powerful foundation for advanced string processing.
 

## 6. LCP

LCP stands for:

```text
Longest Common Prefix
```

It tells us how many characters two strings or suffixes share from the beginning.
 

## 7. Suffix Tree

A suffix tree represents all suffixes of a string in a tree structure.

It is useful for advanced pattern and substring problems.
 

# 🔥 Important Comparisons

## Trie vs Suffix Tree

| Feature            | Trie                 | Suffix Tree    |
| ------------------ | -------------------- | -------------- |
| Main purpose       | Store words/prefixes | Store suffixes |
| Prefix searching   | Excellent            | Possible       |
| Pattern searching  | Good                 | Excellent      |
| Structure          | Prefix-based         | Suffix-based   |
| Common application | Autocomplete         | Text indexing  |
 

## KMP vs Manacher

| Feature        | KMP                 | Manacher             |
| -------------- | ------------------- | -------------------- |
| Main purpose   | Pattern matching    | Palindrome searching |
| Main technique | LPS                 | Palindrome radius    |
| Time           | O(n + m)            | O(n)                 |
| Used for       | Pattern occurrences | Longest palindrome   |
 

## Suffix Array vs Suffix Tree

| Feature           | Suffix Array          | Suffix Tree      |
| ----------------- | --------------------- | ---------------- |
| Structure         | Array                 | Tree             |
| Stores            | Sorted suffix indexes | Suffix paths     |
| Memory            | Generally lower       | Generally higher |
| Pattern searching | Efficient             | Very efficient   |
| Implementation    | Easier                | More complex     |
 

# 📈 String Algorithms Complete Roadmap

```text
String Algorithms
│
├── Part 1 – Beginner ✓
│   ├── Basic String Operations
│   ├── Reverse String
│   ├── Palindrome
│   ├── Character Counting
│   ├── Vowels & Consonants
│   └── Basic String Processing
│
├── Part 2 – Intermediate ✓
│   ├── Anagrams
│   ├── Character Frequency
│   ├── Duplicate Characters
│   ├── String Rotation
│   ├── Reverse Words
│   └── Intermediate String Problems
│
├── Part 3 – Advanced ✓
│   ├── KMP
│   ├── Rabin-Karp
│   ├── Z Algorithm
│   ├── Longest Palindromic Substring
│   ├── LCS
│   ├── Longest Common Substring
│   ├── Edit Distance
│   └── Pattern Matching
│
└── Part 4 – Expert ✓
    ├── Trie
    ├── Rolling Hash
    ├── Double Hashing
    ├── Manacher's Algorithm
    ├── Suffix Array
    ├── LCP
    ├── Suffix Tree
    └── Advanced Pattern Matching
```
 

# 🎯 Learning Outcomes

After completing **Part 4 – Expert**, you should understand:

* Trie data structures
* Prefix-based searching
* Rolling hash
* Hash collisions
* Double hashing
* Manacher's Algorithm
* Efficient palindrome searching
* Suffix arrays
* LCP arrays and concepts
* Suffix trees
* Advanced pattern matching
* KMP-based multiple pattern searching
* Advanced string complexity analysis
 

# 💻 Skills Developed

This part strengthens the following DSA skills:

```text
Data Structures
      ↓
Trie
      ↓
Hashing
      ↓
Pattern Matching
      ↓
Palindrome Algorithms
      ↓
Suffix Structures
      ↓
Advanced String Processing
```

These concepts are particularly useful for:

* Competitive Programming
* Coding Interviews
* Search Engines
* Text Processing
* Natural Language Processing
* Information Retrieval
* Algorithmic Problem Solving
 

# ✅ Part 4 Checklist

```text
[✓] 01 Trie
[✓] 02 Trie Insert & Search
[✓] 03 Word Search Using Trie
[✓] 04 Rolling Hash
[✓] 05 Double Hashing
[✓] 06 Manacher's Algorithm
[✓] 07 Suffix Array
[✓] 08 Suffix Array + LCP
[✓] 09 Suffix Tree
[✓] 10 Advanced Pattern Matching
```
 

# 🏆 String Algorithms Status

```text
Part 1 – Beginner       ✓ Completed
Part 2 – Intermediate   ✓ Completed
Part 3 – Advanced       ✓ Completed
Part 4 – Expert         ✓ Completed
```

You have now completed the **String Algorithms** section of your C++ Algorithms repository.
 

# 🚀 What's Next?

After completing String Algorithms, the next major category can be:

```text
Next Algorithm Category
        ↓
Linked List Algorithms
        ↓
Part 1 – Beginner
Part 2 – Intermediate
Part 3 – Advanced
Part 4 – Expert
```

This will continue the same structured approach used throughout the repository.
 

# 👨‍💻 Author

**Muhammad Ismail**

BS Computer Science

**Focus:**

```text
C++
Data Structures
Algorithms
Problem Solving
Web Development
```
 

⭐ If you find this repository useful for learning C++ and DSA, consider giving it a star on GitHub.
