// Container With Most Water — Two Pointer Approach

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

    // Left pointer starts from the beginning
    int lp = 0;

    // Right pointer starts from the end
    int rp = height.size() - 1;

    // Continue until both pointers meet
    while (lp < rp)
    {
        // Calculate the width between the two pointers
        int w = rp - lp;

        // Container height is limited by the shorter line
        int ht = min(height[lp], height[rp]);

        // Calculate the current amount of water
        // Area = width × height
        int currWater = w * ht;

        // Update maximum water
        maxWater = max(maxWater, currWater);

        // Move the pointer having the smaller height
        // because moving the taller pointer cannot increase
        // the container height
        if (height[lp] < height[rp])
        {
            lp++;
        }
        else
        {
            rp--;
        }
    }

    // Print the maximum amount of water
    cout << "Maximum Water: " << maxWater << endl;

    return 0;
}
