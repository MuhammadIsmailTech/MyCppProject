# String Algorithms in C++ – Part 1 (Beginner)

![Language](https://img.shields.io/badge/Language-C%2B%2B-blue)
![Category](https://img.shields.io/badge/Category-String%20Algorithms-green)
![Level](https://img.shields.io/badge/Level-Beginner-brightgreen)
![Algorithms](https://img.shields.io/badge/Algorithms-10-purple)

## 📚 Introduction

Welcome to **String Algorithms – Part 1 (Beginner)**.

This section contains **10 basic string algorithms implemented in C++**.

The purpose of this part is to build a strong foundation in:

- C++ strings
- Character manipulation
- String traversal
- String comparison
- Palindrome checking
- Character counting
- Word counting
- String modification

These concepts are important before moving toward intermediate and advanced string algorithms.

---

# 📂 Algorithms Included

| # | Algorithm | Main Concept |
|---:|---|---|
| 1 | Reverse String | Two Pointers |
| 2 | Check Palindrome | Two Pointers |
| 3 | Count Vowels & Consonants | Character Traversal |
| 4 | Count Words | String Parsing |
| 5 | Count Characters | Frequency Counting |
| 6 | Convert Case | Character Processing |
| 7 | Remove Spaces | String Filtering |
| 8 | Find String Length | String Traversal |
| 9 | Compare Strings | Character Comparison |
| 10 | Concatenate Strings | String Manipulation |

---

# 📁 Folder Structure

```text
String-Algorithms/
│
└── Part-01-Beginner/
    │
    ├── 01_ReverseString.cpp
    ├── 02_CheckPalindrome.cpp
    ├── 03_CountVowelsConsonants.cpp
    ├── 04_CountWords.cpp
    ├── 05_CountCharacters.cpp
    ├── 06_ConvertCase.cpp
    ├── 07_RemoveSpaces.cpp
    ├── 08_StringLength.cpp
    ├── 09_CompareStrings.cpp
    ├── 10_ConcatenateStrings.cpp
    │
    └── README.md
1. Reverse a String
File
01_ReverseString.cpp
Definition

Reversing a string means changing the order of its characters from the last character to the first.

Example
Input:
Hello

Output:
olleH
Technique

The program uses the Two-Pointer Technique.

Two pointers are used:

left  → beginning
right → ending

The characters are swapped until both pointers meet.

Complexity
Time Complexity:  O(n)
Space Complexity: O(n)
2. Check Palindrome
File
02_CheckPalindrome.cpp
Definition

A palindrome is a string that reads the same from both directions.

Examples
madam → Palindrome
level → Palindrome
radar → Palindrome
hello → Not Palindrome
Technique

Compare:

First character ↔ Last character
Second character ↔ Second-last character

Continue until the middle of the string.

Complexity
Time Complexity:  O(n)
Space Complexity: O(1)
3. Count Vowels and Consonants
File
03_CountVowelsConsonants.cpp
Definition

This algorithm counts the number of vowels and consonants in a string.

Vowels
a
e
i
o
u

Both uppercase and lowercase vowels are considered.

Example
Input:
Hello World

Output:
Vowels: 3
Consonants: 7

Spaces, numbers, and special characters are ignored.

Complexity
Time Complexity:  O(n)
Space Complexity: O(1)
4. Count Words
File
04_CountWords.cpp
Definition

This algorithm counts the number of words in a sentence.

Example
Input:
I am learning C++

Output:
Number of Words: 4

The program uses stringstream to separate words based on whitespace.

Complexity
Time Complexity:  O(n)
Space Complexity: O(n)
5. Count Characters
File
05_CountCharacters.cpp
Definition

This algorithm calculates how many times each character occurs in a string.

Example
Input:
hello

Output:

h = 1
e = 1
l = 2
o = 1
Technique

A frequency map is used:

map<char, int>

Each character becomes a key and its occurrence becomes the value.

Complexity
Time Complexity:  O(n log k)
Space Complexity: O(k)

Where k is the number of distinct characters.

6. Convert Uppercase and Lowercase
File
06_ConvertCase.cpp
Definition

This algorithm converts characters between uppercase and lowercase.

Example
Input:
Hello World

Output:

Uppercase:
HELLO WORLD

Lowercase:
hello world
C++ Functions

The program uses:

toupper()
tolower()

These functions are available through:

#include <cctype>
Complexity
Time Complexity:  O(n)
Space Complexity: O(n)
7. Remove Spaces
File
07_RemoveSpaces.cpp
Definition

This algorithm removes spaces from a string.

Example
Input:
Hello World C++

Output:
HelloWorldC++
Technique

Traverse every character.

If the character is not a space, add it to the result.

Character
    ↓
Is it a space?
   /    \
 Yes     No
  ↓       ↓
Skip    Add
Complexity
Time Complexity:  O(n)
Space Complexity: O(n)
8. Find String Length
File
08_StringLength.cpp
Definition

String length is the total number of characters in a string.

Example
Input:
Computer

Output:
String Length: 8
Technique

The program manually counts every character instead of directly using:

str.length()

This helps understand how string length can be calculated internally.

Complexity
Time Complexity:  O(n)
Space Complexity: O(1)

In normal C++ code, std::string::length() is the preferred way to get the string's length.

9. Compare Two Strings
File
09_CompareStrings.cpp
Definition

This algorithm checks whether two strings contain exactly the same characters in the same order.

Example
String 1:
hello

String 2:
hello

Output:
Strings are equal

Another example:

String 1:
hello

String 2:
Hello

Output:
Strings are not equal

The comparison is case-sensitive.

Technique

First compare the lengths.

If the lengths are equal, compare each character one by one.

Complexity
Time Complexity:  O(n)
Space Complexity: O(1)
10. Concatenate Two Strings
File
10_ConcatenateStrings.cpp
Definition

Concatenation means joining two strings together.

Example
String 1:
Hello

String 2:
World

Output:

HelloWorld
C++ Operator

C++ allows strings to be joined using:

+

Example:

string result = str1 + str2;
Complexity
Time Complexity:  O(n + m)
Space Complexity: O(n + m)

Where:

n = length of first string
m = length of second string
📊 Complexity Comparison
#	Algorithm	Time Complexity	Space Complexity
1	Reverse String	O(n)	O(n)
2	Check Palindrome	O(n)	O(1)
3	Count Vowels & Consonants	O(n)	O(1)
4	Count Words	O(n)	O(n)
5	Count Characters	O(n log k)	O(k)
6	Convert Case	O(n)	O(n)
7	Remove Spaces	O(n)	O(n)
8	Find String Length	O(n)	O(1)
9	Compare Strings	O(n)	O(1)
10	Concatenate Strings	O(n + m)	O(n + m)
🧠 Important C++ String Concepts
1. string

C++ provides the string class for storing text.

string name = "Ismail";
2. getline()

getline() reads a complete line, including spaces.

string sentence;

getline(cin, sentence);

For example:

Muhammad Ismail is learning C++
3. String Indexing

Characters can be accessed using an index.

string str = "Hello";

cout << str[0];

Output:

H

Indexes start from:

0

So:

H → 0
e → 1
l → 2
l → 3
o → 4
4. String Traversal

We can visit every character using a loop:

for (char ch : str)
{
    cout << ch << endl;
}
5. length()

Returns the number of characters:

str.length()

Example:

string str = "Hello";

cout << str.length();

Output:

5
6. Character Functions

The <cctype> library provides useful functions:

isalpha()
isdigit()
isspace()
toupper()
tolower()

Example:

if (isalpha(ch))
{
    cout << "Letter";
}
🎯 Techniques Learned

Part 1 introduces the following techniques:

Two Pointers

Used in:

Reverse String
Palindrome
Traversal

Used in:

Counting
Case Conversion
Removing Characters
Finding Length
Frequency Counting

Used in:

Count Characters
String Parsing

Used in:

Count Words
Character Processing

Used in:

Vowels & Consonants
Uppercase & Lowercase
🔍 Example: Two-Pointer Technique

Suppose we have:

HELLO

Positions:

0 1 2 3 4
H E L L O
↑       ↑
left   right

Swap:

O E L L H

Move pointers:

  ↑   ↑
 left right

Continue until:

left >= right

Result:

OLLEH

This same technique is useful in many other DSA problems.

🚀 Learning Outcomes

After completing Part 1, you should be able to:

Create and use C++ strings
Read complete sentences using getline()
Access individual characters
Traverse a string
Reverse a string
Check whether a string is a palindrome
Count vowels and consonants
Count words
Count character frequencies
Convert uppercase and lowercase characters
Remove spaces
Find string length
Compare strings
Concatenate strings
Understand basic string complexity
📈 String Algorithms Roadmap
String Algorithms
│
├── Part 1 – Beginner
│   ├── Reverse String
│   ├── Palindrome
│   ├── Vowels & Consonants
│   ├── Word Counting
│   ├── Character Frequency
│   ├── Case Conversion
│   ├── Remove Spaces
│   ├── String Length
│   ├── String Comparison
│   └── String Concatenation
│
├── Part 2 – Intermediate
│   ├── Remove Duplicate Characters
│   ├── First Non-Repeating Character
│   ├── First Repeating Character
│   ├── Anagram Check
│   ├── Reverse Words
│   ├── String Rotation
│   ├── Substring Search
│   ├── Longest Word
│   └── More String Problems
│
├── Part 3 – Advanced
│   ├── KMP Algorithm
│   ├── Rabin-Karp
│   ├── Z Algorithm
│   ├── Longest Palindromic Substring
│   ├── LCS
│   ├── Longest Common Substring
│   └── Edit Distance
│
└── Part 4 – Expert
    ├── Trie
    ├── Rolling Hash
    ├── Suffix Algorithms
    └── Advanced Pattern Matching
📌 Part 1 Checklist
[✓] 01 Reverse String
[✓] 02 Check Palindrome
[✓] 03 Count Vowels & Consonants
[✓] 04 Count Words
[✓] 05 Count Characters
[✓] 06 Convert Case
[✓] 07 Remove Spaces
[✓] 08 Find String Length
[✓] 09 Compare Strings
[✓] 10 Concatenate Strings
🏆 Part 1 Completed

You have completed:

String Algorithms
       ↓
Part 1 – Beginner
       ↓
10 Algorithms
       ↓
Basic String Foundation

The next level is:

String Algorithms – Part 2 (Intermediate)

This will introduce anagrams, duplicate detection, frequency-based problems, string rotation, substring searching, and more practical string problems.

👨‍💻 Author

Muhammad Ismail

BS Computer Science
C++ | Data Structures & Algorithms

⭐ If this repository helps you learn C++ and DSA, consider giving it a star on GitHub.