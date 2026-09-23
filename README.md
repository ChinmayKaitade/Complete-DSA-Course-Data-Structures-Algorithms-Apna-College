# 🚀 Data Structures & Algorithms with C++

Welcome to my DSA learning repository! This project documents my complete journey through **Shradha Khapra Ma'am's DSA Series**, covering foundational logic building, standard data structures, and core algorithmic paradigms using modern C++.

---

## 📌 Overview: Data Structures Hierarchy

```text
Data Structures
├── 🔹 Primitive (int, char, float, bool, etc.)
└── 🔸 Non-Primitive
    ├── 📏 Linear
    │   ├── 📌 Static
    │   │   └── Arrays
    │   └── ⚡ Dynamic
    │       ├── Vector
    │       ├── Linked List
    │       ├── Stack
    │       └── Queue
    └── 🕸️ Non-Linear
        ├── Tree
        ├── Graph
        └── Hash Table / Set

```

---

## 🗺️ Learning Roadmap

| # | Topic | Status |
| --- | --- | --- |
| **01** | **Flowcharts, Pseudocode & Setup** | ✅ Completed |
| **02** | **Variables, Data Types & Operators** | ✅ Completed |
| **03** | **Conditional Statements & Loops** | ✅ Completed |
| **04** | **Patterns (Logic Building)** | ✅ Completed |
| **05** | **Functions, Scope & Memory Stack** | ✅ Completed |
| **06** | **Binary Number System & Conversions** | ✅ Completed |
| **07** | **Bitwise Operators & Data Type Modifiers** | ✅ Completed |
| **08** | **Arrays (Part 1 - Search, Reverse & Reference)** | ✅ Completed |
| **09** | **Vectors in C++ (Arrays Part 2 & Dynamic Memory)** | ✅ Completed |
| **10** | **Kadane's Algorithm & Maximum Subarray Sum** | ✅ Completed |
| **11** | **Majority Element & Pair Sum Problems** | ✅ Completed |
| **12** | **Asymptotic Analysis: Time & Space Complexity** | ✅ Completed |
| **13** | **Binary Exponentiation & Stock Buy and Sell** | ✅ Completed |
| **14** | **Container With Most Water (2-Pointer Approach)** | ✅ Completed |
| **15** | Product of Array Except Self (Prefix & Suffix Products) | ⏳ In Progress |

---

## 🛠️ Tech Stack & Tools

* **Language:** C++ (C++17/C++20)
* **Compiler:** GCC / MinGW (`g++`)
* **Editor:** Visual Studio Code

---

## 📚 Lecture 01: Flowchart & Pseudocode + Installation

### 🎯 Key Highlights

* **Logic Building:** Breaking down problem statements using intuitive **Flowcharts** and structured **Pseudocode**.
* **Environment Setup:** Installing and configuring **VS Code**, `g++` compiler, and essential extensions for modern C++ development.
* **Flowchart Components:** Start/End (Oval), Input/Output (Parallelogram), Process (Rectangle), Decision (Diamond).

---

## 📘 Lecture 02: Variables, Data Types & Operators

### 1. First Program & Output Stream

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello World!" << endl;
    return 0;
}

```

### 2. Primitive Data Types & Memory Sizes

| Data Type | Keyword | Size | Description |
| --- | --- | --- | --- |
| **Integer** | `int` | **4 bytes** | Stores whole numbers (`-25`, `100`) |
| **Character** | `char` | **1 byte** | Single character (`'a'`, `'Z'`) |
| **Float** | `float` | **4 bytes** | Single-precision decimal numbers |
| **Double** | `double` | **8 bytes** | Double-precision decimal numbers |
| **Boolean** | `bool` | **1 byte** | Truth values (`true`/`false`) |

### 3. Type Casting

* **Implicit (Type Promotion):** Done automatically by the compiler (`small type` $\rightarrow$ `large type`).
* **Explicit:** Manually enforced using `(type)val` or `static_cast<type>(val)`.

### 4. Operators Breakdown

* **Arithmetic:** `+`, `-`, `*`, `/`, `%`
* **Relational:** `==`, `!=`, `>`, `<`, `>=`, `<=`
* **Logical:** `&&` (AND), `||` (OR), `!` (NOT)
* **Unary:** Pre-increment (`++a`), Post-increment (`a++`), Pre-decrement (`--a`), Post-decrement (`a--`)

---

## 📘 Lecture 03: Conditional Statements & Loops

### 1. Conditional Logic

* `if-else` and `else-if` ladders for multi-branch decisions.
* **Ternary Operator:** `condition ? exp1 : exp2;`
* **ASCII Checking:** `'A'-'Z'` ($65\text{--}90$) and `'a'-'z'` ($97\text{--}122$).

### 2. Iteration (Loops)

* **`while` Loop:** Entry-controlled loop.
* **`for` Loop:** Standard counter loop (`initialization; condition; updation`).
* **`do-while` Loop:** Exit-controlled loop (guaranteed to run at least once).

### 3. Prime Number Check ($O(\sqrt{N})$)

```cpp
#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

