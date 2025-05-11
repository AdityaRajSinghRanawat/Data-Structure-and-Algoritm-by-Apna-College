#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main()
{
    /*
        Problem: 121 [leetcode]
        Best Time to Buy and Sell Stock 
    */

    /*
        if (prices[i] > bestBuy)
        { 
            maxProfit = max(maxProfit, prices[i] - bestBuy);
        }
        
        e.g.
        [7, 15, 20, 11, 2]
        {7, 15} => 15 > 7 = true => maxProfit = max(0, 15 - 7) = 8
        {7, 20} => 20 > 7 = true => maxProfit = max(8, 20 - 7) = 13
        {7, 11} => 11 > 7 = true => maxProfit = max(13, 11 - 7) = 13
        {7, 2} => 2 > 7 = false => nothing
    */

    /*
        bestBuy = min(bestBuy, prices[i]);

        e.g.
        [7, 15, 20, 11, 2]
        {7, 15} => bestBuy = min(7, 15) = 7
        {7, 20} => bestBuy = min(7, 20) = 7
        {7, 11} => bestBuy = min(7, 11) = 7
        {7, 2} => bestBuy = min(7, 2) = 2    
    */

    /*
        combination of both:

        e.g.
        [7, 15, 5, 6, 3, 5]
        . ---   ----   ---
        .[pair][pair][pair]
        
        {bestBuy, prices[i]}

        {7, 15} => maxProfit = max(0, 15 - 7 [pair]) = 8
        {7, 5} => bestBuy = min(7,5) = 5 // new best buy

        {5, 6} => maxProfit = max(8, 6 - 5 [pair]) = 8
        {5, 3} => bestBuy = min(5,3) = 3 // new best buy

        {3, 5} => maxProfit = max(13, 5 - 3 [pair]) = 8
    */

    class Solution
    {
    public:
        int maxProfit(vector<int> &prices)
        {
            int maxProfit = 0, bestBuy = prices[0];

            for (int i = 1; i < prices.size(); i++)
            {
                if (prices[i] > bestBuy)
                { // profit day / sell day
                    maxProfit = max(maxProfit, prices[i] - bestBuy);
                }

                // new bestBuy day
                bestBuy = min(bestBuy, prices[i]);
            }
            return maxProfit;
        }
    };

    return 0;
}