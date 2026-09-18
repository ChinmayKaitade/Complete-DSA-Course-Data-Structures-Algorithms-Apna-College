// Pair Sum — Two Pointer Approach
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

    // Two pointers:
    // i starts from the beginning
    // j starts from the end
    int i = 0, j = n - 1;

    // Continue until the two pointers meet
    while (i < j)
    {
        // Calculate the sum of elements at i and j
        int pairSum = nums[i] + nums[j];

        // If sum is greater than target,
        // move the right pointer to the left
        if (pairSum > target)
        {
            j--;
        }

        // If sum is less than target,
        // move the left pointer to the right
        else if (pairSum < target)
        {
            i++;
        }

        // If sum is equal to target,
        // store both indexes
        else
        {
            ans.push_back(i);
            ans.push_back(j);

            // Return the answer
            return ans;
        }
    }

    // Return empty vector if no pair is found
    return ans;
}

int main()
{
    // Sorted vector
    vector<int> nums = {2, 7, 11, 15};

    // Target sum
    int target = 26;

    // Call pairSum function
    vector<int> ans = pairSum(nums, target);

    // Print the indexes of the pair
    cout << ans[0] << "," << ans[1] << endl;

    return 0;
}