```

---

## 📘 Lecture 04: Patterns

Essential patterns for mastering 2D grid navigation and nested loop controls.

### 1. Square & Triangle Patterns

* **Square Matrix:** Outer loop rows ($i$), inner loop columns ($j$).
* **Star/Number Triangle:** Inner loop runs up to current row ($j \le i$).
* **Reverse Number Triangle:** Inner loop counts downward from $i$ to $1$.

### 2. Floyd's Triangle & Symmetric Inversions

* **Floyd's Triangle:** Continuous counter incrementing through row-column iterations.
* **Inverted Triangles:** Space management loop followed by character/number loop.
* **Advanced Symmetric Shapes:** Palindromic Pyramids, Hollow Diamonds, and Butterfly patterns.

---

## 📘 Lecture 05: Functions

### 1. Parameters vs. Arguments

> 💡 **Memory Trick:**
> **P**arameter $\rightarrow$ **P**laceholder (Variable in function signature)
> **A**rgument $\rightarrow$ **A**ctual value (Real data passed during call)

### 2. Call Stack & Pass by Value

* Functions execute inside dedicated stack frames.
* **Pass by Value:** A duplicate copy of the argument is passed. Modifications inside the function do not mutate variables in `main()`.

### 3. Core Algorithms

* **Sum of Digits:** Extract last digit via `% 10`, reduce via `/ 10`.
* **Binomial Coefficient ($nCr$):** $\frac{n!}{r! \times (n - r)!}$ using reusable `factorial()` functions.
* **Fibonacci Term Generator:** Linear state iteration using `prev1` and `prev2`.

---

## 📘 Lecture 06: Binary Number System

### 1. Number Conversions

* **Decimal to Binary:** Repeated division by $2$, recording remainders bottom-to-top.
* **Binary to Decimal:** Multiplying bits by successive powers of $2$ ($2^0, 2^1, 2^2, \dots$).

### 2. 2's Complement Representation (Negative Numbers)

1. Write positive magnitude in binary.
2. Invert all bits (**1's Complement**).
3. Add $1$ (**2's Complement**).

```text
Example: -8 (8-bit representation)
  +8 Magnitude : 0000 1000
  1's Compl.   : 1111 0111
  + 1          :         1
  ------------------------
  -8 in Binary : 1111 1000

```

---

## 📘 Lecture 07: Bitwise Operators, Data Type Modifiers & More

### 1. Bitwise Operations & Shifts

* `&` (AND), `|` (OR), `^` (XOR), `~` (NOT)
* **Left Shift (`a << b`):** $a \times 2^b$
* **Right Shift (`a >> b`):** $\lfloor a / 2^b \rfloor$

### 2. Key Bitwise Tricks

* **Power of 2 Check ($O(1)$ without loops):**

```cpp
bool isPowerOfTwo = (n > 0) && ((n & (n - 1)) == 0);

