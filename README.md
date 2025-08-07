# Arrays-And-Strings

# C++ Array and String Manipulations

## Aim: To study and implement different operations on arrays and strings in C++.

## Tools: GNU g++ compiler (for local execution), Any code editor or an Online C++ Compiler.
# Theory:
# Theory of Arrays in C++

🔹 Definition

An array is a collection of elements of the same data type.

Stored in contiguous memory locations.

Accessed using a single identifier and index values.

🔹 Declaration & Initialization

Declaration syntax:

type arrayName[size];

Example: int numbers[5];

Initialization:

int numbers[5] = {1, 2, 3, 4, 5};

If fewer values are provided, remaining elements are zero-initialized.

Size can be inferred: int values[] = {10, 20, 30};

🔹 Indexing

Arrays use zero-based indexing.

First element: array[0]

Last element: array[size - 1]

Accessing out-of-bounds indices leads to undefined behavior.

🔹 Memory Characteristics

Elements are stored in contiguous memory.

Array name acts as a pointer to the first element.

Efficient access using pointer arithmetic.

🔹 Types of Arrays

Static Arrays:

Size fixed at compile time.

Allocated on the stack.

Dynamic Arrays:

Size determined at runtime.

Allocated on the heap using new.

Multidimensional Arrays:

Arrays of arrays (e.g., 2D arrays: int matrix[3][3];)

# 📘 Theory of Strings in C++
🔹 Definition

A string is a sequence of characters used to represent text.

C++ supports two main types of strings:

C-style strings (char arrays)

C++ std::string class (from the Standard Library)

🔹 C-Style Strings (char arrays)

Declared as an array of characters ending with a null character ('\0').

Declaration:

char str[10];

char str[] = "Hello"; → Automatically adds '\0' at the end.

Initialization:

Can be initialized with string literals or character arrays.

Access:

Individual characters accessed via indexing: str[0], str[1], etc.

Limitations:

Fixed size

Manual memory management

No built-in methods for manipulation

🔹 Common Operations with std::string
Concatenation:

std::string full = first + " " + last;

Length:

str.length() or str.size()

Substring:

str.substr(start, length)

Comparison:

==, !=, <, >, etc.

Search:

str.find("text")

Modification:

str.replace(), str.insert(), str.erase()
#  Arrays and Strings in C++

This repository contains basic C++ programs demonstrating operations on **arrays** and **strings**, designed for beginners who are learning Data Structures and C++ programming.

##  Objective

To implement basic operations on **arrays** and **strings** in C++, including:

- Array traversal
- Searching elements in arrays
- Finding minimum and maximum values
- Reversing arrays and strings
- Calculating sum and average of arrays
- String manipulation: input/output, palindrome checking, concatenation

##  Algorithms

### 1. Arrays In C++.cpp
**Objective**: Print elements of a predefined array  
**Algorithm**:
1. Define an array with values `{50, 60, 70, 80, 90}`.
2. Loop through the array using a `for` loop.
3. Print each element.

### 2. Basic Array Search.cpp
**Objective**: Search for an element in an array  
**Algorithm**:
1. Define an array of fixed size.
2. Ask user to input a value.
3. Loop through array, compare each element.
4. If found, print index; else, print "Not found".

### 3. Min and Max Values in Arrays.cpp
**Objective**: Find the smallest and largest element in an array  
**Algorithm**:
1. Input array size and elements.
2. Initialize `smallest` and `largest` with the first element.
3. Traverse the array:
   - If current element < smallest → update `smallest`
   - If current element > largest → update `largest`
4. Print both values.

### 4. Reverse Array.cpp
**Objective**: Print the array in reverse order  
**Algorithm**:
1. Input array size and elements.
2. Loop from `size - 1` to `0`, printing each element.

### 5. Sum and Average of Array.cpp
**Objective**: Calculate the sum and average of an array  
**Algorithm**:
1. Input array size and elements.
2. Initialize `sum = 0`.
3. Traverse array and accumulate sum.
4. Compute `average = sum / size`.
5. Print both.

### 6. check for palindrome.cpp
**Objective**: Check if the input string is a palindrome  
**Algorithm**:
1. Input a string.
2. Loop till half the string length:
   - Compare character at `i` and `length - 1 - i`
3. If all match → Palindrome  
   Else → Not a palindrome

### 7. concatenation of string.cpp
**Objective**: Concatenate two strings  
**Algorithm**:
1. Input two strings.
2. Use `+` operator to join them.
3. Display the result.

### 8. reversing a string.cpp
**Objective**: Reverse a string  
**Algorithm**:
1. Input string using `gets()` (or `cin`).
2. Find length manually.
3. Print characters from end to beginning.

### 9. take string as input and display it.cpp
**Objective**: Input a string and display it  
**Algorithm**:
1. Use `cin` or `getline` to input string.
2. Print using `cout`.

##  How to Run

1. Clone the repository
2. Open in any C++ IDE (Visual Studio / Code::Blocks)
3. Compile each `.cpp` file individually
4. Run and follow input prompts

## Sample Output

Each code file contains sample outputs as comments at the bottom for easy reference.

## ✅ Conclusion

This project introduces the basics of arrays and strings using C++. By implementing common operations like traversal, searching, reversal, and string manipulation, learners gain a strong foundation in data structures and logic building. These programs serve as essential building blocks for more advanced C++ concepts.

