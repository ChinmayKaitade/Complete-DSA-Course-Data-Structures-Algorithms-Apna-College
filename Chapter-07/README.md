# 📘 Lecture 07: Bitwise Operators, Data Type Modifiers & Scope

This module covers bit-level manipulation, arithmetic shortcuts with shifts, operator precedence hierarchies, variable scope rules, and data type modifiers in C++.

---

## ⚡ 1. Bitwise Operators

Bitwise operators manipulate individual bits of integer data types directly in binary representation.

| Operator | Name            | Description                                   | Rule                     |
| :------: | :-------------- | :-------------------------------------------- | :----------------------- |
|   `&`    | **Bitwise AND** | Yields `1` if both corresponding bits are `1` | `1 & 1 = 1`, else `0`    |
|   `\|`   | **Bitwise OR**  | Yields `1` if at least one bit is `1`         | `0 \| 0 = 0`, else `1`   |
|   `^`    | **Bitwise XOR** | Yields `1` if bits are different; `0` if same | `1 ^ 0 = 1`, `1 ^ 1 = 0` |
|   `~`    | **Bitwise NOT** | Inverts every bit (1's complement)            | `~0 = 1`, `~1 = 0`       |
|   `<<`   | **Left Shift**  | Shifts bits left by $b$ positions             | Multiplies by $2^b$      |
|   `>>`   | **Right Shift** | Shifts bits right by $b$ positions            | Divides by $2^b$         |

---

### 🔹 Shift Operator Shortcuts

- **Left Shift (`a << b`):**  
  Appends $b$ zero bits on the right side.
  $$\text{Formula: } a \times 2^b$$
  _Example:_ `5 << 2` $\rightarrow 5 \times 2^2 = 5 \times 4 = \mathbf{20}$

- **Right Shift (`a >> b`):**  
  Discards $b$ bits from the right side.
  $$\text{Formula: } \left\lfloor \frac{a}{2^b} \right\rfloor$$
  _Example:_ `20 >> 2` $\rightarrow \frac{20}{2^2} = \frac{20}{4} = \mathbf{5}$

---

## 📊 2. Operator Precedence & Associativity

When expressions contain multiple operators, precedence determines evaluation priority.

|  Rank   | Category / Operators           | Description            |   Associativity   |
| :-----: | :----------------------------- | :--------------------- | :---------------: |
| **1st** | `!`, `+`, `-`, `++`, `--`, `~` | Unary Operators        | **Right to Left** |
| **2nd** | `*`, `/`, `%`                  | Multiplicative         | **Left to Right** |
| **3rd** | `+`, `-`                       | Additive               | **Left to Right** |
| **4th** | `<`, `<=`, `>`, `>=`           | Relational Comparisons | **Left to Right** |
| **5th** | `==`, `!=`                     | Equality Comparisons   | **Left to Right** |
| **6th** | `&&`                           | Logical AND            | **Left to Right** |
| **7th** | `\|\|`                         | Logical OR             | **Left to Right** |
| **8th** | `=`, `+=`, `-=`, `*=`, etc.    | Assignment Operators   | **Right to Left** |

---

## 🌐 3. Scope of Variables

Scope defines the region of a program where a declared variable is accessible and alive.

### 🔹 Local Scope

- Declared inside a specific block `{ ... }`, function, loop, or conditional statement.
- Allocated when the block begins; destroyed once execution exits the block.

```cpp
void sample() {
    int x = 10; // Local to sample()
    if (x > 5) {
        int y = 20; // Local to if block
        cout << x + y << endl;
    }
    // y is inaccessible here
}
```

### 🔹 Global Scope

- Declared outside all functions and classes.
- Accessible throughout the entire translation unit from declaration onward.
- Remains in memory for the lifetime of the program.

```cpp
int globalVar = 100; // Global scope

void printVal() {
    cout << globalVar << endl; // Accessible
}
```

---

## 🔧 4. Data Type Modifiers

Modifiers alter the default memory size or signedness of primitive integer and character data types.

| Modifier    | Target Types    | Effect on Size / Range                              | Typical Size (64-bit)  |
| ----------- | --------------- | --------------------------------------------------- | ---------------------- |
| `short`     | `int`           | Decreases storage size                              | **2 bytes**            |
| `long`      | `int`, `double` | Increases storage size                              | **4 or 8 bytes**       |
| `long long` | `int`           | Guarantees extended 64-bit range                    | **8 bytes**            |
| `signed`    | `int`, `char`   | Allows both positive and negative values (default)  | Standard               |
| `unsigned`  | `int`, `char`   | Restricts to non-negative values ($0$ to $2^N - 1$) | Doubles positive range |

```cpp
unsigned int positiveOnly = 4000000000U; // Valid (range 0 to ~4.29 billion)
long long bigNumber = 9223372036854775807LL;
```

## 📝 Homework Solutions: Bitwise Tricks & Integer Reversal

Structured C++ solutions covering both iterative and bitwise approaches for checking powers of 2, along with complete digit-reversal logic.

---

### 🔹 1. Check if a Number is a Power of 2

#### Method A: Using a Loop

Repeatedly divide the number by $2$ as long as it is evenly divisible. If we reach $1$, it is a power of 2.

- **Time Complexity:** $O(\log_2 N)$
- **Space Complexity:** $O(1)$

```cpp
#include <iostream>
using namespace std;

bool isPowerOfTwoLoop(int n) {
    if (n <= 0) return false;

    while (n % 2 == 0) {
        n /= 2;
    }

    return (n == 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << (isPowerOfTwoLoop(n) ? "Power of 2" : "NOT a power of 2") << endl;
    return 0;
}
```



---

#### Method B: Using Bitwise Operations (No Loops)

A positive power of 2 has **exactly one set bit (`1`)** in binary. Subtracting $1$ flips that bit to $0$ and turns all lower trailing zeros to $1$.

- Example ($n = 16$):

$$16 = 10000_2$$

$$15 = 01111_2$$

$$16 \ \& \ 15 = 00000_2 \ (\mathbf{0})$$

- **Time Complexity:** $O(1)$
- **Space Complexity:** $O(1)$

```cpp
#include <iostream>
using namespace std;

bool isPowerOfTwoBits(int n) {
    // Condition: n must be positive and have only one bit set
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << (isPowerOfTwoBits(n) ? "Power of 2" : "NOT a power of 2") << endl;
    return 0;
}
```

---

### 🔹 2. Function to Reverse an Integer $n$

Extract each digit from the right using `% 10`, append it to the reversed result (`rev = rev * 10 + digit`), and strip the last digit using `/ 10`. Includes 32-bit signed integer overflow safeguards (`INT_MAX` / `INT_MIN`).

- **Time Complexity:** $O(\log_{10} N)$
- **Space Complexity:** $O(1)$

```cpp
#include <iostream>
#include <climits>
using namespace std;

int reverseInteger(int n) {
    int rev = 0;

    while (n != 0) {
        int lastDigit = n % 10;

        // Overflow checks for 32-bit signed integer range [-2^31, 2^31 - 1]
        if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && lastDigit > 7)) return 0;
        if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && lastDigit < -8)) return 0;

        rev = (rev * 10) + lastDigit;
        n /= 10;
    }

    return rev;
}

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    cout << "Reversed Integer: " << reverseInteger(n) << endl;
    return 0;
}
```