```

### 3. Operator Precedence Hierarchy

`Unary (!, ~, ++)` $\rightarrow$ `Arithmetic (*, /, %, +, -)` $\rightarrow$ `Relational` $\rightarrow$ `Equality` $\rightarrow$ `Logical (&&, ||)` $\rightarrow$ `Assignment`

### 4. Data Type Modifiers & Scope

* **Modifiers:** `short`, `long`, `long long`, `signed`, `unsigned`
* **Scope:** Local (block-level lifetime) vs. Global (program lifetime).

---

## 📘 Lecture 08: Array Data Structure (Part 1)

### 1. Core Properties & Syntax

* **Linear & Homogeneous:** Holds elements of the exact same data type in contiguous memory.
* **0-Indexed:** First element sits at index `0`, last element at index `size - 1`.

```cpp
int arr[5] = {10, 20, 30, 40, 50};
int size = sizeof(arr) / sizeof(arr[0]);

```

### 2. Smallest & Largest Element in an Array

Using `INT_MAX` and `INT_MIN` from `<climits>`:

```cpp
int smallest = INT_MAX, largest = INT_MIN;
for (int i = 0; i < size; i++) {
    smallest = min(smallest, arr[i]);
    largest = max(largest, arr[i]);
}

```

### 3. Arrays and Pass by Reference

Arrays decay to a base pointer when passed to functions. Any modification directly mutates the original array in memory.

### 4. Linear Search ($O(N)$)

```cpp
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) return i;
    }
    return -1;
}

```

### 5. Reverse an Array (2-Pointer Approach - $O(N)$)

```cpp
void reverseArray(int arr[], int size) {
    int start = 0, end = size - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

```

---

## 📘 Lecture 09: Vectors in C++ (Arrays Part 2)

### 1. Vector Initialization & Syntax

Vectors are sequence containers representing dynamic arrays that automatically handle their own storage allocation.

```cpp
#include <vector>

vector<int> vec1;             // Empty vector
vector<int> vec2 = {1, 2, 3}; // Initializer list
vector<int> vec3(3, 0);       // Size 3, initialized with 0 -> {0, 0, 0}

```

### 2. Common Vector Functions

| Method | Description | Time Complexity |
| --- | --- | --- |
| `vec.size()` | Returns current number of elements | $O(1)$ |
| `vec.capacity()` | Returns total allocated memory capacity | $O(1)$ |
| `vec.push_back(val)` | Inserts an element at the back (doubles capacity when full) | $O(1)$ amortized |
| `vec.pop_back()` | Deletes the last element | $O(1)$ |
| `vec.front()` | Returns reference to the first element | $O(1)$ |
| `vec.back()` | Returns reference to the last element | $O(1)$ |
| `vec.at(idx)` | Bounds-checked element access | $O(1)$ |

### 3. Static vs. Dynamic Memory Allocation

* **Static Allocation (Arrays):** Memory allocated on the **Stack** at compile-time with a fixed, immutable size.
* **Dynamic Allocation (Vectors):** Memory allocated on the **Heap** at run-time, automatically expanding as elements are pushed.

### 4. Size vs. Capacity Growth

When `vec.size() == vec.capacity()`, calling `push_back()` triggers an internal reallocation:

* It allocates a new memory block with **$2\times$ capacity**.
* Copies existing elements over and deallocates the previous block.

### 5. Algorithmic Problem: Single Number (LeetCode 136)

Given an array where every element appears twice except one, find the single element using XOR properties:

* $n \oplus n = 0$
* $n \oplus 0 = n$

```cpp
int singleNumber(const vector<int>& nums) {
    int uniqueVal = 0;
    for (int val : nums) {
        uniqueVal ^= val;
    }
    return uniqueVal;
}

```

---

## 📘 Lecture 10: Kadane's Algorithm & Maximum Subarray Sum

> 📌 **DSA Concept:** Arrays & Dynamic Programming
> 🎯 **Problem:** Find the maximum sum of a contiguous subarray (LeetCode #53).

### 1. What is a Subarray?

A **subarray** is a contiguous, unbroken slice of an array.

For an array `[1, 2, 3, 4, 5]`, all possible contiguous subarrays are:

```text
[1], [2], [3], [4], [5]
[1, 2], [2, 3], [3, 4], [4, 5]
[1, 2, 3], [2, 3, 4], [3, 4, 5]
[1, 2, 3, 4], [2, 3, 4, 5]
[1, 2, 3, 4, 5]

```

$$\text{Total Subarrays for size } n = \frac{n \times (n + 1)}{2}$$

For $n = 5$: $\frac{5 \times 6}{2} = 15 \text{ subarrays}$.

---

### 2. Approaches Comparison

| Approach | Logic | Time Complexity | Space Complexity |
| --- | --- | --- | --- |
| 🔴 **Brute Force** | Generate all $O(n^2)$ subarrays and compute sums via nested loops | $O(n^3)$ | $O(1)$ |
| 🟡 **Better Approach** | Accumulate running sum inside the second loop | $O(n^2)$ | $O(1)$ |
| 🟢 **Kadane's Algorithm** | Single-pass greedy/DP: maintain running sum and discard negative prefix | $O(n)$ | $O(1)$ |

---

### 3. Kadane's Algorithm Logic & Core Intuition

Kadane's algorithm evaluates each element in a single pass:

1. **Accumulate:** Add the current value to `currSum`.
2. **Update Maximum:** Record the new global peak `maxSum = max(maxSum, currSum)`.
3. **Reset Negative Sum:** If `currSum < 0`, drop the entire subarray and reset `currSum = 0`. Carrying forward a negative sum will only penalize any future subarray sum.

$$\text{Core Rule: } \mathbf{\text{Keep Adding}} \rightarrow \mathbf{\text{Update Maximum}} \rightarrow \mathbf{\text{Reset if Negative}}$$

---

### 4. C++ Implementation

```cpp
#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int maxSubArray(const vector<int>& nums) {
    int currSum = 0;
    int maxSum = INT_MIN;

    for (int val : nums) {
        currSum += val;
        maxSum = max(currSum, maxSum);

        if (currSum < 0) {
            currSum = 0; // Discard negative running prefix
        }
    }

    return maxSum;
}

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Maximum Subarray Sum: " << maxSubArray(nums) << endl; // Output: 6
    return 0;
}

