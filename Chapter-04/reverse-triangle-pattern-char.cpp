#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the triangle: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (char j = 'A' + i; j >= 'A'; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}