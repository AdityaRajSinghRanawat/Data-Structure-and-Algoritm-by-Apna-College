#include <iostream>
using namespace std;

int main()
{
    /*
        start = 0, end = n-1

        while (start <= end)
        {
            mid = start + (end - start) / 2;

            if(A[mid-1] != A[mid] != A[mid+1])
            {
                return A[mid];
            }
            else if(mid%2 == 0) // even left/right
            {
                if(A[mid-1] == A[mid])
                {
                    end = mid - 1;
                }
                else 
                {
                    st = mid + 1;
                }
            }
            else // odd left/right
            {
                if(A[mid-1] == A[mid])
                {
                    st = mid + 1;
                }
                else 
                {
                    end = mid - 1;
                }
            }

            return -1;
        }

        TIME COMPLEXITY: O(log n)
        SPACE COMPLEXITY: O(1)
    */
    return 0;
}