#include <iostream>
#include <climits>

using namespace std;

int main()
{
    /*
        Problem: 7 [leetcode]
        Reverse Integer
    */

    class Solution
    {
    public:
        int reverse(int n)
        {
            int digit, revNum = 0;
            while (n != 0)
            {
                digit = n % 10;

                // Overflow:
                // revNum > INT_MAX or revNum < INT_MIN
                // Solution: add check just before the revNum updation

                // currently our "revNum" is in the range
                // if,
                // revNum * 10 > INT_MAX {to occure in NEXT STEP}
                // i.e.,
                // revNum > INT_MAX/10
                if (revNum > INT_MAX / 10 || revNum < INT_MIN / 10)
                {
                    return 0;
                }
                revNum = (revNum * 10) + digit;
                n /= 10;
            }
            return revNum;
        }
    };

    return 0;
}