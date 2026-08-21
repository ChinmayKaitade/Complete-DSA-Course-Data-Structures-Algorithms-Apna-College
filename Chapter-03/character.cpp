#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter Character: ";
    cin >> ch;

    // if (ch >= 'a' && ch <= 'z')
    // {
    //     cout << "Lowercase\n";
    // }
    // else
    // {
    //     cout << "Uppercase\n";
    // }

    if (ch >= 65 && ch <= 90)
    {
        cout << "Uppercase\n";
    }
    else
    {
        cout << "Lowercase\n";
    }

    return 0;
}