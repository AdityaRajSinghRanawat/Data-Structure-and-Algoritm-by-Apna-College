#include <iostream>
using namespace std;

int main()
{
    /*
        arr = [1, 2, 3, 4, 5]
        target = 4

        step1:-

        start = 0
        end = 4
        mid = (0 + 4) / 2 = 2

        [ 1 | 2 | 3 | 4 | 5 ]
        . ^       ^       ^
        . |       |       |
        . start  mid     end

        arr[mid] < target
        2nd half
        start = mid + 1 = 3
        end = 4

        step2:-

        start = 3
        end = 4
        mid = (3 + 4) / 2 = 3

        [ 1 | 2 | 3 | 4 | 5 ]
        .         ^   ^   ^
        .         |   |   |
        .     start  mid  end

        mid == target
        return mid
    */
    return 0;
}