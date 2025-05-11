#include <iostream>
using namespace std;

int main()
{
    /*
        we know in binary last digit (2^0):-
        0 = even
        1 = odd

        so for decimal:-
        2 = 10  = even = last digit 0
        3 = 11  = odd = last digit 1
        4 = 100 = even = last digit 0

        so instead of converting our decimal number to binary number
        we can just do decimal number % 2
        which will act same as binary number
    */

    /*
        In case of:-

        9 = odd

        9/2 = 4.5 = 4
        4/2 = 2.0 = 2
        2/2 = 1.0 = 1

        i.e.
        9 = 1001
        4 = 100
        2 = 10
        1 = 1

        therefore we can eliminate the last binary digit by /2

        (for getting the last digit of decimal number we use to do % 10)
    */

    class Solution
    {
    public:
        double myPow(double x, int n)
        {
            long binForm = n;
            double ans = 1;

            while (binForm > 0)
            {
                if (binForm % 2 == 1)
                {
                    ans *= x;
                }
                x *= x;
                binForm /= 2;
            }
            return ans;
        }
    };

    return 0;
}