```

---

### 5. Step-by-Step Dry Run

Input: `[-2, 1, -3, 4, -1, 2, 1]`

| Element | `currSum` Calculation | `maxSum` | Action / State |
| --- | --- | --- | --- |
| **`-2`** | $0 + (-2) = -2 \rightarrow \mathbf{0}$ | **`-2`** | Negative sum reset to `0` |
| **`1`** | $0 + 1 = \mathbf{1}$ | **`1`** | New maximum found |
| **`-3`** | $1 + (-3) = -2 \rightarrow \mathbf{0}$ | **`1`** | Negative sum reset to `0` |
| **`4`** | $0 + 4 = \mathbf{4}$ | **`4`** | New maximum found |
| **`-1`** | $4 + (-1) = \mathbf{3}$ | **`4`** | Carried forward ($> 0$) |
| **`2`** | $3 + 2 = \mathbf{5}$ | **`5`** | New maximum found |
| **`1`** | $5 + 1 = \mathbf{6}$ | **`6`** | **Final Answer = 6** |

---

### 6. Key Takeaways

* ✅ Subarrays must contain **contiguous elements** (unlike subsequences).
* ⚡ Runs in **$O(n)$ time** with **$O(1)$ auxiliary space**.
* 💡 Initializing `maxSum = INT_MIN` ensures correct results even if all array elements are negative (e.g., `[-5, -2, -8] \rightarrow -2`).

---

## 📘 Lecture 11: Majority Element & Pair Sum

This module focuses on two classic array interview patterns: finding target pair sums in sorted arrays and identifying the majority element using brute force, sorting, and the optimal linear-time **Boyer-Moore Voting Algorithm**.

---

### 🎯 Part 1: Pair Sum (Two Sum in Sorted Array)

Given a **sorted** integer array, find the indices of two elements that add up to a given `target`.

#### 📊 Approaches Comparison

| Approach | Technique | Time Complexity | Space Complexity |
| --- | --- | --- | --- |
| 🔴 **Brute Force** | Check all pairs using nested loops | $O(n^2)$ | $O(1)$ |
| 🟢 **Optimal** | **2-Pointer Approach** | $O(n)$ | $O(1)$ |

#### 🔹 1. Brute Force Approach ($O(n^2)$)

Check every possible pair `(i, j)` where $j > i$:

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

```

