#include <iostream>
using namespace std;

int main()
{
    char grade = 'a';

    int value = grade;
    cout << "value: " << value << endl; // value: 97

    double price = 200.18;

    int newPrice = (int)price;
    cout << newPrice << endl; // 200
    return 0;
}
