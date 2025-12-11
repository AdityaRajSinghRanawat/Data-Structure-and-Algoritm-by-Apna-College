#include <iostream>
using namespace std;

int main()
{
    // We know 2D array is stored in linear order

    // 1. Row Major Order
    // 2. Column Major Order

    /*
        1   2   3
        4   5   6
        7   8   9
    */

    // 1. Row Major Order [C++ default: Majority of programming languages]
    /*
        Stored row by row
        [  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  ]
        . 100   104   108   112   116   120   124   128   132
    */

    // 2. Column Major Order
    /*
        Stored row by row
        [  1  |  4  |  7  |  2  |  5  |  8  |  3  |  6  |  9  ]
        . 100   104   108   112   116   120   124   128   132
    */

    return 0;
}