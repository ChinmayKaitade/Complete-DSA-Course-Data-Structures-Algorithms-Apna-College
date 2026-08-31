# 🚀 Data Structures & Algorithms with C++

Welcome to my DSA learning repository! This project documents my complete journey through **Shradha Khapra Ma'am's DSA Series**, covering foundational logic building, standard data structures, and core algorithmic paradigms using modern C++.

---

## 📌 Overview: Data Structures Hierarchy

```text
Data Structures
├── 🔹 Primitive (int, char, float, bool, etc.)
└── 🔸 Non-Primitive
    ├── 📏 Linear
    │   ├── 📌 Static
    │   │   └── Arrays
    │   └── ⚡ Dynamic
    │       ├── Vector
    │       ├── Linked List
    │       ├── Stack
    │       └── Queue
    └── 🕸️ Non-Linear
        ├── Tree
        ├── Graph
        └── Hash Table / Set
```

---

## 🗺️ Learning Roadmap

| #      | Topic                                               | Status         |
| ------ | --------------------------------------------------- | -------------- |
| **01** | **Flowcharts, Pseudocode & Setup**                  | ✅ Completed   |
| **02** | **Variables, Data Types & Operators**               | ✅ Completed   |
| **03** | **Conditional Statements & Loops**                  | ✅ Completed   |
| **04** | **Patterns (Logic Building)**                       | ✅ Completed   |
| **05** | **Functions, Scope & Memory Stack**                 | ✅ Completed   |
| **06** | **Binary Number System & Conversions**              | ✅ Completed   |
| **07** | **Bitwise Operators & Data Type Modifiers**         | ✅ Completed   |
| **08** | **Arrays (Part 1 - Search, Reverse & Reference)**   | ✅ Completed   |
| **09** | **Vectors in C++ (Arrays Part 2 & Dynamic Memory)** | ✅ Completed   |
| **10** | Kadane's Algorithm & Subarrays                      | ⏳ In Progress |

---

## 🛠️ Tech Stack & Tools

- **Language:** C++ (C++17/C++20)
- **Compiler:** GCC / MinGW (`g++`)
- **Editor:** Visual Studio Code

---

## 📚 Lecture 01: Flowchart & Pseudocode + Installation

### 🎯 Key Highlights

- **Logic Building:** Breaking down problem statements using intuitive **Flowcharts** and structured **Pseudocode**.
- **Environment Setup:** Installing and configuring **VS Code**, `g++` compiler, and essential extensions for modern C++ development.
- **Flowchart Components:** Start/End (Oval), Input/Output (Parallelogram), Process (Rectangle), Decision (Diamond).

---

## 📘 Lecture 02: Variables, Data Types & Operators

### 1. First Program & Output Stream

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello World!" << endl;
    return 0;
}

```

### 2. Primitive Data Types & Memory Sizes

| Data Type     | Keyword  | Size        | Description                         |
| ------------- | -------- | ----------- | ----------------------------------- |
| **Integer**   | `int`    | **4 bytes** | Stores whole numbers (`-25`, `100`) |
| **Character** | `char`   | **1 byte**  | Single character (`'a'`, `'Z'`)     |
| **Float**     | `float`  | **4 bytes** | Single-precision decimal numbers    |
| **Double**    | `double` | **8 bytes** | Double-precision decimal numbers    |
| **Boolean**   | `bool`   | **1 byte**  | Truth values (`true`/`false`)       |

### 3. Type Casting

- **Implicit (Type Promotion):** Done automatically by the compiler (`small type` $\rightarrow$ `large type`).
- **Explicit:** Manually enforced using `(type)val` or `static_cast<type>(val)`.

### 4. Operators Breakdown

- **Arithmetic:** `+`, `-`, `*`, `/`, `%`
- **Relational:** `==`, `!=`, `>`, `<`, `>=`, `<=`
- **Logical:** `&&` (AND), `||` (OR), `!` (NOT)
- **Unary:** Pre-increment (`++a`), Post-increment (`a++`), Pre-decrement (`--a`), Post-decrement (`a--`)

---

## 📘 Lecture 03: Conditional Statements & Loops

### 1. Conditional Logic

- `if-else` and `else-if` ladders for multi-branch decisions.
- **Ternary Operator:** `condition ? exp1 : exp2;`
- **ASCII Checking:** `'A'-'Z'` ($65\text{--}90$) and `'a'-'z'` ($97\text{--}122$).

### 2. Iteration (Loops)

- **`while` Loop:** Entry-controlled loop.
- **`for` Loop:** Standard counter loop (`initialization; condition; updation`).
- **`do-while` Loop:** Exit-controlled loop (guaranteed to run at least once).

### 3. Prime Number Check ($O(\sqrt{N})$)

```cpp
#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

