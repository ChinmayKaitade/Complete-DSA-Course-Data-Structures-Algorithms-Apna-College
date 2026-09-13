# 🚀 Kadane's Algorithm | Maximum Subarray Sum

> 📌 **DSA Concept:** Arrays & Dynamic Programming
> 🎯 **Problem:** Find the maximum sum of a contiguous subarray.

---

## 📖 What is a Subarray?

A **subarray** is a contiguous part of an array.

For example:

```text
Array = [1, 2, 3, 4, 5]
```

### 🔹 Possible Subarrays

```text
[1] [2] [3] [4] [5]

[1,2] [2,3] [3,4] [4,5]

[1,2,3] [2,3,4] [3,4,5]

[1,2,3,4] [2,3,4,5]

[1,2,3,4,5]
```

### 📐 Total Number of Subarrays

For an array of size `n`:

```text
Number of subarrays = n × (n + 1) / 2
```

For `n = 5`:

```text
5 × 6 / 2 = 15 subarrays
```

---

# 🎯 Maximum Subarray Sum

Given an array, find the **maximum possible sum of a contiguous subarray**.

### Example

```text
Input:
[-2, 1, -3, 4, -1, 2, 1, -5, 4]

Maximum Subarray:
[4, -1, 2, 1]

Maximum Sum:
4 + (-1) + 2 + 1 = 6
```

✅ **Answer = 6**

---

# 🛠️ Approaches

There are mainly three ways to solve the Maximum Subarray Sum problem:

| Approach              | Time Complexity |  Space |
| --------------------- | --------------: | -----: |
| 🔴 Brute Force        |         `O(n³)` | `O(1)` |
| 🟡 Better Approach    |         `O(n²)` | `O(1)` |
| 🟢 Kadane's Algorithm |          `O(n)` | `O(1)` |

⭐ **Kadane's Algorithm is the most optimized approach.**

---

# 🧠 Kadane's Algorithm

Kadane's Algorithm finds the maximum subarray sum in **linear time `O(n)`**.

It maintains two variables:

```cpp
int currSum = 0;
int maxSum = INT_MIN;
```

### 🔹 `currSum`

Stores the sum of the **current subarray**.

### 🔹 `maxSum`

Stores the **maximum subarray sum found so far**.

---

## ⚙️ Algorithm

For every element:

```cpp
currSum += val;

maxSum = max(currSum, maxSum);
```

If `currSum` becomes negative:

```cpp
if (currSum < 0) {
    currSum = 0;
}
```

### 💡 Why Reset `currSum`?

If the current sum becomes negative, carrying that negative sum into the next subarray will only decrease the future sum.

Therefore, we discard it and start a new subarray.

---

# 💻 C++ Implementation

```cpp
#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int currSum = 0;
    int maxSum = INT_MIN;

    for (int val : nums) {

        currSum += val;

        // Update maximum sum
        maxSum = max(currSum, maxSum);

        // Reset if current sum becomes negative
        if (currSum < 0) {
            currSum = 0;
        }
    }

    cout << "Maximum Subarray Sum: " << maxSum << endl;

    return 0;
}
```

### 🖥️ Output

```text
Maximum Subarray Sum: 6
```

---

# 🔍 Dry Run

Consider:

```text
[-2, 1, -3, 4, -1, 2, 1]
```

| Element | `currSum` | `maxSum` |
| :-----: | --------: | -------: |
|  `-2`   |  `-2 → 0` |     `-2` |
|   `1`   |       `1` |      `1` |
|  `-3`   |  `-2 → 0` |      `1` |
|   `4`   |       `4` |      `4` |
|  `-1`   |       `3` |      `4` |
|   `2`   |       `5` |      `5` |
|   `1`   |       `6` |      `6` |

🎯 **Final Answer = `6`**

---

# 🧩 Key Concept

The basic logic is:

```text
➕ Keep adding elements
        ↓
📈 Update maximum sum
        ↓
❌ If current sum < 0
        ↓
🔄 Reset current sum to 0
```

In short:

> **Keep adding → Update maximum → Reset when negative**

---

# ⏱️ Complexity

### 🚀 Time Complexity

```text
O(n)
```

We traverse the array only once.

### 💾 Space Complexity

```text
O(1)
```

Only a few variables are used.

---

# 📝 Important Notes

- ✅ A subarray must contain **contiguous elements**.
- ❌ Subarray is different from a subsequence.
- ⚡ Kadane's Algorithm solves Maximum Subarray Sum in `O(n)`.
- 💡 `INT_MIN` is useful when the array can contain all negative numbers.
- 🎯 The algorithm works with both positive and negative integers.

---

## 🌟 Remember

```text
Kadane's Algorithm
        ↓
Keep Adding ➕
        ↓
Update Maximum 📈
        ↓
Reset if Negative 🔄
```

⭐ **One pass. O(n) time. O(1) space.**

---

## 🔗 Related DSA Topics

- 📌 Arrays
- 📌 Prefix Sum
- 📌 Dynamic Programming
- 📌 Sliding Window
- 📌 Maximum Subarray
- 📌 LeetCode #53

---

### 💙 Keep Learning DSA!

**Consistency + Practice + Problem Solving = Growth 🚀**

#DSA #KadaneAlgorithm #MaximumSubarray #Arrays #CPP #CPlusPlus #DynamicProgramming #LeetCode #Coding #Programming #DataStructures #Algorithms
