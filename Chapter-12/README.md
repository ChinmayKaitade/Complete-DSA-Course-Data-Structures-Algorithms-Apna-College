# 📘 Asymptotic Analysis: Time & Space Complexity

Time and space complexity evaluate the scalability of algorithms. They describe how resource consumption grows as a function of the input size ($n$), independent of machine hardware or clock speeds.

---

## ⏱️ 1. Asymptotic Notations

- **Big $O$ ($O$ - Upper Bound):** Represents the worst-case scenario. It guarantees that the algorithm will never take more time/space than this boundary.
- **Big $\Theta$ ($\Theta$ - Tight Bound):** Represents the average case where the upper and lower bounds coincide.
- **Big $\Omega$ ($\Omega$ - Lower Bound):** Represents the best-case scenario. The execution will take at least this much time/space.

```text
Growth Rate Hierarchy:
O(1) < O(log n) < O(n) < O(n log n) < O(n^2) < O(n^3) < O(2^n) < O(n!)
Fastest ──────────────────────────────────────────────────────────► Slowest
```

---

## 💾 2. Space Complexity Breakdown

Space complexity measures total memory utilized relative to input size:

$$\text{Total Space} = \text{Auxiliary Space (extra temporary memory)} + \text{Input Space}$$

- In-place algorithms require $O(1)$ auxiliary space.
- Recursive calls allocate memory on the **call stack**, requiring space proportional to the maximum recursion depth.

---

## 📊 3. Common Complexity Classes & Code Snippets

| Complexity        | Name         | Paradigm / Pattern                       | Example Code Logic                      |
| ----------------- | ------------ | ---------------------------------------- | --------------------------------------- |
| **$O(1)$**        | Constant     | Direct arithmetic / formula              | `int sum = n * (n + 1) / 2;`            |
| **$O(\log n)$**   | Logarithmic  | Divide-and-conquer (search space halved) | Binary Search (`mid = s + (e - s) / 2`) |
| **$O(n)$**        | Linear       | Single traversal / linear scan           | Kadane's algorithm, calculating $n!$    |
| **$O(n \log n)$** | Linearithmic | Efficient sorting / divide & conquer     | Merge Sort, Quick Sort (average)        |
| **$O(n^2)$**      | Quadratic    | Nested pairwise comparisons              | Selection Sort, Bubble Sort             |
| **$O(2^n)$**      | Exponential  | Branching recursion (subsets/trees)      | Brute-force recursive Fibonacci         |
| **$O(n!)$**       | Factorial    | Generating all permutations              | $N$-Queens, traveling salesperson       |

---

## 🧩 4. Analysis & Solutions of Problems

### 🔹 1. Prime Number Check

```cpp
for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
        cout << "Non Prime";
        break;
    }
}
```

- **Loop Bound:** Runs while $i^2 \le n \implies i \le \sqrt{n}$.
- **Time Complexity:** **$O(\sqrt{n})$**
- **Space Complexity:** **$O(1)$**

---

### 🔹 2. Selection Sort

```cpp
for (int i = 0; i < n - 1; i++) {
    int minIdx = i;
    for (int j = i + 1; j < n; j++) {
        if (arr[j] < arr[minIdx]) {
            minIdx = j;
        }
    }
    swap(arr[i], arr[minIdx]);
}
```

- **Total Comparisons:** $(n - 1) + (n - 2) + \dots + 1 = \frac{n(n - 1)}{2} = \frac{n^2 - n}{2}$
- **Time Complexity:** **$O(n^2)$** (Best, Average, and Worst cases)
- **Space Complexity:** **$O(1)$** (In-place sort)

---

### 🔹 3. Factorial (Recursion)

```cpp
int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}
```

- **Recurrence Relation:** $T(n) = T(n - 1) + O(1)$
- **Recursive Tree Depth:** $n \rightarrow n - 1 \rightarrow \dots \rightarrow 0$ ($n + 1$ stack frames).
- **Time Complexity:** $\text{Calls} \times \text{Work per call} = n \times O(1) =$ **$O(n)$**
- **Space Complexity:** Maximum call stack depth = **$O(n)$**

---

### 🔹 4. Recursive Fibonacci

```cpp
int fib(int n) {
    if (n == 0 || n == 1) return n;
    return fib(n - 1) + fib(n - 2);
}
```

- **Recurrence Relation:** $T(n) = T(n - 1) + T(n - 2) + O(1)$
- **Total Calls (Nodes in Tree):** $2^0 + 2^1 + \dots + 2^n \approx 2^{n+1} - 1$
- **Tree Depth (Call Stack):** The maximum depth is determined by the leftmost branch ($n \rightarrow n - 1 \rightarrow \dots \rightarrow 0$).
- **Time Complexity:** **$O(2^n)$**
- **Space Complexity:** Maximum call stack height = **$O(n)$**

---

### 🔹 5. Merge Step (`merge()`)

```cpp
void merge(int arr[], int si, int mid, int ei) {
    vector<int> temp;
    int i = si, j = mid + 1;

    while (i <= mid && j <= ei) {
        if (arr[i] <= arr[j]) temp.push_back(arr[i++]);
        else temp.push_back(arr[j++]);
    }

    while (i <= mid) temp.push_back(arr[i++]);
    while (j <= ei) temp.push_back(arr[j++]);

    for (int idx = si, x = 0; idx <= ei; idx++) {
        arr[idx] = temp[x++];
    }
}
```

- **Traversal:** Touches each element between `si` and `ei` at most twice (once to merge into `temp`, once to copy back). If $k = ei - si + 1$:
- **Time Complexity:** **$O(k)$** (linear with respect to subarray size)
- **Space Complexity:** **$O(k)$** auxiliary space for the `temp` vector.

---

### 🔹 6. Merge Sort

```cpp
void mergeSort(int arr[], int si, int ei) {
    if (si >= ei) return;

    int mid = si + (ei - si) / 2;
    mergeSort(arr, si, mid);       // T(n/2)
    mergeSort(arr, mid + 1, ei);   // T(n/2)

    merge(arr, si, mid, ei);       // O(n)
}
```

- **Recurrence Relation:**

$$T(n) = 2T\left(\frac{n}{2}\right) + O(n)$$

- **Levels of Recursion Tree:** $\log_2 n$ levels.
- **Work per Level:** Merging elements across all subarrays at level $k$ takes $O(n)$ time.
- **Total Time Complexity:** $\text{Levels} \times \text{Work per level} =$ **$O(n \log n)$** (Best, Average, and Worst case).
- **Space Complexity:**
- Auxiliary array space across calls = $O(n)$
- Recursion stack frames = $O(\log n)$
- **Total Space Complexity:** **$O(n)$**
