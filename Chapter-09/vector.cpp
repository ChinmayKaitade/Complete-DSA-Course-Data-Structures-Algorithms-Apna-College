#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector<int> vec = {1, 2, 3};
    // vector<int> vec = {3, 0};
    // cout << vec[0];
    vector<int> vec;

    // vector<char> vec = {'a', 'b', 'c', 'd', 'e'};

    // vector<int> vec;
    cout << "Size: " << vec.size() << endl; // Size: 0

    // for (char val : vec)
    // {
    //     cout << val << endl;
    // }

    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    cout << "Size After Push Back: " << vec.size() << endl; // Size After Push Back: 3
    for (int val : vec)
    {
        cout << "Push Back Value: " << val << endl;
    }

    vec.pop_back();
    cout << "Size After Pop Back: " << vec.size() << endl; // Size After Pop Back: 2
    for (int val : vec)
    {
        cout << "Pop Back Value: " << val << endl;
    }

    cout << "Front Value: " << vec.front() << endl; // Front Value: 25

    cout << "Vector AT value: " << vec.at(1) << endl; // Vector AT value: 35

    // Vector Size & Capacity
    cout << "Size: " << vec.size() << endl;         // Size: 2
    cout << "Capacity: " << vec.capacity() << endl; // Capacity: 4

    return 0;
}