# 📘 Lecture 03: Conditional Statements & Loops

This lecture covers control flow mechanisms in C++: decision-making constructs (`if-else`, ternary operators), iteration techniques (`while`, `for`, `do-while`), nested looping logic, and prime number optimization.

---

## 🔀 1. Conditional Statements

Conditional statements execute specific blocks of code based on whether a boolean expression evaluates to `true` or `false`.

### 🔹 `if-else` & `else if` Ladder

```cpp
int marks = 85;

if (marks >= 90) {
    cout << "Grade A" << endl;
} else if (marks >= 75) {
    cout << "Grade B" << endl;
} else {
    cout << "Grade C" << endl;
}
```

### 🔹 Character Case Check (ASCII Values)

ASCII mapping is standard for character-based conditions:

- `'A'` to `'Z'` $\rightarrow$ `65` to `90`
- `'a'` to `'z'` $\rightarrow$ `97` to `122`

```cpp
char ch = 'g';

if (ch >= 'a' && ch <= 'z') {
    cout << "Lowercase Character\n";
} else if (ch >= 'A' && ch <= 'Z') {
    cout << "Uppercase Character\n";
} else {
    cout << "Not an alphabet\n";
}

```

---

## ⚡ 2. Ternary Operator (`?:`)

A shorthand alternative to simple `if-else` blocks.

**Syntax:** `condition ? expression_if_true : expression_if_false;`

```cpp
int n = 7;
cout << (n % 2 == 0 ? "Even" : "Odd") << endl;

```

---

## 🔁 3. Iterative Statements (Loops)

### 🔹 `while` Loop (Entry-Controlled)

Repeats a statement block as long as the specified condition remains `true`.

```cpp
// Print numbers from 1 to 500
int i = 1;
while (i <= 500) {
    cout << i << " ";
    i++;
}

```

---

### 🔹 `for` Loop (Standard Counter Loop)

Combines initialization, condition check, and loop variable updation in a single line.

**Syntax:**

```cpp
for (initialization; condition; updation) {
    // Loop body
}

```

```cpp
// Sum of all odd numbers from 1 to N
int n = 10, sumOdd = 0;
for (int i = 1; i <= n; i++) {
    if (i % 2 != 0) {
        sumOdd += i;
    }
}
cout << "Odd Sum = " << sumOdd << endl;

```

---

### 🔹 `do-while` Loop (Exit-Controlled)

Executes the code block **at least once** before evaluating the conditional expression.

```cpp
int count = 1;
do {
    cout << count << " ";
    count++;
} while (count <= 5);

```

---

## 🔍 4. Algorithm Spotlight: Prime Number Check

A prime number is divisible only by `1` and itself. Checking up to $\sqrt{N}$ optimizes time complexity from $O(N)$ to $O(\sqrt{N})$.

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1) {
        cout << "Not Prime" << endl;
        return 0;
    }

    bool isPrime = true;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    cout << (isPrime ? "Prime Number" : "Not Prime") << endl;
    return 0;
}

```

---

## 🌀 5. Nested Loops

A loop placed inside the body of another loop, commonly used for multidimensional data and pattern printing.

```cpp
for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= 3; j++) {
        cout << "(" << i << "," << j << ") ";
    }
    cout << endl;
}

```

---

## 📝 6. Homework Solutions & Practice

### 📌 Problem 1: Sum of Odd Numbers ($1$ to $N$) via `while` Loop

```cpp
int n = 15, i = 1, sum = 0;
while (i <= n) {
    if (i % 2 != 0) sum += i;
    i++;
}

```

### 📌 Problem 2: Sum of Even Numbers ($1$ to $N$) via `for` Loop

```cpp
int n = 20, sumEven = 0;
for (int i = 2; i <= n; i += 2) {
    sumEven += i;
}

```

### 📌 Problem 3: Sum of Numbers Divisible by 3 ($1$ to $N$)

```cpp
// Using for loop
int n = 30, sumDiv3 = 0;
for (int i = 3; i <= n; i += 3) {
    sumDiv3 += i;
}

// Using while loop
int j = 3, whileSum = 0;
while (j <= n) {
    whileSum += j;
    j += 3;
}

```

### 📌 Problem 4: Factorial of $N$ ($N!$)

```cpp
int n = 5;
long long factFor = 1;
for (int i = 1; i <= n; i++) {
    factFor *= i;
}

// Using while loop
long long factWhile = 1;
int k = 1;
while (k <= n) {
    factWhile *= k;
    k++;
}

```
