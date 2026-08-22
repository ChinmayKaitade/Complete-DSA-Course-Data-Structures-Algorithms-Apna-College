#include <iostream>

using namespace std;

// Function to convert binary number to decimal
int binToDecimal(int binNum)
{
    // ans → stores the final decimal value
    // pow → represents powers of 2:
    // 2^0, 2^1, 2^2, 2^3, ...
    int ans = 0;
    int pow = 1;

    // Continue until all binary digits are processed
    while (binNum > 0)
    {
        // Get the last digit of the binary number
        // % 10 gives the last digit
        int rem = binNum % 10;

        // Multiply the binary digit by its
        // corresponding power of 2
        ans += rem * pow;

        // Remove the last digit
        binNum /= 10;

        // Move to the next power of 2
        // 1 → 2 → 4 → 8 → 16 → ...
        pow *= 2;
    }

    // Return the decimal value
    return ans;
}

int main()
{
    int binNum;

    // Take binary number from the user
    cout << "Enter a binary number: ";
    cin >> binNum;

    // Convert binary to decimal
    cout << "Decimal = " << binToDecimal(binNum) << endl;

    return 0;
}