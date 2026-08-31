#include <iostream>
#include <vector>
using namespace std;

int singleNumber(const vector<int> &nums)
{
    int uniqueVal = 0;
    for (int val : nums)
    {
        uniqueVal ^= val;
    }
    return uniqueVal;
}

int main()
{
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << "Single Unique Number = " << singleNumber(nums) << endl; // Output: 4
    return 0;
}