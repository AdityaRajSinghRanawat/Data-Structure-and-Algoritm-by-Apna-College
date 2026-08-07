#include <iostream>
using namespace std;

int main()
{
    /*
        For negative value of n:-

        x^(-n)

        Since our n can only be positive [while (binForm > 0)] 
        so we need to make it positive

        e.g.
        (3^-5) = 1/(3^5) now n = positive
    */

    class Solution
    {
    public:
        double myPow(double x, int n)
        {

            // corer cases (our code will still work fine without these):-
            if(n == 0) return 1.0; // 3^0 = 1
            if(x == 0) return 0.0; // 0^56 = 0
            if(x == 1) return 1.0; // 1^23 = 1
            if(x == -1 && n%2 == 0) return 1.0;  // (-1)^even =  1
            if(x == -1 && n%2 != 0) return -1.0; // (-1)^odd  = -1
            
            long binForm = n;
            
            if(binForm < 0)
            {
                binForm = -binForm; // make n = positive
                x = 1 / x;          // x^(-n) = x^(n) = 1/x^n
            }


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