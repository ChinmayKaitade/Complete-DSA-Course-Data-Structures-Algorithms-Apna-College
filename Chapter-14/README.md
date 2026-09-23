# 📘 Lecture 14: Container With Most Water (LeetCode 11)

Given an integer array `height` of length $n$, where each element represents the height of a vertical line on a 2D plane, find two lines that together with the x-axis form a container that holds the maximum possible water volume.

---

## 🎯 1. Problem Formulation & Geometric Formula

The amount of water trapped between any two indices $i$ and $j$ ($j > i$) forms a rectangle:

$$\text{Width } (w) = j - i$$

$$\text{Usable Height } (h) = \min(\text{height}[i], \text{height}[j])$$

$$\text{Area (Water Volume)} = w \times h = (j - i) \times \min(\text{height}[i], \text{height}[j])$$

> 💡 **Limiting Factor:** The capacity is always bottlenecked by the **shorter** line; any water above it simply spills over.

---

## 📊 2. Approaches Comparison

| Approach                      | Strategy                                                              | Time Complexity | Space Complexity |
| :---------------------------- | :-------------------------------------------------------------------- | :-------------: | :--------------: |
| 🔴 **Brute Force**            | Evaluate all possible line pairs $(i, j)$ using nested loops          |    $O(n^2)$     |      $O(1)$      |
| 🟢 **Optimal (Two Pointers)** | Maximize width first, then greedily shift the shorter boundary inward |     $O(n)$      |      $O(1)$      |

---

## 🔴 3. Approach 1: Brute Force ($O(n^2)$)

Check every possible pair of lines and compute the trapped area:

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxAreaBrute(const vector<int>& height) {
    int maxWater = 0;
    int n = height.size();

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int w = j - i;
            int ht = min(height[i], height[j]);
            int currWater = w * ht;

            maxWater = max(maxWater, currWater);
        }
    }
    return maxWater;
}

int main() {
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << "Maximum Water (Brute Force): " << maxAreaBrute(height) << endl; // Output: 49
    return 0;
}
```

- ⚠️ **Verdict:** Results in **Time Limit Exceeded (TLE)** on LeetCode when $n = 10^5$.

---

## 🟢 4. Approach 2: Optimal Two-Pointer Strategy ($O(n)$)

### 💡 Core Intuition & Pointer Movement Proof

1. Start with the widest possible base: `lp = 0` (left pointer) and `rp = n - 1` (right pointer).
2. Every subsequent step reduces the width ($w = rp - lp$) by $1$.
3. To compensate for losing width, the effective height **must increase**.
4. The container's height is determined strictly by the **shorter line**:

- If you move the taller line inward, width decreases and effective height either decreases or stays capped by the shorter line $\rightarrow$ **Area is guaranteed to decrease**.
- Therefore, always shift the pointer pointing to the **shorter height** inward in search of a taller barrier.

```text
Decision Rule:
height[lp] < height[rp]  ==>  lp++  (search for a taller left line)
height[lp] >= height[rp] ==>  rp--  (search for a taller right line)
```

---

### 💻 C++ Implementation

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxArea(const vector<int>& height) {
    int maxWater = 0;
    int lp = 0;
    int rp = height.size() - 1;

    while (lp < rp) {
        int w = rp - lp;
        int ht = min(height[lp], height[rp]);
        int currWater = w * ht;

        maxWater = max(maxWater, currWater);

        // Discard the shorter boundary
        if (height[lp] < height[rp]) {
            lp++;
        } else {
            rp--;
        }
    }

    return maxWater;
}

int main() {
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << "Maximum Water (Optimal): " << maxArea(height) << endl; // Output: 49
    return 0;
}
```

---

## 🔍 5. Dry Run Trace

Input: `height = [1, 8, 6, 2, 5, 4, 8, 3, 7]`

| Step  | `lp` (val) | `rp` (val) | Width ($rp - lp$) | Height $\min(l, r)$ | Water Area        | `maxWater` | Pointer Shifted        |
| ----- | ---------- | ---------- | ----------------- | ------------------- | ----------------- | ---------- | ---------------------- |
| **1** | `0` (1)    | `8` (7)    | $8 - 0 = 8$       | $\min(1, 7) = 1$    | $8 \times 1 = 8$  | **`8`**    | `lp++` (since $1 < 7$) |
| **2** | `1` (8)    | `8` (7)    | $8 - 1 = 7$       | $\min(8, 7) = 7$    | $7 \times 7 = 49$ | **`49`**   | `rp--` (since $7 < 8$) |
| **3** | `1` (8)    | `7` (3)    | $7 - 1 = 6$       | $\min(8, 3) = 3$    | $6 \times 3 = 18$ | `49`       | `rp--` (since $3 < 8$) |
| **4** | `1` (8)    | `6` (8)    | $6 - 1 = 5$       | $\min(8, 8) = 8$    | $5 \times 8 = 40$ | `49`       | `rp--` (since equal)   |
| **5** | `1` (8)    | `5` (4)    | $5 - 1 = 4$       | $\min(8, 4) = 4$    | $4 \times 4 = 16$ | `49`       | `rp--` (since $4 < 8$) |
| **6** | `1` (8)    | `4` (5)    | $4 - 1 = 3$       | $\min(8, 5) = 5$    | $3 \times 5 = 15$ | `49`       | `rp--` (since $5 < 8$) |
| **7** | `1` (8)    | `3` (2)    | $3 - 1 = 2$       | $\min(8, 2) = 2$    | $2 \times 2 = 4$  | `49`       | `rp--` (since $2 < 8$) |
| **8** | `1` (8)    | `2` (6)    | $2 - 1 = 1$       | $\min(8, 6) = 6$    | $1 \times 6 = 6$  | `49`       | `rp--` (since $6 < 8$) |

🎯 Peak Container Volume = `49**` (Formed between index `1` with height `8` and index `8` with height `7`).
