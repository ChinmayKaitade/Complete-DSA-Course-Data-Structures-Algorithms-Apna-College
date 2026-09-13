#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int currSum = 0;
    int maxSum = INT_MIN;

    for (int val : nums)
    {
        currSum += val;

        maxSum = max(currSum, maxSum);

        if (currSum < 0)
        {
            currSum = 0;
        }
    }

    cout << "Maximum Subarray Sum: " << maxSum << endl;

    return 0;
}
