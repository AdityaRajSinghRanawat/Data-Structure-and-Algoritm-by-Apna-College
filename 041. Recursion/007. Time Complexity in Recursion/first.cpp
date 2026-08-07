#include <iostream>
using namespace std;

int main()
{
    /*
        There are 2 methods to find time complexity:

        1. Recurrence Relation
        2. TC = total number of recurrence calls * work in each call

        Note:

        Recurrence Relation is mathematical based so for majority of cases,
        it is hard to implement it.

        So we use the 2nd method majorly.
    */

    // Exapmle Code:
    /*
        int factorial(int n){
            if(n == 0){
                return 1;
            }
            return n * factorial(n - 1);
        }
    */

    /*
        1. Recurrence Relation:

        f(n) = k + f(n -1)

        f(n)   = k + f(n -1)
        f(n-1) = k + f(n -2)
        f(n-2) = k + f(n -3)
        :
        :
        :
        f(1)   = k + f(0) {base case}

        let,
        f(0)   = k2

        therefore, now all the stuff gets canceled out.
        f(n) = (k + k + k + ......... n times) + k2
        f(n) = (k * n) + k2
        f(n) = n + k2   [eliminate constants]
        f(n) = n

        Note:

        It is better for Merge Sort and Fibonacci series.
        But not good for majority of cases.
    */

    /*
        2. TC = total number of recurrence calls * work in each call

        Recursion Tree:

        .  f(4)
        .   |
        .   v
        .  f(3)
        .   |
        .   v
        .  f(2)
        .   |
        .   v
        .  f(1)
        .   |
        .   v
        .  f(0) {base case}

        total calls = n + 1
        So we are calling the function "n" times (approx)

        therefore,

        TC = O((n + 1) * work in each call)
        TC = O((n + 1) * k)
        TC = O(n + 1)       [eliminate constants]
        TC = O(n)
    */

    return 0;
}