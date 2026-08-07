#include <iostream>
#include <climits>

using namespace std;

int main()
{
    /*
        Problem: 9 [leetcode]
        Palindrome Number
    */
    class Solution
    {
    public:
        bool isPalindrome(int n)
        {
            // palindrome is always calculated for the positive numbers
            if (n < 0)
            {
                return false;
            }

            int digit, revNum = 0, copyN = n;

            while (n != 0)
            {
                digit = n % 10;
                if (revNum > INT_MAX / 10 || revNum < INT_MIN / 10)
                {
                    return 0;
                }
                revNum = (revNum * 10) + digit;
                n /= 10;
            }

            return revNum == copyN;
        }
    };

    return 0;
}