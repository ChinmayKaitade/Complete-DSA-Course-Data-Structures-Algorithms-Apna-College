# 📘 Lecture 08: Array Data Structure (Part 1)

An array is a linear data structure that stores a collection of elements of the same data type in contiguous memory locations.

---

## 📌 1. Array Syntax & Core Properties

- **Homogeneous:** Stores elements strictly of the same data type (`int`, `char`, `float`, etc.).
- **Contiguous Memory:** Elements reside next to each other in RAM.
- **0-Indexed:** Indices run from `0` to `size - 1`.

```cpp
// Creation / Initialization
int arr[5] = {10, 20, 30, 40, 50};

// Calculate size dynamically
int size = sizeof(arr) / sizeof(arr[0]);
```



---

## 🔄 2. Loops on Arrays: Finding Smallest & Largest Elements

Initialize `smallest` with `INT_MAX` and `largest` with `INT_MIN` from `<climits>` to handle all integer bounds safely.

```cpp
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int nums[] = {5, 15, 22, 1, -15, 24};
    int size = sizeof(nums) / sizeof(nums[0]);

    int smallest = INT_MAX;
    int largest = INT_MIN;

    for (int i = 0; i < size; i++) {
        smallest = min(smallest, nums[i]);
        largest = max(largest, nums[i]);
    }

    cout << "Smallest element = " << smallest << endl;
    cout << "Largest element  = " << largest << endl;

    return 0;
}
```

---

## 🔗 3. Arrays and Pass by Reference

When passed to a function, an array decays into a pointer pointing to its **base address** (index `0`).

> ⚠️ **Key Rule:** Modifications made to an array inside a function directly alter the original array in the calling scope.

```cpp
#include <iostream>
using namespace std;

void modifyArray(int arr[], int size) {
    arr[0] = 999; // Alters original array directly
}

int main() {
    int arr[] = {1, 2, 3};
    modifyArray(arr, 3);

    cout << "arr[0] = " << arr[0] << endl; // Output: 999
    return 0;
}
```

---

## 🔍 4. Linear Search

Iterates sequentially through the array elements until the desired target value is matched.

- **Time Complexity:** $O(N)$
- **Space Complexity:** $O(1)$

```cpp
#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Returns index where target is found
        }
    }
    return -1; // Target not found
}

int main() {
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 8;

    int index = linearSearch(arr, size, target);

    if (index != -1) {
        cout << "Target " << target << " found at index " << index << endl;
    } else {
        cout << "Target " << target << " not found" << endl;
    }

    return 0;
}
```

---

## 🔁 5. Reverse an Array (2-Pointer Approach)

Uses two boundary pointers (`start` and `end`) that step toward each other while swapping their respective elements.

- **Time Complexity:** $O(N)$
- **Space Complexity:** $O(1)$

```cpp
#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    printArray(arr, size);

    reverseArray(arr, size);

    cout << "Reversed Array: ";
    printArray(arr, size);

    return 0;
}
```

