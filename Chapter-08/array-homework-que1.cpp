#include <iostream>
#include <climits>

using namespace std;

int main()
{
    // Array
    int nums[] = {5, 15, 22, 1, -15, -24};

    // Size of array
    int size = 6;

    // Start with extreme values
    int smallest = INT_MAX;
    int largest = INT_MIN;

    // Variables to store indexes
    int smallestIndex = -1;
    int largestIndex = -1;

    // Traverse the array
    for (int i = 0; i < size; i++)
    {
        // Check for smallest value
        if (nums[i] < smallest)
        {
            smallest = nums[i];

            // Store index of smallest value
            smallestIndex = i;
        }

        // Check for largest value
        if (nums[i] > largest)
        {
            largest = nums[i];

            // Store index of largest value
            largestIndex = i;
        }
    }

    // Print smallest value and its index
    cout << "Smallest: " << smallest << endl;
    cout << "Smallest Index: " << smallestIndex << endl;

    // Print largest value and its index
    cout << "Largest: " << largest << endl;
    cout << "Largest Index: " << largestIndex << endl;

    return 0;
}