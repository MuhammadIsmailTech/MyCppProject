# String Algorithms in C++ – Part 2 (Intermediate)

![Language](https://img.shields.io/badge/Language-C%2B%2B-blue)
![Category](https://img.shields.io/badge/Category-String%20Algorithms-green)
![Level](https://img.shields.io/badge/Level-Intermediate-orange)
![Algorithms](https://img.shields.io/badge/Algorithms-10-purple)

## 📚 Introduction

Welcome to **String Algorithms – Part 2 (Intermediate)**.

This section builds on the basic string operations covered in **Part 1** and introduces more practical and problem-solving-oriented string algorithms.

The main focus is on:

* Character frequency
* Hashing
* Duplicate detection
* Anagram checking
* Word manipulation
* String rotation
* Substring searching
* Pattern matching
* Character replacement

All algorithms are implemented separately in **C++** to make the collection easy to understand, practice, and maintain on GitHub.
 

## 📂 Algorithms Included

|  # | Algorithm                     | Main Technique       | Difficulty   |
| -: | ----------------------------- | -------------------- | ------------ |
|  1 | Remove Duplicate Characters   | Hashing              | Intermediate |
|  2 | First Non-Repeating Character | Frequency Counting   | Intermediate |
|  3 | First Repeating Character     | Hash Set             | Intermediate |
|  4 | Character Frequency           | Hashing              | Intermediate |
|  5 | Anagram Check                 | Frequency Counting   | Intermediate |
|  6 | Reverse Words                 | String Parsing       | Intermediate |
|  7 | String Rotation               | String Search        | Intermediate |
|  8 | Substring Search              | Pattern Matching     | Intermediate |
|  9 | Longest Word                  | String Traversal     | Intermediate |
| 10 | Replace Characters            | Character Processing | Intermediate |
 

# 📁 Folder Structure

```text
Part-02-Intermediate/
│
├── 01_RemoveDuplicateCharacters.cpp
├── 02_FirstNonRepeatingCharacter.cpp
├── 03_FirstRepeatingCharacter.cpp
├── 04_CharacterFrequency.cpp
├── 05_AnagramCheck.cpp
├── 06_ReverseWords.cpp
├── 07_StringRotation.cpp
├── 08_SubstringSearch.cpp
├── 09_LongestWord.cpp
├── 10_ReplaceCharacters.cpp
│
└── README.md
```
 

# 1. Remove Duplicate Characters

### File

```text
01_RemoveDuplicateCharacters.cpp
```

### Description

Removes duplicate characters from a string while keeping the first occurrence of each character.

### Example

```text
Input:
programming

Output:
progamin
```

### Technique

Uses an `unordered_set` to keep track of characters that have already appeared.

```cpp
unordered_set<char> seen;
```

### Complexity

```text
Average Time Complexity: O(n)
Space Complexity:        O(k)
```

Where `k` is the number of distinct characters.
 

# 2. First Non-Repeating Character

### File

```text
02_FirstNonRepeatingCharacter.cpp
```

### Description

Finds the first character that appears exactly once in the string.

### Example

```text
Input:
swiss

Output:
w
```

Character frequencies:

```text
s → 3
w → 1
i → 1
```

Therefore, `w` is the first non-repeating character.

### Technique

The algorithm uses two passes:

1. Count the frequency of every character.
2. Traverse the original string and find the first character with frequency `1`.

### Complexity

```text
Average Time Complexity: O(n)
Space Complexity:        O(k)
```
 

# 3. First Repeating Character

### File

```text
03_FirstRepeatingCharacter.cpp
```

### Description

Finds the first character that appears more than once.

### Example

```text
Input:
programming

Output:
r
```

### Technique

An `unordered_set` stores characters that have already been visited.

If a character is already in the set, it is the first repeating character.

### Complexity

```text
Average Time Complexity: O(n)
Space Complexity:        O(k)
```
 

# 4. Character Frequency

### File

```text
04_CharacterFrequency.cpp
```

### Description

Counts the number of occurrences of each character in a string.

### Example

```text
Input:
banana
```

Output:

```text
b = 1
a = 3
n = 2
```

### Technique

Uses:

```cpp
unordered_map<char, int>
```

Each character is used as a key and its frequency is stored as the value.

### Complexity

```text
Average Time Complexity: O(n)
Space Complexity:        O(k)
```
 

# 5. Anagram Check

### File

```text
05_AnagramCheck.cpp
```

### Description

Checks whether two strings are anagrams.

Two strings are anagrams when they contain the same characters with the same frequencies, but their order can be different.

### Example

```text
String 1:
listen

String 2:
silent

Output:
Strings are Anagrams
```

Both strings contain the same characters:

```text
e i l n s t
```

### Technique

The algorithm:

1. Checks whether both strings have the same length.
2. Counts characters in the first string.
3. Decreases the count using characters from the second string.
4. Determines whether the character frequencies match.

### Complexity

```text
Average Time Complexity: O(n)
Space Complexity:        O(k)
```
 

# 6. Reverse Words

### File

```text
06_ReverseWords.cpp
```

### Description

Reverses the order of words in a sentence without reversing the characters inside each word.

### Example

```text
Input:
I love programming

Output:
programming love I
```

Notice that:

```text
programming
```

remains unchanged. Only the **order of the words** is reversed.

### Technique

Uses:

```cpp
stringstream
vector<string>
```

The sentence is separated into individual words and then processed from the last word to the first.

### Complexity

```text
Time Complexity:  O(n)
Space Complexity: O(n)
```
 

# 7. String Rotation

### File

```text
07_StringRotation.cpp
```

### Description

Checks whether one string is a rotation of another string.

### Example

```text
String 1:
abcd

String 2:
cdab

Output:
Strings are rotations
```

Rotations of `abcd` include:

```text
abcd
bcda
cdab
dabc
```

Therefore, `cdab` is a valid rotation.

### Technique

If two strings have the same length, create:

```text
str1 + str1
```

Example:

```text
abcdabcd
```

Then search for the second string inside it.

### Complexity

```text
Space Complexity: O(n)
```

The exact time complexity of the substring search depends on the implementation used by the C++ standard library.
 

# 8. Substring Search

### File

```text
08_SubstringSearch.cpp
```

### Description

Searches for a smaller pattern inside a larger text.

### Example

```text
Text:
I love programming

Pattern:
program
```

Output:

```text
Pattern found
```

### Technique

This implementation uses **Naive Pattern Matching**.

The pattern is compared with the text starting at every possible position.

### Example

```text
Text:
ABCDE

Pattern:
CD
```

The algorithm checks:

```text
AB
BC
CD  ← Match
```

### Complexity

```text
Time Complexity:  O(n × m)
Space Complexity: O(1)
```

Where:

```text
n = length of text
m = length of pattern
```

This basic technique prepares you for advanced algorithms such as:

* KMP
* Rabin-Karp
* Z Algorithm
 

# 9. Longest Word

### File

```text
09_LongestWord.cpp
```

### Description

Finds the longest word in a sentence.

### Example

```text
Input:
I am learning programming

Output:
programming
```

### Technique

The sentence is divided into words using `stringstream`.

Each word is compared with the current longest word.

### Complexity

```text
Time Complexity:  O(n)
Space Complexity: O(n)
```
 

# 10. Replace Characters

### File

```text
10_ReplaceCharacters.cpp
```

### Description

Replaces every occurrence of one character with another character.

### Example

```text
Input:
banana

Replace:
a → o

Output:
bonono
```

### Technique

Traverse the string and replace a character whenever it matches the target character.

### Complexity

```text
Time Complexity:  O(n)
Space Complexity: O(n)
```
 

# 📊 Complexity Comparison

|  # | Algorithm                     |   Time Complexity | Space Complexity |
| -: | ----------------------------- | ----------------: | ---------------: |
|  1 | Remove Duplicate Characters   |      O(n) average |             O(k) |
|  2 | First Non-Repeating Character |      O(n) average |             O(k) |
|  3 | First Repeating Character     |      O(n) average |             O(k) |
|  4 | Character Frequency           |      O(n) average |             O(k) |
|  5 | Anagram Check                 |      O(n) average |             O(k) |
|  6 | Reverse Words                 |              O(n) |             O(n) |
|  7 | String Rotation               | Depends on search |             O(n) |
|  8 | Substring Search              |          O(n × m) |             O(1) |
|  9 | Longest Word                  |              O(n) |             O(n) |
| 10 | Replace Characters            |              O(n) |             O(n) |

### Notation

```text
n = input string length
m = pattern length
k = number of distinct characters
```
 

# 🧠 Important Concepts

## 1. Hashing

Hashing allows us to store and retrieve information efficiently.

C++ provides:

```cpp
unordered_map
unordered_set
```

Example:

```cpp
unordered_map<char, int> frequency;
```

This is especially useful for character-frequency problems.
 

## 2. Frequency Counting

Frequency counting determines how many times each character occurs.

Example:

```text
banana

b → 1
a → 3
n → 2
```

It is useful for:

* Anagram checking
* Duplicate detection
* Repeating characters
* Non-repeating characters
 

## 3. String Parsing

String parsing means breaking a larger string into smaller meaningful parts.

Example:

```text
I love programming
```

becomes:

```text
I
love
programming
```

`stringstream` is useful for this purpose.
 

## 4. Pattern Matching

Pattern matching searches for a smaller string inside a larger string.

```text
Text:
Hello Programming

Pattern:
Program
```

The basic implementation in this part uses **Naive Pattern Matching**.

More efficient pattern-matching algorithms will be introduced later.
 

# 🔍 Naive Pattern Matching

The basic idea is:

```text
Text:
A B C D E F

Pattern:
C D
```

Start from the beginning:

```text
AB ❌
BC ❌
CD ✓
```

The algorithm compares the pattern character by character at each possible position.

### Complexity

```text
Worst Case:
O(n × m)
```

Although simple, this algorithm is important because it builds the foundation for more advanced string-search algorithms.
 

# 🎯 Learning Outcomes

After completing **String Algorithms – Part 2**, you should be able to:

* Remove duplicate characters
* Find the first repeating character
* Find the first non-repeating character
* Calculate character frequencies
* Check whether two strings are anagrams
* Reverse words in a sentence
* Detect string rotations
* Search for substrings
* Find the longest word
* Replace characters
* Use `unordered_map`
* Use `unordered_set`
* Apply hashing to string problems
* Understand basic pattern matching
* Analyze time and space complexity
 

# 📈 String Algorithms Roadmap

```text
String Algorithms
│
├── Part 1 – Beginner
│   ├── Reverse String
│   ├── Check Palindrome
│   ├── Count Vowels & Consonants
│   ├── Count Words
│   ├── Character Frequency
│   ├── Convert Case
│   ├── Remove Spaces
│   ├── String Length
│   ├── Compare Strings
│   └── Concatenate Strings
│
├── Part 2 – Intermediate
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
├── Part 3 – Advanced
│   ├── KMP Algorithm
│   ├── Rabin-Karp Algorithm
│   ├── Z Algorithm
│   ├── Longest Palindromic Substring
│   ├── Longest Common Subsequence
│   ├── Longest Common Substring
│   └── Edit Distance
│
└── Part 4 – Expert
    ├── Trie
    ├── Rolling Hash
    ├── Suffix Algorithms
    └── Advanced Pattern Matching
```

# ✅ Part 2 Checklist

```text
[✓] 01 Remove Duplicate Characters
[✓] 02 First Non-Repeating Character
[✓] 03 First Repeating Character
[✓] 04 Character Frequency
[✓] 05 Anagram Check
[✓] 06 Reverse Words
[✓] 07 String Rotation
[✓] 08 Substring Search
[✓] 09 Longest Word
[✓] 10 Replace Characters
```

# 🚀 Next Part

The next stage is:

## String Algorithms – Part 3 (Advanced)

Topics will include:

* KMP String Matching
* Rabin-Karp Algorithm
* Z Algorithm
* Longest Palindromic Substring
* Longest Common Prefix
* Longest Common Subsequence
* Longest Common Substring
* Edit Distance
* Advanced Pattern Matching
 

# 👨‍💻 Author

**Muhammad Ismail**

BS Computer Science
C++ | Data Structures & Algorithms
 

⭐ If this repository helps you learn C++ and DSA, consider giving it a star on GitHub.
