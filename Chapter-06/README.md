# 📘 Chapter 06: Binary Number System & Bitwise Logic

Computers store and process all instructions in binary format (base-2). This module covers number base conversions, internal signed integer representations, and bitwise math.

---

## 🔟 1. Decimal to Binary Conversion

**Algorithm:** Repeated division by $2$, recording the remainder at each step until the quotient becomes $0$. The binary number is read from **bottom to top (MSB to LSB)**.

### 📌 Example: Convert $42_{10}$ to Binary

|  Division   | Quotient | Remainder (Bit) |          Position           |
| :---------: | :------: | :-------------: | :-------------------------: |
| $42 \div 2$ |   $21$   |      **0**      | LSB (Least Significant Bit) |
| $21 \div 2$ |   $10$   |      **1**      |              ↑              |
| $10 \div 2$ |   $5$    |      **0**      |              ↑              |
| $5 \div 2$  |   $2$    |      **1**      |              ↑              |
| $2 \div 2$  |   $1$    |      **0**      |              ↑              |
| $1 \div 2$  |   $0$    |      **1**      | MSB (Most Significant Bit)  |

$$\text{Reading bottom to top: } 42_{10} = \mathbf{101010_2}$$

### 💻 C++ Implementation: Decimal to Binary

```cpp
#include <iostream>
using namespace std;

int decToBinary(int decNum) {
    int ans = 0;
    int pow = 1; // 10^0, 10^1, 10^2... to build the base-10 printable number

    while (decNum > 0) {
        int rem = decNum % 2;
        decNum /= 2;

        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}

int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;
    cout << "Binary = " << decToBinary(num) << endl;
    return 0;
}

```

---

## 0️⃣ 2. Binary to Decimal Conversion

**Algorithm:** Multiply each binary digit by its corresponding power of $2$ ($2^0, 2^1, 2^2, \dots$) starting from the rightmost bit, then sum the results.

### 📌 Example: Convert $101010_2$ to Decimal

$$
\begin{aligned}
101010_2 &= (1 \times 2^5) + (0 \times 2^4) + (1 \times 2^3) + (0 \times 2^2) + (1 \times 2^1) + (0 \times 2^0) \\
&= 32 + 0 + 8 + 0 + 2 + 0 \\
&= \mathbf{42_{10}}
\end{aligned}
$$

### 💻 C++ Implementation: Binary to Decimal

```cpp
#include <iostream>
using namespace std;

int binToDecimal(int binNum) {
    int ans = 0;
    int pow = 1; // 2^0, 2^1, 2^2...

    while (binNum > 0) {
        int lastDigit = binNum % 10;
        ans += (lastDigit * pow);

        binNum /= 10;
        pow *= 2;
    }
    return ans;
}

int main() {
    int binary;
    cout << "Enter a binary number: ";
    cin >> binary;
    cout << "Decimal = " << binToDecimal(binary) << endl;
    return 0;
}

```

---

## 🔄 3. 1's Complement & 2's Complement

Computers use **2's Complement** to represent negative numbers because it simplifies arithmetic circuits (addition and subtraction use the same hardware) and eliminates the problem of having both $+0$ and $-0$.

- **1's Complement:** Invert all bits ($0 \rightarrow 1$ and $1 \rightarrow 0$).
- **2's Complement:** Take 1's complement and add $1$ ($\text{2's Complement} = \text{1's Complement} + 1$).

---

## 🎯 4. Walkthrough: Convert -8 to Binary & Back (8-bit system)

### 🔹 Step A: Convert -8 to Binary

1. **Write positive magnitude in 8-bit binary (+8):**

```text
+8 = 0000 1000

```

2. **Find 1's Complement (flip all bits):**

```text
Invert bits -> 1111 0111

```

3. **Add 1 to get 2's Complement:**

```text
  1111 0111  (1's Complement)
+         1
------------
  1111 1000  (-8 in 8-bit binary representation)

```

> 💡 **Sign Bit Note:** The leftmost bit (MSB) is `1`, indicating that the stored number is **negative**.

---

### 🔹 Step B: Reverse (1111 1000 -> Decimal)

When the MSB is `1`, the computer evaluates it as a negative value:

1. **Take 1's Complement of 1111 1000:**

```text
Invert bits -> 0000 0111

```

2. **Add 1 to find the positive magnitude:**

```text
  0000 0111
+         1
------------
  0000 1000  (which is 8 in decimal)

```

3. **Attach negative sign:**

```text
Result = -8

```

```

```
