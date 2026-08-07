#include <iostream>
using namespace std;

int main()
{
    /*
        Our number can exist at start or end index also.

        eg:-

        Start:-
        [ 0 | 1 | 1 | 2 | 2 | ........ ]

        End:-
        [ ........ | 3 | 3 | 4 | 4 | 5 ]

        or there may be condition where the 
        input is single number 

        eg:- 
        [ 1 ]


        Solution:-

        We can either check the condition 
        before the while loop or inside the while loop.

        lets go with inside the while loop case for 
        start and end index 

        and lets go with outside the while loop case
        for single element case.

        if(n == 1) {
            return A[0];
        }
            
        while(start <= end)
        {
            mid = start + (end - start)/2;

            // edge case:-
            if(mid == 0 && A[0] != A[1]) {
                return A[0];
            }
            if(mid == n-1 && A[n-1] != A[n-2]) {
                return A[n-1];
            }

            if(A[mid-1] != A[mid] != A[mid+1]) {...}
            else if(mid%2 == 0) {...}
            else {...}   
            
        }
    */
    return 0;
}