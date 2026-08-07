#include <iostream>
using namespace std;

int factorial(int n)
{
    // since (0! = 1)
    if (n == 0)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int main()
{
    /*
        N Factorial:

        n = 4
        n! = 4! = 4 * 3 * 2 * 1

        //or
        4! = 4 * 3!
        3! = 3 * 2!
        2! = 2 * 1!
        1! = 1 {base case}

        Recursion Tree:

        .     4!
        .  f(n = 4) = 4 * f(n = 3)
        .                     |
        .                     v
        .                  3 * f(n = 2)
        .                          |
        .                          v
        .                       2 * f(n = 1)
        .                               |
        .                               v
        .                            1 * f(n = 0)
        .                                    |
        .                                    v
        .                                    1 {base case}
    */

    cout << factorial(4) << endl;

    return 0;
}