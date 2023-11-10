'''
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
'''
'''
Solving Way:
To solve this problem, you can iterate through the array and keep track of the minimum price encountered so far and the maximum profit that can be obtained. Here's a simple explanation of the approach:

-> Initialize two variables, minPrice and maxProfit.

->Iterate through the array, and for each day:
    -->Update minPrice if the current price is lower than the current minPrice.
    -->Update maxProfit if the difference between the current price and minPrice is  greater than the current maxProfit.

->Return the final value of maxProfit.
'''

def maxProfit(prices):
    if not prices:
        return 0

    minPrice = prices[0]
    maxProfit = 0

    for price in prices:
        minPrice = min(minPrice, price)
        maxProfit = max(maxProfit, price - minPrice)

    return maxProfit
