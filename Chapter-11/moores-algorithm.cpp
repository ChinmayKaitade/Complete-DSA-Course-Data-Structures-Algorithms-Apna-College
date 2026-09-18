#include <iostream>
#include <vector>

using namespace std;

int main()
{
     // Create a vector of integers
     vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

     // freq stores the current frequency/count
     // ans stores the current majority candidate
     int freq = 0;
     int ans = 0;

     // Traverse through every element of the vector
     for (int i = 0; i < nums.size(); i++)
     {
          // If frequency becomes 0,
          // choose the current element as a new candidate
          if (freq == 0)
          {
               ans = nums[i];
          }

          // If the current element is same as the candidate,
          // increase the frequency
          if (ans == nums[i])
          {
               freq++;
          }
          else
          {
               // If the current element is different,
               // decrease the frequency
               freq--;
          }
     }

     // Print the majority element
     cout << "Majority Element: " << ans << endl;

     return 0;
}
