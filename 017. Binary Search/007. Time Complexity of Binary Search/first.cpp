#include <iostream>
using namespace std;

int main()
{
    /*

        linear vs binary search time complexity:-
        array size = 10

        linear search:- 10           (search the full array)
        binary search:- 10/2 - 1 = 4 (search half array)


        search space:-

        [ | | | | | | | | | | | | | ] n
        [ | | | | | | ]               n/2
        [ | | ]                       n/4
        ....
        ....
        [ ]                           1
                                    
        or we can visualize it as:-
        n          n/(2^0)
        n/2        n/(2^1)
        n/4        n/(2^2)
        ....
        ....
        1          n/(2^k)

        total number of operation = k
        how any time should we divide n to get 2 
        that is k times

        so n/(2^k) = 1
        TIME COMPLEXITY = O(k)

        what is k:-
        n = 2^k
        log2(n) = log2(2^k)
        log2(n) = k(log2(2))
        log2(n) = k(1)
        log2(n) = k
        k = log2(n)

        TIME COMPLEXITY = O(logn)
        
    */
    return 0;
}