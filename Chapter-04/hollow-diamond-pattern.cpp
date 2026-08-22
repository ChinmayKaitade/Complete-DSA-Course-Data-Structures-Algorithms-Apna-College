#include <iostream>

using namespace std;

int main()
{
    int n;

    // Take the size of the diamond from the user
    cout << "Enter the size of the diamond: ";
    cin >> n;

    // =========================
    //        TOP PART
    // =========================

    // i represents the row
    // i = 0 → first row
    // i = n-1 → middle row
    for (int i = 0; i < n; i++)
    {
        // Print spaces before the first *
        // Number of spaces decreases as we go down
        //
        // For n = 4:
        // i = 0 → 3 spaces
        // i = 1 → 2 spaces
        // i = 2 → 1 space
        // i = 3 → 0 spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // Print the first *
        cout << "*";

        // For the first row, we only need one *
        // For other rows, we need another * on the right
        if (i != 0)
        {
            // Print spaces between the two *
            //
            // Number of spaces:
            // 2 * i - 1
            //
            // i = 1 → 1 space
            // i = 2 → 3 spaces
            // i = 3 → 5 spaces
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << " ";
            }

            // Print the second *
            cout << "*";
        }

        // Move to the next row
        cout << endl;
    }

    // =========================
    //       BOTTOM PART
    // =========================

    // We start from the row after the middle row.
    // That's why i starts from 0 and runs n-1 times.
    for (int i = 0; i < n - 1; i++)
    {
        // Print spaces before the first *
        //
        // Spaces increase as we move down:
        //
        // i = 0 → 1 space
        // i = 1 → 2 spaces
        // i = 2 → 3 spaces
        for (int j = 0; j < i + 1; j++)
        {
            cout << " ";
        }

        // Print the first *
        cout << "*";

        // Don't print the second * on the last row
        if (i != n - 2)
        {
            // Print spaces between the two *
            //
            // For n = 4:
            // i = 0 → 3 spaces
            // i = 1 → 1 space
            for (int j = 0; j < 2 * (n - i) - 5; j++)
            {
                cout << " ";
            }

            // Print the second *
            cout << "*";
        }

        // Move to the next row
        cout << endl;
    }

    return 0;
}