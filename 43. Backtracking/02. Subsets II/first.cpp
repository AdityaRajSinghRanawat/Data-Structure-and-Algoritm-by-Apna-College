#include <iostream>
using namespace std;

int main()
{
    /*
        Problem: 509 [leetcode]
        Fibonacci Number
    */
    class Solution
    {
    public:
        int fib(int n)
        {
            // 0, 1, 1, 2, 3, 5, 8, 13
            // T(n) = T(n-1) + T(n-2)

            // Time Complexity: O(2^n)
            // Space Complexity: O(n)

            /*
                n = 4

                .              f(4)       <------ call = 1 = (2)^0
                .           /       \
                .         f(3)      f(2)     <------ call = 2 = (2)^1
                .         /  \      /   \
                .       f(2) f(1) f(1) f(0)    <------ call = 4 = (2)^2
                .      /   \       / \  / \
                .   f(1)   f(0)  {base case}     <------ call = 8 = (2)^3
                .   {base case}
            */
           
            /*
                Time Complexity:

                we form tree empty branches to make it complete tree.

                (2)^0 + (2)^1 + (2)^2 + (2)^3 + ....... = GP

                we know that,
                Sum of GP = a ((r)^n - 1) / ((r) - 1)

                Sum of GP = Total Calls = 1 ((2)^n - 1) / (2 - 1) = (2)^n - 1

                TC = Total calls * Work done in each call
                TC = ((2)^n - 1) * k
                TC = ((2)^n - 1)
                TC = O((2)^n)

                Note:
                If we do not add those empty branches " /  \ " at last
                and try to find the accurate value of fibbonaci series then
                it will be,

                TC = O((1.618)^n)

                it is also called as golden ratio.
            */

            /*
                Space Complexity:

                SC = Depth of Recursion Tree * Memory in each call
                SC = n * k
                SC = O(n)
            */

            if (n == 1 || n == 0)
            {
                return n;
            }
            return fib(n - 1) + fib(n - 2);
        }
    };
    return 0;
}