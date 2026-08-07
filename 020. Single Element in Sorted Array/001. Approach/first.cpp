#include <iostream>
using namespace std;

int main()
{
    /*
        even length sub-array:-

        v---- left  ----v   v---- right ----v
        [ 1 | 1 | 2 | 3 | 3 | 4 | 4 | 8 | 8 ]
        ^                 ^                 ^
        |                 |                 |
        st               mid              end

        size of left/right = even

        odd length sub-array:-

        v-- left --v    v--- right  ---v
        [ 3 | 3 | 7 | 7 | 10 | 11 | 11 ]
        ^             ^                ^
        |             |                |
        st           mid             end
          
        size of left/right = odd


        Approach:-

        left/right = even
        [ 1 | 1 | 2 | 3 | 3 | 4 | 4 | 8 | 8 ]
        <---- left ---->      <--- right ---->

        A[mid - 1] = A[mid]:
        - lies in left

        A[m] = A[m + 1]:
        - lies in right


        left/right = odd
        [ 3 | 3 | 7 | 7 | 10 | 11 | 11 ]
        <-- left -->     <--- right --->

        A[mid - 1] = A[mid]:
        - lies in right

        A[m] = A[m + 1]:
        - lies in left
    */
    return 0;
}