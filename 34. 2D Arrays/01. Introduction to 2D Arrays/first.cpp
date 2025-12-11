#include <iostream>
using namespace std;

int main()
{
    /*
        Problem: 443 [leetcode]
        String Compression
    */

    // Properties:

    // (x + y) % m = (x % m) + (y % m)
    // (x - y) % m = (x % m) - (y % m)
    // (x * y) % m = (x % m) * (y % m)
    // ((((x % m) % m) %m ) ...... = x % m

    // Example:
    // a = 100, b = 3
    // 100 % 3 = 1
    // 1 % 3 = 1
    // 1 % 3 = 1
    //.......
    // therefore, ((a % m) % m) .... = a % m

    // Example:
    // a = 8, b = 9, m = 3
    // (8 + 9) % 3 = 17 % 3 = 2
    // or
    // (8 % 3) + (9 % 3) = (2 + 0) = 2

    // Example:
    // Leetcode Problem: 850
    // Rectangle Area II

    // Question Lines: "Since the answer may be too large, return it modulo (10^9 + 7)."

    // sometimes "ans" is very large number
    // so they ask us to give "ans" as:-
    // ans % (10^9 + 7)

    // Example:
    // n = 100
    // ans = n! = 100!
    // which is very large number
    // so we will return ans % (10^9 + 7)

    // x % n = Range(0, n-1)
    // e.g.
    // 100 % 3 = Range(0, 1, 2) = 1

    // therefore, 
    // ans % (10^9 + 7)
    // will have value in range(0, 10^9 + 6)
    // and this will be a PRIME number

    return 0;
}