#### 🔹 2. Optimal 2-Pointer Approach ($O(n)$)

Because the array is sorted:

* Start two pointers: `i = 0` (left boundary) and `j = n - 1` (right boundary).
* If `nums[i] + nums[j] > target`: decrement `j` to reduce the sum.
* If `nums[i] + nums[j] < target`: increment `i` to enlarge the sum.
* If `nums[i] + nums[j] == target`: match found!

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

### 🗳️ Part 2: Majority Element (LeetCode 169)

Given an array of size $n$, find the element that appears **more than $\lfloor n / 2 \rfloor$ times**. It is guaranteed that a majority element always exists.

#### 📊 Approaches Comparison

| Approach | Technique | Time Complexity | Space Complexity |
| --- | --- | --- | --- |
| 🔴 **Brute Force** | Nested loop counting frequency of each element | $O(n^2)$ | $O(1)$ |
| 🟡 **Better** | Sort the array and count adjacent frequencies | $O(n \log n)$ | $O(1)$ |
| 🟢 **Best (Optimal)** | **Moore's Voting Algorithm** | $O(n)$ | $O(1)$ |

#### 🔹 1. Better Approach: Sorting & Frequency Count ($O(n \log n)$)

Sorting groups identical elements together. Traverse the sorted array and count adjacent matches:

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

```

> 💡 **Sorting Shortcut:** Any element appearing $> n / 2$ times will always occupy the center index `nums[n / 2]` in a sorted array. Thus, `sort()` followed by `return nums[n / 2];` solves it directly in $O(n \log n)$.

#### 🔹 2. Best Approach: Moore's Voting Algorithm ($O(n)$ Time, $O(1)$ Space)

#### 💡 Core Intuition

Think of it as votes and cancellations:

* If the incoming element matches the candidate (`ans`), increment `freq`.
* If it differs, decrement `freq` (a mutual cancellation).
* Since the majority element appears $> n / 2$ times, it will always survive the cancellation process.

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

#### 🔍 Dry Run: Moore's Voting Algorithm

Input: `[2, 2, 1, 1, 1, 2, 2]`

| Step | Current Element | Candidate (`ans`) | `freq` Before | Action | `freq` After |
| --- | --- | --- | --- | --- | --- |
| 1 | **`2`** | `2` (set) | `0` | Match `2 == 2` | **`1`** |
| 2 | **`2`** | `2` | `1` | Match `2 == 2` | **`2`** |
| 3 | **`1`** | `2` | `2` | Different `1 != 2` | **`1`** |
| 4 | **`1`** | `2` | `1` | Different `1 != 2` | **`0`** |
| 5 | **`1`** | `1` (reset) | `0` | Match `1 == 1` | **`1`** |
| 6 | **`2`** | `1` | `1` | Different `2 != 1` | **`0`** |
| 7 | **`2`** | `2` (reset) | `0` | Match `2 == 2` | **`1`** |

🎯 **Final Candidate = `2**`

---

## 📘 Lecture 12: Asymptotic Analysis (Time & Space Complexity)

Time and Space Complexity evaluate the operational scalability of algorithms as a function of the input size ($n$).

---

### ⏱️ 1. Asymptotic Notations

* **Big $O$ ($O$):** Worst-case upper bound. Guarantees the code will never take more time/space than this limit.
* **Big $\Theta$ ($\Theta$):** Average-case tight bound.
* **Big $\Omega$ ($\Omega$):** Best-case lower bound.

```text
Growth Rate Hierarchy:
O(1) < O(log n) < O(n) < O(n log n) < O(n^2) < O(n^3) < O(2^n) < O(n!)
Fastest ──────────────────────────────────────────────────────────► Slowest

