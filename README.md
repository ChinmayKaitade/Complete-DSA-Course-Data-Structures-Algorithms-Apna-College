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

| #      | Topic                                       | Status         |
| ------ | ------------------------------------------- | -------------- |
| **01** | **Flowcharts, Pseudocode & Setup**          | ✅ Completed   |
| **02** | **Variables, Data Types & Operators**       | ✅ Completed   |
| **03** | **Conditional Statements & Loops**          | ✅ Completed   |
| **04** | **Patterns (Logic Building)**               | ✅ Completed   |
| **05** | **Functions, Scope & Memory Stack**         | ✅ Completed   |
| **06** | **Binary Number System & Conversions**      | ✅ Completed   |
| **07** | **Bitwise Operators & Data Type Modifiers** | ✅ Completed   |
| **08** | Arrays (Part 1)                             | ⏳ In Progress |

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

⭐ _If you find this repository helpful, consider leaving a star!_



