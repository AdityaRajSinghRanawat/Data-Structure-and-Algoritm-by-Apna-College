#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int> arr, int n)
{
    /*
        [ 3 | 5 ]
        . 0   1

        n = 2

        arr[1] >= arr[0] // yes (valid)
    */

    /*
        Why included "n == 1" in base case?

        Because when, n == 1
        then,

        arr[n - 1] >= arr[n - 2]
        arr[0] >= arr[-1]

        arr[-1] is invalid
    */

    if (n == 0 || n == 1)
    {
        return true;
    }

    // in "&&" condition when any one condition is false then our code do not run further condtions
    // e.g.
    /*
        n = 2
        isEven(2) && isOdd(2) && isNatural(2) && isPrime(2)

        at "isOdd(2)"
        we know its false and "&&" means all conditions should be true
        so it will not see the remaining conditions like "isNatural(2)" and "isPrime(2)"
    */
    // thats why this will not run till the end and do not call the recussive function if first condition is false

    return ((arr[n - 1] >= arr[n - 2]) && isSorted(arr, n - 1));
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();

    // in a sorted array the next element is always greater than the current element

    cout << isSorted(arr, n) << endl;

    arr = {1, 2, 8, 4, 5};
    n = arr.size();
    cout << isSorted(arr, n) << endl;

    /*
        Time Complexity:

        .     f(5)
        .      |
        .      v
        .     f(4)
        .      |
        .      v
        .     f(3)
        .      |
        .      v
        .     f(2)
        .      |
        .      v
        .     f(1)
        .      |
        .      v
        .     f(0)

        TC = total number of calls * work done in each call
        TC = n * k
        TC = O(n)
    */
    /*
        Space Complexity:

        SC = Depth of Recursion Tree * Memory in each call
        SC = n * k
        SC = O(n)
    */

    return 0;
}