```

---

### 💾 2. Space Complexity Breakdown

$$\text{Total Space} = \text{Auxiliary Space (extra temporary memory)} + \text{Input Space}$$

* In-place algorithms utilize $O(1)$ auxiliary space.
* Recursion allocates stack frames proportional to the maximum tree depth.

---

### 📊 3. Complexity Classes & Code Snippets

| Complexity | Name | Paradigm / Pattern | Example Code Logic |
| --- | --- | --- | --- |
| **$O(1)$** | Constant | Formula / Direct math | `int sum = n * (n + 1) / 2;` |
| **$O(\log n)$** | Logarithmic | Divide and conquer (Halving search space) | Binary Search (`mid = s + (e - s) / 2`) |
| **$O(n)$** | Linear | Single pass / Linear scan | Kadane's Algorithm, Factorial loop |
| **$O(n \log n)$** | Linearithmic | Efficient sorting algorithms | Merge Sort, Quick Sort (average) |
| **$O(n^2)$** | Quadratic | Nested pairwise iterations | Selection Sort, Bubble Sort |
| **$O(2^n)$** | Exponential | Branching recursion | Brute-force recursive Fibonacci |
| **$O(n!)$** | Factorial | Generating all permutations | $N$-Queens, Traveling Salesperson |

---

### 🧩 4. Complexity Analysis Problems & Walkthroughs

#### 🔹 1. Prime Number Check ($O(\sqrt{n})$ Time, $O(1)$ Space)

```cpp
for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
        cout << "Non Prime";
        break;
    }
}

```

* Loop terminates when $i^2 > n \implies i > \sqrt{n}$. Hence, time complexity is **$O(\sqrt{n})$**.

#### 🔹 2. Selection Sort ($O(n^2)$ Time, $O(1)$ Space)

```cpp
for (int i = 0; i < n - 1; i++) {
    int minIdx = i;
    for (int j = i + 1; j < n; j++) {
        if (arr[j] < arr[minIdx]) minIdx = j;
    }
    swap(arr[i], arr[minIdx]);
}

```

* Total comparisons: $\frac{n(n - 1)}{2} \implies \mathbf{O(n^2)}$. Auxiliary space is $\mathbf{O(1)}$.

#### 🔹 3. Recursive Fibonacci ($O(2^n)$ Time, $O(n)$ Space)

```cpp
int fib(int n) {
    if (n == 0 || n == 1) return n;
    return fib(n - 1) + fib(n - 2);
}

```

* **Time Complexity:** Generates a binary recursion tree of size $\approx 2^{n+1} - 1 \implies \mathbf{O(2^n)}$.
* **Space Complexity:** Maximum call stack depth equals the longest branch ($n \rightarrow 0$) $\implies \mathbf{O(n)}$.

#### 🔹 4. Merge Sort ($O(n \log n)$ Time, $O(n)$ Space)

```cpp
void mergeSort(int arr[], int si, int ei) {
    if (si >= ei) return;
    int mid = si + (ei - si) / 2;
    mergeSort(arr, si, mid);
    mergeSort(arr, mid + 1, ei);
    merge(arr, si, mid, ei);
}

```

* **Recurrence Relation:** $T(n) = 2T(n/2) + O(n)$.
* **Time Complexity:** Tree height is $\log_2 n$ and merge work per level is $O(n)$, giving $\mathbf{O(n \log n)}$.
* **Space Complexity:** Auxiliary temporary array plus call stack overhead $\implies \mathbf{O(n)}$.

---

## 📘 Lecture 13: Binary Exponentiation & Stock Buy and Sell

This module covers two high-frequency interview problems: calculating power in logarithmic time via **Binary Exponentiation** ($x^n$) and maximizing trading profits in a single transaction via **Greedy Min-Tracking**.

---

### ⚡ Part 1: Compute $x^n$ (LeetCode 50: Pow(x, n))

A naive linear multiplication takes $O(n)$ time, leading to Time Limit Exceeded (TLE) when $n \approx 2^{31} - 1$. **Binary Exponentiation** reduces this to logarithmic time by halving the exponent at each step.

#### 💡 Core Intuition & Mathematical Model

Any integer $n$ can be expressed in binary form. We can factor powers based on bit parity:

* If power is **even**: $x^n = (x^2)^{n/2}$
* If power is **odd**: $x^n = x \times (x^2)^{(n-1)/2}$

```text
Example: 2^10
10 in Binary = 1010_2

