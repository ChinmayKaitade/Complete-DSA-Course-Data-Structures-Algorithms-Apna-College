# 📘 Lecture 02: Variables, Data Types & Operators

This module covers the core building blocks of C++ programming: standard I/O streams, memory allocation via fundamental data types, type conversion mechanisms, and operator precedence.

---

## ⚡ 1. First Program & Output Stream

The standard way to display output in C++ using the `iostream` library:

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello World!" << endl;
    return 0;
}

```

- `cout`: Standard output stream object (pronounced _see-out_).
- `<<`: Insertion operator used to push data to the output stream.
- `endl`: Inserts a newline character and flushes the output buffer.

---

## 📦 2. Variables & Data Types

Variables act as named memory containers to store and manipulate data.

| Data Type          | Keyword  | Size        | Value Range / Description                      |
| ------------------ | -------- | ----------- | ---------------------------------------------- |
| **Integer**        | `int`    | **4 bytes** | Whole numbers (e.g., `-25`, `100`)             |
| **Character**      | `char`   | **1 byte**  | Single character / ASCII (e.g., `'a'`, `'Z'`)  |
| **Floating Point** | `float`  | **4 bytes** | Single-precision decimals (e.g., `3.14f`)      |
| **Double**         | `double` | **8 bytes** | Double-precision decimals (e.g., `3.14159265`) |
| **Boolean**        | `bool`   | **1 byte**  | Truth values (`true` / `false` or `1` / `0`)   |

---

## 🔄 3. Type Casting

Converting a data value from one type to another.

- **Implicit Conversion (Type Promotion):** Done automatically by the compiler from smaller to larger data types (e.g., `char` $\rightarrow$ `int`).
- **Explicit Conversion (Type Casting):** Manually enforced by the programmer using `(type)value` or `static_cast<type>(value)`.

```cpp
char ch = 'A';
int asciiVal = (int)ch; // Explicit cast: 65

```

---

## 📥 4. Input in C++ (`cin`)

The `cin` object (Standard Input Stream) reads data from the console using the extraction operator (`>>`):

```cpp
int age;
cout << "Enter your age: ";
cin >> age;

```

---

## ⚙️ 5. Operators Overview

### 🔹 Arithmetic Operators

Perform standard mathematical operations:

- `+` (Addition), `-` (Subtraction), `*` (Multiplication), `/` (Division), `%` (Modulo / Remainder)

### 🔹 Relational Operators

Compare two values and return a boolean result (`true` or `false`):

- `==` (Equal to), `!=` (Not equal to), `>`, `<`, `>=`, `<=`

### 🔹 Logical Operators

Used to combine conditional statements:

- `&&` (Logical AND): Returns `true` only if both conditions are true.
- `||` (Logical OR): Returns `true` if at least one condition is true.
- `!` (Logical NOT): Reverses the boolean state of the condition.

---

## 🔀 6. Unary Operators (Increment & Decrement)

Operate on a single operand to modify its value by `1`.

| Type               | Syntax | Execution Order                                   |
| ------------------ | ------ | ------------------------------------------------- |
| **Pre-Increment**  | `++a`  | Increments value first, then evaluates expression |
| **Post-Increment** | `a++`  | Evaluates current value first, then increments    |
| **Pre-Decrement**  | `--a`  | Decrements value first, then evaluates expression |
| **Post-Decrement** | `a--`  | Evaluates current value first, then decrements    |

```cpp
int a = 10;
int b = ++a; // a = 11, b = 11 (Pre-increment)

int x = 10;
int y = x++; // x = 11, y = 10 (Post-increment)

```
