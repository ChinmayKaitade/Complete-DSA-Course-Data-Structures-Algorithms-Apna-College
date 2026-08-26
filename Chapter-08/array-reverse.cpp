#include <iostream>

using namespace std;

// Function to reverse an array
void reverseArray(int arr[], int size)
{
    // 'start' points to the first element
    // 'end' points to the last element
    int start = 0;
    int end = size - 1;

    // Continue swapping until start and end meet
    while (start < end)
    {
        // Swap the elements at start and end
        //
        // Example:
        // arr[start] = 4
        // arr[end]   = 5
        //
        // After swap:
        // arr[start] = 5
        // arr[end]   = 4
        swap(arr[start], arr[end]);

        // Move start one position forward
        start++;

        // Move end one position backward
        end--;
    }
}

int main()
{
    // Create an array
    int arr[] = {4, 2, 7, 8, 1, 2, 5};

    // Number of elements in the array
    int size = 7;

    // Call the function to reverse the array
    reverseArray(arr, size);

    // Print the reversed array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}