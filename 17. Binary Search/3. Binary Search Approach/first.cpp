#include <iostream>
using namespace std;

int main()
{
    /*
        arr = [-1, 0, 3, 4, 9, 12]
        target = 12

        [-1 | 0 | 3 | 4 | 9 | 12]
        st = 0   mid=3 (4)   end = n-1 (idx = 4)
        
        1) find mid
        mid = (st + end) / 2

        2) tar > arr[mid]
        2nd half
        st = mid + 1

        3) tar < arr[mid]
        1st half
        end = mid - 1

        4) tar == arr[mid]
        ans mid
    */

    /*
        [-1 | 0 | 3 | 4 | 9 | 12]
        .             ^
        .             |
        .            mid

        [4 | 9 | 12]
        .    ^
        .    |
        .   mid

        [12]
        . ^
        . |
        .mid
    */

    /*
        [-1 | 0 | 3 | 4 | 9 | 12]
        st = 0
        end = n-1
        mid = (st + end) / 2

        1st half: (st    to   mid-1)
        2nd half: (mid+1 to   end)
    */

    /*
        Why we take (start <= end):-

        example:-
        arr = [-1, 0, 3, 4, 5, 9, 12]
        target = 12

        [-1 | 0 | 3 | 4 | 5 | 9 | 12]
        . ^           ^            ^
        . |           |            |
        . start      mid          end

        [-1 | 0 | 3 | 4 | 5 | 9 | 12]
        .                 ^   ^    ^
        .                 |   |    |
        .             start  mid  end

        [-1 | 0 | 3 | 4 | 5 | 9 | 12]
        .                         ^
        .                         |
        .                   start = end

    */
   
    return 0;
}