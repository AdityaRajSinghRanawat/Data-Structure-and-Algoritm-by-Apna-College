#include <iostream>
using namespace std;

int main()
{
    /*
        st = 0
        end = n -1

        while(st <= end){
            mid = st + (end - st) / 2
            
            if(A[mid] == tar) return mid
            
            // We could have removed "=" since all values are unique
            
            if(A[st] <= A[mid]) // left sorted
                if(A[st] <= tar <= A[mid]) // search in left
                    end = mid - 1
                else // search in right
                    st = mid + 1 

            else // right sorted
                if(A[mid] <= tar <= A[end]) // search in right
                    st = mid + 1
                else // search in left
                    end = mid - 1 
        }

        return -1
    */
    return 0;
}