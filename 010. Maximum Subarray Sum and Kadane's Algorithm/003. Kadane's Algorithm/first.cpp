#include <iostream>
#include <climits>
using namespace std;

int main()
{
    /*
        Kadane's Algorithm:-
        (+ve) + (+ve) = (+ve)
        (Big +ve) + (-ve) = (Big +ve)
        (+ve) + (Big -ve) = (Big -ve) // instead add a 0

        i.e. Instead of adding a -ve number, we can add 0 to the (+ve) number.
        (+ve) + (0) = (Small +ve)
    */

    /*
        e.g.

        {3, -4, 5, 4, -1, 7, -8}

        3 + (-4) = -1
        now instead of adding -1 to further numbers [ 5, 4, -1, 7, -8 ]
        we can forget [3, -4] i.e. -1
        and reinitialize currentSum = 0

        now we will strart from [5, 4, -1, 7, -8] & currentSum = 0
        and forget the old values [3, -4]
    */
    
    int n = 7;
    int arr[n] = {3, -4, 5, 4, -1, 7, -8};

    int maxSum = INT_MIN;
    int currentSum = 0;
    for(int i = 0; i < n; i++){
        currentSum += arr[i];
        maxSum = max(maxSum, currentSum);
        if(currentSum < 0){
            currentSum = 0; // reinitialize currentSum to 0
        }
    }

    cout << "Maximum Subarray Sum: " << maxSum << endl;

    // Time Complexity: O(n)
    // Space Complexity: O(1)

    /*
        But we we know that 

        ///////
        if(currentSum < 0){
            currentSum = 0; // reinitialize currentSum to 0
        }
        ///////

        should come before or after

        ///////
        maxSum = max(maxSum, currentSum);
        ///////

        this comes from the edge case that when all the numbers are -ve
        i.e. [-1, -2, -3, -4, -5]
        we know that, maximum subarray sum = -ve value
        and if we reset it to 0 before maxSum = max(maxSum, currentSum);
        then we will get 0 as the maximum subarray sum which is wrong.

        Therefore, we do the reset work at the last of the program.

        ////////////////////////////////////////////////////////////
        This type of cases are called edge cases or corner cases.
        ////////////////////////////////////////////////////////////
        
    */

    

    return 0;
}