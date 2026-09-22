# 📘 Chapter 09: Vectors in C++ (Arrays Part 2)

Vectors are dynamic arrays provided by the C++ Standard Template Library (STL). Unlike static arrays, vectors can resize themselves automatically when elements are inserted or deleted.

---

## 📌 1. Vector Syntax & Initialization

To use vectors, include the header `#include <vector>`.

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 1. Empty vector
    vector<int> vec1;

    // 2. Vector with initial values
    vector<int> vec2 = {1, 2, 3};

    // 3. Vector with size and default value (size: 3, all initialized to 0)
    vector<int> vec3(3, 0); // {0, 0, 0}

    return 0;
}
```

---

## ⚙️ 2. Essential Vector Member Functions

| Method               | Description                                              | Time Complexity  |
| -------------------- | -------------------------------------------------------- | ---------------- |
| `vec.size()`         | Returns the number of elements currently stored          | $O(1)$           |
| `vec.capacity()`     | Returns total allocated memory capacity                  | $O(1)$           |
| `vec.push_back(val)` | Inserts an element at the end (doubles capacity if full) | $O(1)$ amortized |
| `vec.pop_back()`     | Removes the last element                                 | $O(1)$           |
| `vec.front()`        | Returns a reference to the first element                 | $O(1)$           |
| `vec.back()`         | Returns a reference to the last element                  | $O(1)$           |
| `vec.at(index)`      | Accesses element at `index` with bounds checking         | $O(1)$           |

```cpp
vector<int> nums;

nums.push_back(10);
nums.push_back(20);
nums.push_back(30);

cout << "Front: " << nums.front() << endl; // 10
cout << "Back: " << nums.back() << endl;   // 30
cout << "Element at 1: " << nums.at(1) << endl; // 20

nums.pop_back(); // Removes 30
cout << "Size after pop: " << nums.size() << endl; // 2
```

---

## 🧠 3. Static vs. Dynamic Memory Allocation

| Feature              | Static Memory Allocation | Dynamic Memory Allocation                    |
| -------------------- | ------------------------ | -------------------------------------------- |
| **Allocation Time**  | **Compile-time**         | **Run-time**                                 |
| **Memory Location**  | **Stack memory**         | **Heap memory**                              |
| **Size Flexibility** | Fixed (cannot resize)    | Resizable on demand                          |
| **Lifecycle**        | Scope-bound (auto freed) | Manual / managed by STL container            |
| **Example**          | `int arr[100];`          | `vector<int> vec;` or `int* p = new int[n];` |

---

## 📈 4. Size vs. Capacity (Vector Growth Mechanism)

- **Size (`vec.size()`):** The actual number of elements currently present in the vector.
- **Capacity (`vec.capacity()`):** The total number of elements the vector can hold before needing to reallocate more memory.

> ⚡ **Growth Strategy:** When `push_back()` is called on a full vector (`size == capacity`), the vector allocates a new memory block with **$2\times$ (double) the previous capacity**, copies existing elements over, and frees the old memory.

```cpp
vector<int> v;

v.push_back(1);
cout << "Size: " << v.size() << ", Capacity: " << v.capacity() << endl; // Size: 1, Cap: 1

v.push_back(2);
cout << "Size: " << v.size() << ", Capacity: " << v.capacity() << endl; // Size: 2, Cap: 2

v.push_back(3);
cout << "Size: " << v.size() << ", Capacity: " << v.capacity() << endl; // Size: 3, Cap: 4

v.push_back(4);
cout << "Size: " << v.size() << ", Capacity: " << v.capacity() << endl; // Size: 4, Cap: 4

v.push_back(5);
cout << "Size: " << v.size() << ", Capacity: " << v.capacity() << endl; // Size: 5, Cap: 8
```

---

## 💡 5. Problem Spotlight: Single Number (LeetCode 136)

**Problem:** Given a non-empty vector of integers where every element appears twice except for one, find that single unique element.

### 🔹 XOR Bitwise Property

- $n \oplus n = 0$ (XOR of a number with itself is `0`)
- $n \oplus 0 = n$ (XOR of a number with `0` is the number itself)
- XOR is both **associative** and **commutative**.

XORing all elements eliminates all duplicate pairs, leaving only the unique element.

- **Time Complexity:** $O(N)$
- **Space Complexity:** $O(1)$

```cpp
#include <iostream>
#include <vector>
using namespace std;

int singleNumber(const vector<int>& nums) {
    int uniqueVal = 0;
    for (int val : nums) {
        uniqueVal ^= val;
    }
    return uniqueVal;
}

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << "Single Unique Number = " << singleNumber(nums) << endl; // Output: 4
    return 0;
}
```
