#include <iostream>
using namespace std;

void changeX(int x)
{
    x = 2 * x;
    cout << "x = " << x << endl; // x = 10
}

int main()
{
    int x = 5;
    changeX(x);

    cout << "x = " << x << endl; // x = 5
    return 0;
}