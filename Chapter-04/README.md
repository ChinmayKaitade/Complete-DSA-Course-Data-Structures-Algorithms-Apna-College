# 📘 Lecture 04: Pattern Printing Problems

Mastering patterns builds solid mental models for nested loops, 2D coordinates `(i, j)`, row-column mapping, and space-to-character ratio calculations.

---

## 📐 General Blueprint for Patterns

1. **Outer Loop (`i`):** Controls the number of rows (`1` to `n` or `0` to `n-1`).
2. **Inner Loop 1 (Spaces):** Controls leading whitespace if applicable.
3. **Inner Loop 2 (Columns/Characters):** Prints symbols, numbers, or characters.
4. **Line Break:** `cout << endl;` executes after inner loops finish for each row.

---

## 🟦 1. Square Patterns

### 🔹 Repeated Number Matrix ($n=4$)

```text
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4

```

```cpp
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
        cout << j << " ";
    }
    cout << endl;
}

```

---

### 🔹 Continuous Counting Matrix ($n=3$)

```text
1 2 3
4 5 6
7 8 9

```

```cpp
int count = 1;
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
        cout << count++ << " ";
    }
    cout << endl;
}

```

---

## 🔺 2. Triangle Patterns

### 🔹 Simple Star Triangle ($n=4$)

```text
*
* *
* * *
* * * *

```

```cpp
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
        cout << "* ";
    }
    cout << endl;
}

```

---

### 🔹 Same Row Number Triangle ($n=4$)

```text
1
2 2
3 3 3
4 4 4 4

```

```cpp
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
        cout << i << " ";
    }
    cout << endl;
}

```

---

### 🔹 Reverse Number Triangle ($n=4$)

```text
1
2 1
3 2 1
4 3 2 1

```

```cpp
for (int i = 1; i <= n; i++) {
    for (int j = i; j >= 1; j--) {
        cout << j << " ";
    }
    cout << endl;
}

```

---

### 🔹 Reverse Character Triangle (Homework) ($n=4$)

```text
A
B A
C B A
D C B A

```

```cpp
for (int i = 1; i <= n; i++) {
    for (char ch = 'A' + i - 1; ch >= 'A'; ch--) {
        cout << ch << " ";
    }
    cout << endl;
}

```

---

## 🔢 3. Floyd’s Triangle Patterns

### 🔹 Floyd's Number Triangle ($n=4$)

```text
1
2 3
4 5 6
7 8 9 10

```

```cpp
int count = 1;
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
        cout << count++ << " ";
    }
    cout << endl;
}

```

---

### 🔹 Floyd's Character Triangle (Homework) ($n=4$)

```text
A
B C
D E F
G H I J

```

```cpp
char ch = 'A';
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
        cout << ch++ << " ";
    }
    cout << endl;
}

```

---

## 🔽 4. Inverted Triangle Patterns

### 🔹 Inverted Number Shift ($n=4$)

```text
1 1 1 1
  2 2 2
    3 3
      4

```

```cpp
for (int i = 1; i <= n; i++) {
    // Spaces
    for (int j = 1; j < i; j++) {
        cout << "  ";
    }
    // Numbers
    for (int j = 1; j <= n - i + 1; j++) {
        cout << i << " ";
    }
    cout << endl;
}

```

---

### 🔹 Inverted Character Shift (Homework) ($n=4$)

```text
A A A A
  B B B
    C C
      D

```

```cpp
for (int i = 1; i <= n; i++) {
    // Spaces
    for (int j = 1; j < i; j++) {
        cout << "  ";
    }
    // Characters
    char ch = 'A' + i - 1;
    for (int j = 1; j <= n - i + 1; j++) {
        cout << ch << " ";
    }
    cout << endl;
}

```

---

## 🏔️ 5. Advanced Symmetric Patterns

### 🔹 Full Palindromic Number Pyramid ($n=4$)

```text
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1

```

```cpp
for (int i = 1; i <= n; i++) {
    // Spaces
    for (int j = 1; j <= n - i; j++) cout << "  ";
    // Ascending numbers
    for (int j = 1; j <= i; j++) cout << j << " ";
    // Descending numbers
    for (int j = i - 1; j >= 1; j--) cout << j << " ";
    cout << endl;
}

```

---

### 🔹 Hollow Diamond Pattern ($n=4$)

```text
      *
    *   *
  *       *
*           *
  *       *
    *   *
      *

```

```cpp
// Top Half
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i; j++) cout << " ";
    cout << "*";
    if (i > 1) {
        for (int j = 1; j <= 2 * i - 3; j++) cout << " ";
        cout << "*";
    }
    cout << endl;
}
// Bottom Half
for (int i = n - 1; i >= 1; i--) {
    for (int j = 1; j <= n - i; j++) cout << " ";
    cout << "*";
    if (i > 1) {
        for (int j = 1; j <= 2 * i - 3; j++) cout << " ";
        cout << "*";
    }
    cout << endl;
}

```

---

### 🔹 Butterfly Pattern ($n=4$)

```text
*             *
* *         * *
* * *     * * *
* * * * * * * *
* * * * * * * *
* * *     * * *
* *         * *
*             *

```

```cpp
// Upper Half
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) cout << "*";
    for (int j = 1; j <= 2 * (n - i); j++) cout << " ";
    for (int j = 1; j <= i; j++) cout << "*";
    cout << endl;
}
// Lower Half
for (int i = n; i >= 1; i--) {
    for (int j = 1; j <= i; j++) cout << "*";
    for (int j = 1; j <= 2 * (n - i); j++) cout << " ";
    for (int j = 1; j <= i; j++) cout << "*";
    cout << endl;
}

```
