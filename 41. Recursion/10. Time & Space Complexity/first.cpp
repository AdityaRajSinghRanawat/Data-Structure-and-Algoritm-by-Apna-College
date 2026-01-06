#include <iostream>
using namespace std;

int main()
{

    /*
        For Sum of N numbers:

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

        TC = total number of recurrence calls * work done in each call
        TC = n * k
        TC = O(n)

        SC = Depth of Recursion Tree * Memory in each call
        SC = n * k
        SC = O(n)
    */

    /*
        Note:

        Recursion:
        TC = O(n)
        SC = O(n)

        For loop:
        TC = O(n)
        SC = O(1)

        We observe that for sum of N numbers,
        we should prefer for-loop over recursion.

        Because for-loop space complexity is O(1),
        which is less than recursion.
    */
    return 0;
}