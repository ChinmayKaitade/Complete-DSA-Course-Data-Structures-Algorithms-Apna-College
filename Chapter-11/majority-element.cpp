#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    // Create a vector of integers
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    // Store the size of the vector
    int n = nums.size();

    // Sort the vector in ascending order
    // Example: {2,2,1,1,1,2,2}
    // becomes: {1,1,1,2,2,2,2}
    sort(nums.begin(), nums.end());

    // Start frequency count from 1
    // because nums[0] is the first element
    int freq = 1;

    // Store the first element as the current answer
    int ans = nums[0];

    // Traverse the vector from the second element
    for (int i = 1; i < n; i++)
    {
        // If current element is same as previous element,
        // increase its frequency
        if (nums[i] == nums[i - 1])
        {
            freq++;
        }
        else
        {
            // If the element changes,
            // reset frequency for the new element
            freq = 1;

            // Update answer to the new element
            ans = nums[i];
        }

        // Check if current element appears
        // more than n/2 times
        if (freq > n / 2)
        {
            // Print the majority element
            cout << "Majority Element: " << ans << endl;

            // Stop the program
            return 0;
        }
    }

    // Print the answer if it wasn't returned inside the loop
    cout << "Majority Element: " << ans << endl;

    return 0;
}
