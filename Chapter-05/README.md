# 📘 Lecture 05: Functions, Parameters & Memory Management

Functions allow modular programming, code reusability, and clean abstraction. This section covers function signatures, parameter passing, the call stack memory model, and standard algorithmic implementations.

---

## 🛠️ 1. Function Syntax & Structure

```cpp
returnType functionName(type param1, type param2, ...) {
    // Function body / operations
    return value; // (Omit if returnType is void)
}

```

---

## 💡 2. Parameters vs. Arguments (Memory Trick)

| Concept       | Definition                                               | Where it lives                    | Example           |
| ------------- | -------------------------------------------------------- | --------------------------------- | ----------------- |
| **Parameter** | Variable defined in the function signature (**Formal**)  | In the **Prototype / Definition** | `int sumN(int n)` |
| **Argument**  | Real value or expression passed during call (**Actual**) | In the **Function Call**          | `sumN(5)`         |

> 🧠 **Quick Memory Trick:**
>
> - **P**arameter $\rightarrow$ **P**laceholder (Variable name defined at the top)
> - **A**rgument $\rightarrow$ **A**ctual value (Real data passed during call)

---

## 🧠 3. Functions in Memory & Pass by Value

When a function executes, C++ allocates a separate stack frame for it on the **Call Stack**:

- **Pass by Value:** A **copy** of the original argument is passed to the function's parameter.
- Modifications made inside the function scope do **not** affect the original variable in `main()`.
- Once the function hits `return`, its local variables are destroyed and its stack frame is popped.

```
+-----------------------------------+
|  factorial() Frame [fact, n=4]    |  <-- Pushed when called, popped when done
+-----------------------------------+
|  main() Frame [n=8, r=2]          |  <-- Stays alive until program terminates
+-----------------------------------+
            CALL STACK

```

---

## 💻 4. Core Implementations & Algorithms

### 🔹 1. Sum of Numbers ($1$ to $N$)

```cpp
#include <iostream>
using namespace std;

int sumN(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    cout << "Sum (1 to 5): " << sumN(5) << endl;
    cout << "Sum (1 to 10): " << sumN(10) << endl;
    return 0;
}

```

---

### 🔹 2. Factorial of a Number ($N!$)

```cpp
#include <iostream>
using namespace std;

int factorialN(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    cout << "4! = " << factorialN(4) << endl;
    cout << "5! = " << factorialN(5) << endl;
    return 0;
}

```

---

### 🔹 3. Sum of Digits of a Number

Extracts the last digit using `% 10` and truncates the number using `/ 10`.

```cpp
#include <iostream>
using namespace std;

int sumOfDigits(int num) {
    int digitSum = 0;
    while (num > 0) {
        int lastDigit = num % 10;
        digitSum += lastDigit;
        num /= 10;
    }
    return digitSum;
}

int main() {
    cout << "Sum of Digits (2356) = " << sumOfDigits(2356) << endl; // Output: 16
    return 0;
}

```

---

### 🔹 4. Binomial Coefficient ($nCr$)

Uses mathematical modularity by reusing the `factorial()` function:

$$\binom{n}{r} = \frac{n!}{r! \times (n - r)!}$$

```cpp
#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r) {
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n - r);

    return fact_n / (fact_r * fact_nmr);
}

int main() {
    int n = 8, r = 2;
    cout << "8C2 = " << nCr(n, r) << endl; // Output: 28
    return 0;
}

```
