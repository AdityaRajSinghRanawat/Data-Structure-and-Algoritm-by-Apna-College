#include <iostream>
using namespace std;

int main()
{
    /*
        Problem: 50 [leetcode]
        Pow(x, n)
    */

    /*
        in constraints we are giving
        2^31 <= n <= 2^31 - 1

        i.e. x^n = 3*3*3*3*3*3*3.........n times

        so we need to traverse all n = 2^31
        and time complexity will be O(n)

        but we know that
        2^31 >>>>> 10^8 (operaion)

        Therefore TLE (Time Limit Exceeded) will occur.
    */

    /*
        n [decimal] = log2(n) + 1 [binary]

        e.g.
        n = 8 (1 digit)[decimal] => 1000 (4 digit)[binary]

        decimal digit = log2(8) + 1 = 3 + 1 = 4 [binary digit]


        so we do not need to do for-loop 2^8 = 8 times
        instead we can do it 4 times using this formula

        Time Complexity = O(logn + 1) = O(logn)
    */

    /*
        <---------------------------------
        .... x^16   x^8   x^4   x^2   x^1
        ....  1      1     1     0     1

        e.g. x^n ==> 3^5
        x = 3
        n = 5 = 101 [binary]


        3^4   3^2   3^1
        1      0     1
        ans = 3^4 * 3^1 = 3^5

        we might be thinking to find 3^4 i should do for-loop for 4 times
        but we will not do it like that

        for 3^8
        x   = 3^1 * 3^1 = 3^2
        x^2 = 3^2 * 3^2 = 3^4
        x^4 = 3^4 * 3^4 = 3^8
        x^8 = 3^8 = ans

        i.e. for finding 3^8 we do not need 8 times for-loop
        instead we need only 4 times for-loop
    */

    return 0;
}