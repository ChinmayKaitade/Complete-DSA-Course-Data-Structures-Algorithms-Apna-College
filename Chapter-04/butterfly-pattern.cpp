#include <iostream>

using namespace std;

int main()
{
    int n;

    // Take the size of the butterfly from the user
    cout << "Enter the size of the butterfly: ";
    cin >> n;

    // ==================================
    //           TOP PART
    // ==================================

    for (int i = 1; i <= n; i++)
    {
        // ------------------------------
        // Print stars on the left side
        // ------------------------------

        // Number of stars = i
        //
        // i = 1 → *
        // i = 2 → **
        // i = 3 → ***
        // i = 4 → ****
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        // ------------------------------
        // Print spaces in the middle
        // ------------------------------

        // Number of spaces = 2 * (n - i)
        //
        // n = 4:
        //
        // i = 1 → 6 spaces
        // i = 2 → 4 spaces
        // i = 3 → 2 spaces
        // i = 4 → 0 spaces
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << " ";
        }

        // ------------------------------
        // Print stars on the right side
        // ------------------------------

        // Number of stars = i
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        // Move to the next row
        cout << endl;
    }

    // ==================================
    //          BOTTOM PART
    // ==================================

    for (int i = n; i >= 1; i--)
    {
        // ------------------------------
        // Print stars on the left side
        // ------------------------------

        // Number of stars decreases:
        //
        // i = 4 → ****
        // i = 3 → ***
        // i = 2 → **
        // i = 1 → *
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        // ------------------------------
        // Print spaces in the middle
        // ------------------------------

        // As stars decrease, spaces increase
        //
        // i = 4 → 0 spaces
        // i = 3 → 2 spaces
        // i = 2 → 4 spaces
        // i = 1 → 6 spaces
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << " ";
        }

        // ------------------------------
        // Print stars on the right side
        // ------------------------------

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        // Move to the next row
        cout << endl;
    }

    return 0;
}