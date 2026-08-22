#include <iostream>

using namespace std;

// Function to convert decimal number to binary
int decToBinary(int decNum)
{
    // ans → stores the final binary number
    // pow → keeps track of the place value:
    // 1, 10, 100, 1000, ...
    int ans = 0;
    int pow = 1;

    // Continue until the decimal number becomes 0
    while (decNum > 0)
    {
        // Get the remainder when dividing by 2
        // Remainder will always be 0 or 1
        int rem = decNum % 2;

        // Divide the decimal number by 2
        decNum /= 2;

        // Add the remainder to the correct position
        // Example:
        // rem = 1, pow = 1  → 1 × 1
        // rem = 0, pow = 10 → 0 × 10
        // rem = 1, pow = 100 → 1 × 100
        ans += (rem * pow);

        // Move to the next position
        // 1 → 10 → 100 → 1000
        pow *= 10;
    }

    // Return the binary representation
    return ans;
}

int main()
{
    int decNum;

    // Take decimal number from the user
    cout << "Enter a decimal number: ";
    cin >> decNum;

    // Convert decimal to binary and print the result
    cout << "Binary = " << decToBinary(decNum) << endl;

    return 0;
}