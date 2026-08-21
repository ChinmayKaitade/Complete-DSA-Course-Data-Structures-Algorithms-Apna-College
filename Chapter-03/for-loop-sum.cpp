#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Your Sum Number: ";
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += i;

        // if (i == 50)
        // {
        //     break;
        // } // break keyword stops the code, when i = 50
    }
    cout << "Sum: " << sum << endl;

    return 0;
}