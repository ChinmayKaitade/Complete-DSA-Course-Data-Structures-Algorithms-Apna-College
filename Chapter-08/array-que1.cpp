#include <iostream>
#include <climits> // Provides INT_MAX and INT_MIN

using namespace std;

int main()
{
    // Array containing 6 numbers
    int nums[] = {5, 15, 22, 1, -15, -24};

    // Number of elements in the array
    int size = 6;

    // Start smallest with the largest possible int value.
    // This ensures that the first array element will be smaller.
    int smallest = INT_MAX;

    // Start largest with the smallest possible int value.
    // This ensures that the first array element will be larger.
    int largest = INT_MIN;

    // Loop through every element of the array
    for (int i = 0; i < size; i++)
    {
        // Compare the current array element with smallest.
        // Keep whichever value is smaller.
        smallest = min(nums[i], smallest);

        // Compare the current array element with largest.
        // Keep whichever value is larger.
        largest = max(nums[i], largest);
    }

    // Print the smallest value
    cout << "Smallest: " << smallest << endl;

    // Print the largest value
    cout << "Largest: " << largest << endl;

    return 0;
}