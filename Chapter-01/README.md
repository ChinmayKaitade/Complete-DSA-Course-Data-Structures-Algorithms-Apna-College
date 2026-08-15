# 🚀 Lecture 01: Flowchart & Pseudocode | DSA Series in C++

> **Instructor:** Shradha Khapra Ma'am
> **Topic:** Building Logic with Flowcharts & Pseudocode

---

### 📌 Practice Questions & Pseudocode

---

#### 🟩 Practice Que 1: Area of Square

Calculates the total surface area for a given side length $a$.

```text
1. Input a
2. area = a * a
3. Print area
4. Exit

```

---

#### 🟦 Practice Que 2: Min of 2 Numbers

Compares two input values to find and display the smaller one.

```text
1. Input a, b
2. If a < b
      Print a
   Else
      Print b
3. Exit

```

---

#### 🟨 Practice Que 3: Is Number Odd or Even

Checks if the number leaves a remainder when divided by 2.

```text
1. Input n
2. If n % 2 == 0
      Print "Even"
   Else
      Print "Odd"
3. Exit

```

---

#### 🟧 Practice Que 4: Sum of Numbers from 1 to N

Iterates from 1 up to $N$ and accumulates the running total.

```text
1. Input N
2. count = 1, sum = 0
3. While count <= N
      sum = sum + count
      count = count + 1
4. Print sum
5. Exit

```

---

#### 🟥 Practice Que 5: Is Number Prime or Not

Checks divisibility against every integer from 2 up to $(n - 1)$.

```text
1. Input n
2. i = 2
3. While i <= (n - 1)
      If n % i == 0
         Print "Non-Prime"
         Exit
      Else
         i = i + 1
4. Print "Prime"
5. Exit

```

---

### 💡 Quick Logic Breakdown

| Problem              | Logic Type             | Key Operation / Operator   |
| -------------------- | ---------------------- | -------------------------- |
| **Area of Square**   | Sequential Arithmetic  | `*` (Multiplication)       |
| **Min of 2 Numbers** | Conditional Branching  | `<` (Comparison)           |
| **Odd or Even**      | Conditional Branching  | `%` (Modulo Operator)      |
| **Sum 1 to N**       | Iteration / Loop       | `while` loop + Accumulator |
| **Prime Check**      | Iteration + Early Exit | `while` loop + `%` check   |

### 📝 Homework Questions & Pseudocode

---

#### 🟩 Homework Que a: Simple Interest from Principal (P), Rate (R) & Time (T)

Calculates the interest earned using the standard simple interest formula.

```text
1. Input P, R, T
2. SI = (P * R * T) / 100
3. Print SI
4. Exit

```

---

#### 🟦 Homework Que b: Max of 2 Numbers

Compares two input numbers to find and display the larger value.

```text
1. Input a, b
2. If a > b
      Print a
   Else
      Print b
3. Exit

```

---

#### 🟧 Homework Que c: Factorial of a Number N

Multiplies all positive integers sequentially from 1 up to $N$.

```text
1. Input N
2. fact = 1, i = 1
3. While i <= N
      fact = fact * i
      i = i + 1
4. Print fact
5. Exit

```

---

#### 🟨 Homework Que d: Driving License Eligibility (Age >= 18)

Checks whether the person meets the minimum legal age requirement.

```text
1. Input age
2. If age >= 18
      Print "Eligible for driving license"
   Else
      Print "Not eligible for driving license"
3. Exit

```

---

### 💡 Quick Logic Breakdown

| Problem                 | Logic Type            | Key Operation / Operator           |
| ----------------------- | --------------------- | ---------------------------------- |
| **Simple Interest**     | Sequential Arithmetic | `*`, `/` (Standard Formula)        |
| **Max of 2 Numbers**    | Conditional Branching | `>` (Comparison)                   |
| **Factorial of N**      | Iteration / Loop      | `while` loop + Product Accumulator |
| **License Eligibility** | Conditional Branching | `>=` (Relational Operator)         |
