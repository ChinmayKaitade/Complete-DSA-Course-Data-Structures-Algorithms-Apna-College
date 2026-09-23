// Container With Most Water — Brute Force

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    // Create a vector containing the heights of the lines
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    // Stores the maximum amount of water found
    int maxWater = 0;

    // Choose the first line
    for (int i = 0; i < height.size(); i++)
    {
        // Choose the second line
        // Start from i + 1 so we don't use the same line
        for (int j = i + 1; j < height.size(); j++)
        {
            // Calculate the width between the two lines
            int w = j - i;

            // The container height is limited by
            // the shorter of the two lines
            int ht = min(height[i], height[j]);

            // Calculate the current amount of water
            // Area = width × height
            int currWater = w * ht;

            // Update maximum water if current water is greater
            maxWater = max(maxWater, currWater);
        }
    }

    // Print the maximum amount of water
    cout << "Maximum Water: " << maxWater << endl;

    return 0;
}