Step 1: binForm = 10 (even) -> x becomes 2^2 = 4,    binForm = 5
Step 2: binForm = 5  (odd)  -> ans *= 4, x becomes 4^2 = 16, binForm = 2
Step 3: binForm = 2  (even) -> x becomes 16^2 = 256, binForm = 1
Step 4: binForm = 1  (odd)  -> ans *= 256 (ans = 4 * 256 = 1024), binForm = 0

```

#### ⚠️ Critical Edge Cases

1. **$n < 0$:** Invert base ($x = 1/x$) and make $n$ positive ($n = -n$).
2. **$n = -2^{31}$ (`INT_MIN`):** Inverting `INT_MIN` directly in a 32-bit signed integer causes overflow because `INT_MAX` is $2^{31} - 1$. Cast `n` to `long long` before sign inversion.

#### 💻 C++ Implementation: Pow(x, n)

* **Time Complexity:** $O(\log_2 n)$
* **Space Complexity:** $O(1)$

```cpp
#include <iostream>
using namespace std;

double myPow(double x, int n) {
    if (n == 0 || x == 1.0) return 1.0;
    if (x == 0.0) return 0.0;
    if (x == -1.0) return (n % 2 == 0) ? 1.0 : -1.0;

    long long binForm = n;

    if (binForm < 0) {
        x = 1.0 / x;
        binForm = -binForm;
    }

    double ans = 1.0;

    while (binForm > 0) {
        if (binForm % 2 == 1) {
            ans *= x;
        }
        x *= x;
        binForm /= 2;
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

### 📈 Part 2: Best Time to Buy & Sell Stock (LeetCode 121)

Given an array `prices` where `prices[i]` is the stock price on day `i`, find the maximum profit possible from **a single transaction** (buy once, sell once in the future). If no profit is possible, return `0`.

#### 📊 Approaches Comparison

| Approach | Technique | Time Complexity | Space Complexity |
| --- | --- | --- | --- |
| 🔴 **Brute Force** | Compare every pair $(i, j)$ where $j > i$ | $O(n^2)$ | $O(1)$ |
| 🟢 **Greedy / One-Pass** | Track minimum purchase price seen so far | $O(n)$ | $O(1)$ |

#### 💡 Optimal Approach: Running Minimum Tracker

To maximize `prices[sell] - prices[buy]`, the buy price must be as low as possible *before* the sell day.

1. Maintain `bestBuy` initialized to `prices[0]`.
2. As we iterate through each day:
* Calculate potential profit: `prices[i] - bestBuy`.
* Update `maxProfit = max(maxProfit, potentialProfit)`.
* Update `bestBuy = min(bestBuy, prices[i])`.



#### 💻 C++ Implementation: Best Time to Buy and Sell Stock

* **Time Complexity:** $O(n)$
* **Space Complexity:** $O(1)$

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

#### 🔍 Dry Run: Stock Buy and Sell

Input: `prices = [7, 1, 5, 3, 6, 4]`

| Day ($i$) | Price (`prices[i]`) | Current `bestBuy` | Potential Profit (`price - bestBuy`) | Updated `maxProfit` | Updated `bestBuy` |
| --- | --- | --- | --- | --- | --- |
| Start | `7` | `7` | — | `0` | `7` |
| **Day 1** | `1` | `7` | $1 - 7 = -6$ (No profit) | `0` | **`1`** |
| **Day 2** | `5` | `1` | $5 - 1 = 4$ | **`4`** | `1` |
| **Day 3** | `3` | `1` | $3 - 1 = 2$ | `4` | `1` |
| **Day 4** | `6` | `1` | $6 - 1 = 5$ | **`5`** | `1` |
| **Day 5** | `4` | `1` | $4 - 1 = 3$ | `5` | `1` |

🎯 **Maximum Profit = `5**` (Buy at `1`, Sell at `6`)

---

## 📘 Lecture 14: Container With Most Water (LeetCode 11)

Given an integer array `height` of length $n$, where each element represents the height of a vertical line on a 2D plane, find two lines that together with the x-axis form a container that holds the maximum possible water volume.

---

### 🎯 1. Problem Formulation & Geometric Formula

The amount of water trapped between any two indices $i$ and $j$ ($j > i$) forms a rectangle:

$$\text{Width } (w) = j - i$$

$$\text{Usable Height } (h) = \min(\text{height}[i], \text{height}[j])$$

$$\text{Area (Water Volume)} = w \times h = (j - i) \times \min(\text{height}[i], \text{height}[j])$$

> 💡 **Limiting Factor:** The capacity is always bottlenecked by the **shorter** line; any water above it simply spills over.

---

### 📊 2. Approaches Comparison

| Approach | Strategy | Time Complexity | Space Complexity |
| --- | --- | --- | --- |
| 🔴 **Brute Force** | Evaluate all possible line pairs $(i, j)$ using nested loops | $O(n^2)$ | $O(1)$ |
| 🟢 **Optimal (Two Pointers)** | Maximize width first, then greedily shift the shorter boundary inward | $O(n)$ | $O(1)$ |

---

### 🔴 3. Approach 1: Brute Force ($O(n^2)$)

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

* ⚠️ **Verdict:** Results in **Time Limit Exceeded (TLE)** on LeetCode when $n = 10^5$.

---

### 🟢 4. Approach 2: Optimal Two-Pointer Strategy ($O(n)$)

#### 💡 Core Intuition & Pointer Movement Proof

1. Start with the widest possible base: `lp = 0` (left pointer) and `rp = n - 1` (right pointer).
2. Every subsequent step reduces the width ($w = rp - lp$) by $1$.
3. To compensate for losing width, the effective height **must increase**.
4. The container's height is determined strictly by the **shorter line**:
* If you move the taller line inward, width decreases and effective height either decreases or stays capped by the shorter line $\rightarrow$ **Area is guaranteed to decrease**.
* Therefore, always shift the pointer pointing to the **shorter height** inward in search of a taller barrier.



```text
Decision Rule:
height[lp] < height[rp]  ==>  lp++  (search for a taller left line)
height[lp] >= height[rp] ==>  rp--  (search for a taller right line)

```

#### 💻 C++ Implementation

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

### 🔍 5. Dry Run Trace

Input: `height = [1, 8, 6, 2, 5, 4, 8, 3, 7]`

| Step | `lp` (val) | `rp` (val) | Width ($rp - lp$) | Height $\min(l, r)$ | Water Area | `maxWater` | Pointer Shifted |
| --- | --- | --- | --- | --- | --- | --- | --- |
| **1** | `0` (1) | `8` (7) | $8 - 0 = 8$ | $\min(1, 7) = 1$ | $8 \times 1 = 8$ | **`8`** | `lp++` (since $1 < 7$) |
| **2** | `1` (8) | `8` (7) | $8 - 1 = 7$ | $\min(8, 7) = 7$ | $7 \times 7 = 49$ | **`49`** | `rp--` (since $7 < 8$) |
| **3** | `1` (8) | `7` (3) | $7 - 1 = 6$ | $\min(8, 3) = 3$ | $6 \times 3 = 18$ | `49` | `rp--` (since $3 < 8$) |
| **4** | `1` (8) | `6` (8) | $6 - 1 = 5$ | $\min(8, 8) = 8$ | $5 \times 8 = 40$ | `49` | `rp--` (since equal) |
| **5** | `1` (8) | `5` (4) | $5 - 1 = 4$ | $\min(8, 4) = 4$ | $4 \times 4 = 16$ | `49` | `rp--` (since $4 < 8$) |
| **6** | `1` (8) | `4` (5) | $4 - 1 = 3$ | $\min(8, 5) = 5$ | $3 \times 5 = 15$ | `49` | `rp--` (since $5 < 8$) |
| **7** | `1` (8) | `3` (2) | $3 - 1 = 2$ | $\min(8, 2) = 2$ | $2 \times 2 = 4$ | `49` | `rp--` (since $2 < 8$) |
| **8** | `1` (8) | `2` (6) | $2 - 1 = 1$ | $\min(8, 6) = 6$ | $1 \times 6 = 6$ | `49` | `rp--` (since $6 < 8$) |

🎯 **Peak Container Volume = `49**` (Formed between index `1` with height `8` and index `8` with height `7`).

---

⭐ *If you find this repository helpful, consider leaving a star!*

