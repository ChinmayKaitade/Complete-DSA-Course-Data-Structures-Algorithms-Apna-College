# 📘 Lecture 11: Majority Element & Pair Sum

This module focuses on two classic array interview problems: finding target pair sums in sorted arrays and identifying the majority element using brute force, sorting, and the optimal linear-time **Boyer-Moore Voting Algorithm**.

---

## 🎯 Part 1: Pair Sum (Two Sum in Sorted Array)

Given a **sorted** integer array, find the indices of two elements that add up to a given `target`.

### 📊 Approaches Comparison

| Approach           | Technique                          | Time Complexity | Space Complexity |
| :----------------- | :--------------------------------- | :-------------: | :--------------: |
| 🔴 **Brute Force** | Check all pairs using nested loops |    $O(n^2)$     |      $O(1)$      |
| 🟢 **Optimal**     | **2-Pointer Approach**             |     $O(n)$      |      $O(1)$      |

---

### 🔹 1. Brute Force Approach ($O(n^2)$)

Check every possible pair `(i, j)` where $j > i$.

```cpp
#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSumBrute(const vector<int>& nums, int target) {
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                return {i, j};
            }
        }
    }
    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans = pairSumBrute(nums, target);
    if (!ans.empty()) {
        cout << "Indices: " << ans[0] << ", " << ans[1] << endl; // Output: 0, 1
    }
    return 0;
}
```

---

### 🔹 2. Optimal 2-Pointer Approach ($O(n)$)

Because the array is already sorted:

- Start two pointers: `i = 0` (smallest) and `j = n - 1` (largest).
- If `nums[i] + nums[j] > target`: decrease `j` to reduce the sum.
- If `nums[i] + nums[j] < target`: increase `i` to enlarge the sum.
- If `nums[i] + nums[j] == target`: match found!

```cpp
#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(const vector<int>& nums, int target) {
    int i = 0, j = nums.size() - 1;

    while (i < j) {
        int currentSum = nums[i] + nums[j];

        if (currentSum > target) {
            j--;
        } else if (currentSum < target) {
            i++;
        } else {
            return {i, j};
        }
    }

    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 26;

    vector<int> ans = pairSum(nums, target);
    if (!ans.empty()) {
        cout << "Indices: " << ans[0] << ", " << ans[1] << endl; // Output: 2, 3
    }
    return 0;
}
```

---

## 🗳️ Part 2: Majority Element (LeetCode 169)

Given an array of size $n$, find the element that appears **more than $\lfloor n / 2 \rfloor$ times**. It is guaranteed that a majority element always exists.

### 📊 Approaches Comparison

| Approach              | Technique                                      | Time Complexity | Space Complexity |
| --------------------- | ---------------------------------------------- | --------------- | ---------------- |
| 🔴 **Brute Force**    | Nested loop counting frequency of each element | $O(n^2)$        | $O(1)$           |
| 🟡 **Better**         | Sort the array and count adjacent frequencies  | $O(n \log n)$   | $O(1)$           |
| 🟢 **Best (Optimal)** | **Moore's Voting Algorithm**                   | $O(n)$          | $O(1)$           |

---

### 🔹 1. Better Approach: Sorting & Frequency Count ($O(n \log n)$)

Sorting groups identical elements together. Traverse the sorted array and maintain a running count; if any count exceeds $n / 2$, return that element.

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int majorityElementSorting(vector<int> nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());

    int freq = 1;
    int ans = nums[0];

    for (int i = 1; i < n; i++) {
        if (nums[i] == nums[i - 1]) {
            freq++;
        } else {
            freq = 1;
            ans = nums[i];
        }

        if (freq > n / 2) {
            return ans;
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    cout << "Majority Element: " << majorityElementSorting(nums) << endl; // Output: 2
    return 0;
}
```

> 💡 **Quick Note on Sorting:** If a majority element occupies $> n/2$ positions, it will **always** reside at index `nums[n / 2]` after sorting, meaning `sort()` followed by `return nums[n / 2];` also works in $O(n \log n)$.

---

### 🔹 2. Best Approach: Moore's Voting Algorithm ($O(n)$ Time, $O(1)$ Space)

#### 💡 Core Intuition

Think of it as a battle between votes:

- If elements match the candidate (`ans`), increment `freq`.
- If an element differs, decrement `freq` (a cancellation).
- Since the majority element occurs $> n / 2$ times, it will always survive the cancellation process.

```text
Steps:
1. Initialize ans = 0, freq = 0.
2. For every element:
   - If freq == 0, set ans = nums[i].
   - If nums[i] == ans, freq++.
   - Else freq--.
3. Return ans.
```

```cpp
#include <iostream>
#include <vector>
using namespace std;

int majorityElement(const vector<int>& nums) {
    int freq = 0;
    int ans = 0;

    for (int val : nums) {
        if (freq == 0) {
            ans = val;
        }

        if (ans == val) {
            freq++;
        } else {
            freq--;
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    cout << "Majority Element: " << majorityElement(nums) << endl; // Output: 2
    return 0;
}
```

---

### 🔍 Dry Run: Moore's Voting Algorithm

Input: `[2, 2, 1, 1, 1, 2, 2]`

| Step | Current Element | Candidate (`ans`) | `freq` Before | Action             | `freq` After |
| ---- | --------------- | ----------------- | ------------- | ------------------ | ------------ |
| 1    | **`2`**         | `2` (set)         | `0`           | Match `2 == 2`     | **`1`**      |
| 2    | **`2`**         | `2`               | `1`           | Match `2 == 2`     | **`2`**      |
| 3    | **`1`**         | `2`               | `2`           | Different `1 != 2` | **`1`**      |
| 4    | **`1`**         | `2`               | `1`           | Different `1 != 2` | **`0`**      |
| 5    | **`1`**         | `1` (reset)       | `0`           | Match `1 == 1`     | **`1`**      |
| 6    | **`2`**         | `1`               | `1`           | Different `2 != 1` | **`0`**      |
| 7    | **`2`**         | `2` (reset)       | `0`           | Match `2 == 2`     | **`1`**      |

🎯 Final Candidate = `2**`
