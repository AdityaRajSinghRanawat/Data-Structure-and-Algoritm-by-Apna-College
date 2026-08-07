#include <iostream>
using namespace std;

int main()
{
    /*
        arr = [6, 7, 0, 1, 2, 3, 4, 5]
        tar = 4

        we will find the mid,
        always in rotated sorted array,
        one part in left or right will be sorted


        RIGHT SORTED:-
        
        .              [.sorted array.]
        [6 | 7 | 0 | 1 | 2 | 3 | 4 | 5]
        ^            ^               ^
        |            |               |
        st          mid             end


        LEFT SORTED:-

        [.sorted array.]
        [2 | 3 | 4 | 5 | 6 | 7 | 0 | 1]
        ^            ^               ^
        |            |               |
        st          mid             end
    */

    /*
        So we can apply binary search in left/right
        sorted array, since binary search works on sorted array.


        Tartget = 4
        .              [.sorted array.]
        [6 | 7 | 0 | 1 | 2 | 3 | 4 | 5]
        ^            ^               ^
        |            |               |
        st          mid             end

        How to find which side is sorted:-

        [Left Half]
        st < mid 
        - which is not possible in sorted array so our 
        right side must be sorted

        [Right Half]
        mid < target < end [sorted array]
        - since our target value exist in right side of 
        sorted array we can easily apply binary search to right side
    */

    /*
        What if our target exist in unsorted array:-

        Target = 0
        [8 | 9 | 10 | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7]
        ^                     ^                   ^
        |                     |                   |
        st                   mid                 end

        Right side is sorted but target does not exist in mid to end
        so we need to find the target in the left side of the array 

        [8 | 9 | 10 | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7]
        ^        ^        ^
        |        |        |
        st      mid      end

        Now left side is sorted but target does not exist in
        left side so we will find it to the right side.

        [8 | 9 | 10 | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7]
        .             ^   ^
        .             |   |
        .        st=mid   end

        now our number exist at mid and start of the array
        return mid.
    */
    return 0;
}