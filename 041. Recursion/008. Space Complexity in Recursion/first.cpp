#include <iostream>
using namespace std;

int main()
{
    /*
        When we use loops then we only see that whether we have
        created new varialble or new stored data, inside the loop or not.

        But when we use recursion then we always consider the call stack space.
        Even when we have not created any new variable or new data inside the function.
    */

    // Space Complexity:
    /*
        Unlike TC we can choose any method:

        SC = Depth of Recursion Tree * Memory in each call

        SC = Height of Call Stack * Memory in each call


        Recursion Tree Method:

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

        SC = Depth of Recursion Tree * Memory in each call
        SC = n * Memory in each call
        SC = n * k
        SC = O(n)

        Call Stack Method:


        |        |
        |________|
        |        |
        |  n = 1 |
        |________|
        |        |
        |  n = 2 |
        |________|
        |        |
        |  n = 3 |
        |________|
        |        |
        |  n = 4 |
        |________|
        |        |
        |  main  |
        |________|

        Call Stack

        SC = Height of Call Stack * Memory in each call
        SC = n * memory in each call
        SC = n * k
        SC = O(n)
    */
    return 0;
}