```

---

## 📘 Lecture 04: Patterns

Essential patterns for mastering 2D grid navigation and nested loop controls.

### 1. Square & Triangle Patterns

- **Square Matrix:** Outer loop rows ($i$), inner loop columns ($j$).
- **Star/Number Triangle:** Inner loop runs up to current row ($j \le i$).
- **Reverse Number Triangle:** Inner loop counts downward from $i$ to $1$.

### 2. Floyd's Triangle & Symmetric Inversions

- **Floyd's Triangle:** Continuous counter incrementing through row-column iterations.
- **Inverted Triangles:** Space management loop followed by character/number loop.
- **Advanced Symmetric Shapes:** Palindromic Pyramids, Hollow Diamonds, and Butterfly patterns.

---

## 📘 Lecture 05: Functions

### 1. Parameters vs. Arguments

> 💡 **Memory Trick:**
> **P**arameter $\rightarrow$ **P**laceholder (Variable in function signature)
> **A**rgument $\rightarrow$ **A**ctual value (Real data passed during call)

### 2. Call Stack & Pass by Value

- Functions execute inside dedicated stack frames.
- **Pass by Value:** A duplicate copy of the argument is passed. Modifications inside the function do not mutate variables in `main()`.

### 3. Core Algorithms

- **Sum of Digits:** Extract last digit via `% 10`, reduce via `/ 10`.
- **Binomial Coefficient ($nCr$):** $\frac{n!}{r! \times (n - r)!}$ using reusable `factorial()` functions.
- **Fibonacci Term Generator:** Linear state iteration using `prev1` and `prev2`.

---

## 📘 Lecture 06: Binary Number System

### 1. Number Conversions

- **Decimal to Binary:** Repeated division by $2$, recording remainders bottom-to-top.
- **Binary to Decimal:** Multiplying bits by successive powers of $2$ ($2^0, 2^1, 2^2, \dots$).

### 2. 2's Complement Representation (Negative Numbers)

1. Write positive magnitude in binary.
2. Invert all bits (**1's Complement**).
3. Add $1$ (**2's Complement**).

```text
Example: -8 (8-bit representation)
  +8 Magnitude : 0000 1000
  1's Compl.   : 1111 0111
  + 1          :         1
  ------------------------
  -8 in Binary : 1111 1000

```

---

## 📘 Lecture 07: Bitwise Operators, Data Type Modifiers & More

### 1. Bitwise Operations & Shifts

- `&` (AND), `|` (OR), `^` (XOR), `~` (NOT)
- **Left Shift (`a << b`):** $a \times 2^b$
- **Right Shift (`a >> b`):** $\lfloor a / 2^b \rfloor$

### 2. Key Bitwise Tricks

- **Power of 2 Check ($O(1)$ without loops):**

```cpp
bool isPowerOfTwo = (n > 0) && ((n & (n - 1)) == 0);

```

### 3. Operator Precedence Hierarchy

`Unary (!, ~, ++)` $\rightarrow$ `Arithmetic (*, /, %, +, -)` $\rightarrow$ `Relational` $\rightarrow$ `Equality` $\rightarrow$ `Logical (&&, ||)` $\rightarrow$ `Assignment`

### 4. Data Type Modifiers & Scope

- **Modifiers:** `short`, `long`, `long long`, `signed`, `unsigned`
- **Scope:** Local (block-level lifetime) vs. Global (program lifetime).

---

## 📘 Lecture 08: Array Data Structure (Part 1)

### 1. Core Properties & Syntax

- **Linear & Homogeneous:** Holds elements of the exact same data type in contiguous memory.
- **0-Indexed:** First element sits at index `0`, last element at index `size - 1`.

```cpp
int arr[5] = {10, 20, 30, 40, 50};
int size = sizeof(arr) / sizeof(arr[0]);

```

### 2. Smallest & Largest Element in an Array

Using `INT_MAX` and `INT_MIN` from `<climits>`:

```cpp
int smallest = INT_MAX, largest = INT_MIN;
for (int i = 0; i < size; i++) {
    smallest = min(smallest, arr[i]);
    largest = max(largest, arr[i]);
}

```

### 3. Arrays and Pass by Reference

Arrays decay to a base pointer when passed to functions. Any modification directly mutates the original array in memory.

### 4. Linear Search ($O(N)$)

```cpp
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) return i;
    }
    return -1;
}

```

### 5. Reverse an Array (2-Pointer Approach - $O(N)$)

```cpp
void reverseArray(int arr[], int size) {
    int start = 0, end = size - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

```

---

## 📘 Lecture 09: Vectors in C++ (Arrays Part 2)

### 1. Vector Initialization & Syntax

Vectors are sequence containers representing dynamic arrays that automatically handle their own storage allocation.

```cpp
#include <vector>

vector<int> vec1;             // Empty vector
vector<int> vec2 = {1, 2, 3}; // Initializer list
vector<int> vec3(3, 0);       // Size 3, initialized with 0 -> {0, 0, 0}

```

### 2. Common Vector Functions

| Method               | Description                                                 | Time Complexity  |
| -------------------- | ----------------------------------------------------------- | ---------------- |
| `vec.size()`         | Returns current number of elements                          | $O(1)$           |
| `vec.capacity()`     | Returns total allocated memory capacity                     | $O(1)$           |
| `vec.push_back(val)` | Inserts an element at the back (doubles capacity when full) | $O(1)$ amortized |
| `vec.pop_back()`     | Deletes the last element                                    | $O(1)$           |
| `vec.front()`        | Returns reference to the first element                      | $O(1)$           |
| `vec.back()`         | Returns reference to the last element                       | $O(1)$           |
| `vec.at(idx)`        | Bounds-checked element access                               | $O(1)$           |

### 3. Static vs. Dynamic Memory Allocation

- **Static Allocation (Arrays):** Memory allocated on the **Stack** at compile-time with a fixed, immutable size.
- **Dynamic Allocation (Vectors):** Memory allocated on the **Heap** at run-time, automatically expanding as elements are pushed.

### 4. Size vs. Capacity Growth

When `vec.size() == vec.capacity()`, calling `push_back()` triggers an internal reallocation:

- It allocates a new memory block with **$2\times$ capacity**.
- Copies existing elements over and deallocates the previous block.

### 5. Algorithmic Problem: Single Number (LeetCode 136)

Given an array where every element appears twice except one, find the single element using XOR properties:

- $n \oplus n = 0$
- $n \oplus 0 = n$

```cpp
int singleNumber(const vector<int>& nums) {
    int uniqueVal = 0;
    for (int val : nums) {
        uniqueVal ^= val;
    }
    return uniqueVal;
}

```

---

⭐ _If you find this repository helpful, consider leaving a star!_

```

```
