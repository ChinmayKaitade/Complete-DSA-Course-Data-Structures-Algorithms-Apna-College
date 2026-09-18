#include <iostream>
#include <vector>

using namespace std;

// Function to find two elements whose sum equals target
vector<int> pairSum(vector<int> nums, int target)
{
    // Vector to store the indexes of the pair
    vector<int> ans;

    // Store the size of the vector
    int n = nums.size();

    // Outer loop selects the first element
    for (int i = 0; i < n; i++)
    {
        // Inner loop selects the second element
        // Start from i + 1 so we don't use the same element twice
        for (int j = i + 1; j < n; j++)
        {
            // Check if the sum of two elements equals target
            if (nums[i] + nums[j] == target)
            {
                // Store the index of the first element
                ans.push_back(i);

                // Store the index of the second element
                ans.push_back(j);

                // Pair found, so return the answer
                return ans;
            }
        }
    }

    // Return empty vector if no pair is found
    return ans;
}

int main()
{
    // Create a vector of integers
    vector<int> nums = {2, 7, 11, 15};

    // Target sum
    int target = 9;

    // Call the pairSum function
    vector<int> ans = pairSum(nums, target);

    // Print the indexes of the pair
    cout << ans[0] << "," << ans[1] << endl;

    return 0;
}
