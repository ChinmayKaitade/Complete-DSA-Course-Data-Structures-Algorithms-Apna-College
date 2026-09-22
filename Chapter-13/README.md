# 📘 Lecture 13: Binary Exponentiation & Stock Buy and Sell

This module covers two high-frequency interview problems: calculating power in logarithmic time via **Binary Exponentiation** ($x^n$) and maximizing trading profits in a single transaction via **Greedy Min-Tracking**.

---

## ⚡ Part 1: Compute $x^n$ (LeetCode 50: Pow(x, n))

A naive linear multiplication takes $O(n)$ time, leading to Time Limit Exceeded (TLE) when $n \approx 2^{31} - 1$. **Binary Exponentiation** reduces this to logarithmic time by halving the exponent at each step.

### 💡 Core Intuition & Mathematical Model

Any integer $n$ can be expressed in binary form. We can factor powers based on bit parity:

- If power is **even**: $x^n = (x^2)^{n/2}$
- If power is **odd**: $x^n = x \times (x^2)^{(n-1)/2}$

```text
Example: 2^10
10 in Binary = 1010_2

Step 1: binForm = 10 (even) -> x becomes 2^2 = 4,    binForm = 5
Step 2: binForm = 5  (odd)  -> ans *= 4, x becomes 4^2 = 16, binForm = 2
Step 3: binForm = 2  (even) -> x becomes 16^2 = 256, binForm = 1
Step 4: binForm = 1  (odd)  -> ans *= 256 (ans = 4 * 256 = 1024), binForm = 0
```

### ⚠️ Critical Edge Cases

1. **$n < 0$:** Invert base ($x = 1/x$) and make $n$ positive ($n = -n$).
2. **$n = -2^{31}$ (`INT_MIN`):** Inverting `INT_MIN` directly in a 32-bit signed integer causes overflow because `INT_MAX` is $2^{31} - 1$. We must cast `n` to `long long` before sign inversion.

---

### 💻 C++ Implementation: Pow(x, n)

- **Time Complexity:** $O(\log_2 n)$
- **Space Complexity:** $O(1)$

```cpp
#include <iostream>
using namespace std;

double myPow(double x, int n) {
    // Edge cases
    if (n == 0 || x == 1.0) return 1.0;
    if (x == 0.0) return 0.0;
    if (x == -1.0) return (n % 2 == 0) ? 1.0 : -1.0;

    // Use long long to prevent integer overflow when n = INT_MIN
    long long binForm = n;

    if (binForm < 0) {
        x = 1.0 / x;
        binForm = -binForm;
    }

    double ans = 1.0;

    while (binForm > 0) {
        if (binForm % 2 == 1) {
            ans *= x; // Multiply when current bit is 1
        }
        x *= x;       // Square the base
        binForm /= 2; // Right shift exponent
    }

    return ans;
}

int main() {
    double x = 2.0;
    int n = 10;
    cout << x << "^" << n << " = " << myPow(x, n) << endl; // Output: 1024
    return 0;
}

```

---

## 📈 Part 2: Best Time to Buy & Sell Stock (LeetCode 121)

Given an array `prices` where `prices[i]` is the stock price on day `i`, find the maximum profit possible from **a single transaction** (buy once, sell once in the future). If no profit is possible, return `0`.

---

### 📊 Approaches Comparison

| Approach                 | Technique                                 | Time Complexity | Space Complexity |
| ------------------------ | ----------------------------------------- | --------------- | ---------------- |
| 🔴 **Brute Force**       | Compare every pair $(i, j)$ where $j > i$ | $O(n^2)$        | $O(1)$           |
| 🟢 **Greedy / One-Pass** | Track minimum purchase price seen so far  | $O(n)$          | $O(1)$           |

---

### 💡 Optimal Approach: Running Minimum Tracker

To maximize `prices[sell] - prices[buy]`, the buy price must be as low as possible _before_ the sell day.

1. Maintain `bestBuy` initialized to `prices[0]`.
2. As we iterate through each day:

- Calculate potential profit: `prices[i] - bestBuy`.
- Update `maxProfit = max(maxProfit, potentialProfit)`.
- Update `bestBuy = min(bestBuy, prices[i])`.

---

### 💻 C++ Implementation: Best Time to Buy and Sell Stock

- **Time Complexity:** $O(n)$
- **Space Complexity:** $O(1)$

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProfit(const vector<int>& prices) {
    if (prices.empty()) return 0;

    int maxProfitVal = 0;
    int bestBuy = prices[0];

    for (size_t i = 1; i < prices.size(); i++) {
        if (prices[i] > bestBuy) {
            maxProfitVal = max(maxProfitVal, prices[i] - bestBuy);
        }
        bestBuy = min(bestBuy, prices[i]);
    }

    return maxProfitVal;
}

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << "Maximum Profit: " << maxProfit(prices) << endl; // Output: 5
    return 0;
}

```

---

### 🔍 Dry Run: Stock Buy and Sell

Input: `prices = [7, 1, 5, 3, 6, 4]`

| Day ($i$) | Price (`prices[i]`) | Current `bestBuy` | Potential Profit (`price - bestBuy`) | Updated `maxProfit` | Updated `bestBuy` |
| --------- | ------------------- | ----------------- | ------------------------------------ | ------------------- | ----------------- |
| Start     | `7`                 | `7`               | —                                    | `0`                 | `7`               |
| **Day 1** | `1`                 | `7`               | $1 - 7 = -6$ (No profit)             | `0`                 | **`1`**           |
| **Day 2** | `5`                 | `1`               | $5 - 1 = 4$                          | **`4`**             | `1`               |
| **Day 3** | `3`                 | `1`               | $3 - 1 = 2$                          | `4`                 | `1`               |
| **Day 4** | `6`                 | `1`               | $6 - 1 = 5$                          | **`5`**             | `1`               |
| **Day 5** | `4`                 | `1`               | $4 - 1 = 3$                          | `5`                 | `1`               |

🎯 **Maximum Profit = `5**`(Buy at`1`, Sell at `6`)
