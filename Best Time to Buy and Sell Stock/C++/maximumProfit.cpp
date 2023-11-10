/*
Problem:-
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.



Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
Example 2:

Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transactions are done and the max profit = 0.


Constraints:

1 <= prices.length <= 105
0 <= prices[i] <= 104
*/

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int maxProfit(vector<int> &prices)
{
    // Check if the vector is empty
    if (prices.empty() || prices.size() <= 1)
    {
        return 0;
    }

    // Initialize variables
    int minPrice = prices[0];
    int maxProfit = 0;

    // Iterate through the vector
    for (int i = 1; i < prices.size(); i++)
    {
        // Update minPrice if the current price is lower
        minPrice = min(minPrice, prices[i]);

        // Update maxProfit if a better profit is found
        maxProfit = max(maxProfit, prices[i] - minPrice);
    }

    // Return the final maxProfit
    return maxProfit;
}

int main()
{
    // Example 1
    vector<int> prices1 = {7, 1, 5, 3, 6, 4};
    cout << maxProfit(prices1) << endl;
    // Output: 5

    // Example 2
    vector<int> prices2 = {7, 6, 4, 3, 1};
    cout << maxProfit(prices2) << endl;
    // Output: 0

    return 0;
}

/*
Explanation:-

-> Initialize minPrice as the first element of the vector and maxProfit as 0.

-> Iterate through the vector starting from the second element.

-> Update minPrice to be the minimum of the current minPrice and the current price in the vector.

-> Update maxProfit to be the maximum of the current maxProfit and the difference between the current price and minPrice.

-> Repeat steps 3-4 for all elements in the vector.

-> The final value of maxProfit is the result.

The time complexity of this solution is O(n), where n is the size of the input vector. This is because we iterate through the vector only once.
*/