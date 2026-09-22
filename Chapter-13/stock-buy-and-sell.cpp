// Best Time to Buy and Sell Stock — Normal C++

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    // Create a vector containing stock prices
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    // Stores the maximum profit found so far
    int maxProfit = 0;

    // Assume the first price is the best buying price
    int bestBuy = prices[0];

    // Start checking from the second price
    for (int i = 1; i < prices.size(); i++)
    {
        // If today's price is greater than
        // the best buying price, we can make a profit
        if (prices[i] > bestBuy)
        {
            // Calculate today's profit
            // and update maximum profit
            maxProfit = max(maxProfit, prices[i] - bestBuy);
        }

        // Update the best buying price
        // if today's price is lower
        bestBuy = min(bestBuy, prices[i]);
    }

    // Print the maximum profit
    cout << "Maximum Profit: " << maxProfit << endl;

    return 0;
}
