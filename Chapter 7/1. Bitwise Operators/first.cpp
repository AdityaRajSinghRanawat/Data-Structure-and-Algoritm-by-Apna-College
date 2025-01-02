#include <iostream>
using namespace std;

int main()
{
    /*
    
        # Bitwise Operator:-

        // these are some what similar to LOGICAL "AND" and "OR"



        1. Bitwise & (AND)
        
        0 & 0 = 0
        0 & 1 = 0
        1 & 0 = 0
        1 & 1 = 1

        e.g. 
        a = 4 & b = 8
        100   &  1000 
        0100  &  1000

        .0100  
        &1000
        -------
        .0000         = (0)
        -------            10

        
        
        




        
        2. Bitwise | (OR)
        
        0 | 0 = 0
        0 | 1 = 1
        1 | 0 = 1
        1 | 1 = 1

        e.g. 
        a = 4 | b = 8
        100   |  1000 
        0100  |  1000
        
        .0100  
        |1000
        -------
        .1100   [1 X (2^3)] + [1 X (2^2)] + [1 X (2^1)] + [1 X (2^0)] = (12)
        -------                                                            10



        







        3. Bitwise ^ (XOR)

        0 ^ 0 = 0
        0 ^ 1 = 1
        1 ^ 0 = 1
        1 ^ 1 = 0

        XOR = Exclusive OR

        XOR = (A*)B + A(B*)

        same      = 0
        different = 1


        e.g. 
        a = 4 ^ b = 8
        100   ^  1000 
        0100  ^  1000
        
        .0100  
        ^1000
        -------
        .1100   [1 X (2^3)] + [1 X (2^2)] + [1 X (2^1)] + [1 X (2^0)] = (12)
        -------                                                             10











        4. Bitwise << (Left Shift Operator)

        shifts the binary numbers "n" to the left by "i", that is
        n << i


        e.g. n = 4, n << 1

        4 (decimal) = 100 (binary)

        .    _1_  _0_  _0_   (3 spaces)
        _1_  _0_  _0_  ___   (Shift by 1 Place)
        _1_  _0_  _0_  _0_   (Fill empty place with 0)

        Answer = (8)
        .           10




        e.g. n = 10, n << 2

        10 (decimal) = 1010 (binary)

        .         _1_  _0_  _1_  _0_    (3 spaces)
        _1_  _0_  _1_  _0_  ___  ___    (Shift by 1 Place)
        _1_  _0_  _1_  _0_  _0_  _0_    (Fill empty place with 0)

        Answer = (40)
        .            10

        Note:-
        It will help in future for finding if a number is:-
        1. power of 2
        2. ever or odd














        5. Bitwise >> (Right Shift Operator)

        shifts the binary numbers "n" to the right by "i", that is
        n << i


        e.g. n = 4, n >> 1

        4 (decimal) = 100 (binary)

        [_1_  _0_  _0_]        (3 spaces)
        [___  _1_  _0_]  _0_   (Shift by 1 Place) 
        [___  _1_  _0_]        (Remove the out of space digit i.e. 0) 
        [_0_  _1_  _0_]        (Fill empty place with 0)

        (010)   =  (2)
        .    2        10


        Answer = (2)
        .           10







        e.g. n = 10, n >> 2

        4 (decimal) = 100 (binary)

        [_1_  _0_  _1_  _0_]             (3 spaces)
        [___  ___  _1_  _0_]  _1_  _0_   (Shift by 1 Place) 
        [___  ___  _1_  _0_]             (Remove the out of space digit i.e. 1 and 0) 
        [_0_  _0_  _1_  _0_]             (Fill empty place with 0)

        (10)   =  (2)
        .   2       10


        Answer = (2)
        .           10





        # Logic Behind "<<" and ">>"


        1. Bitwise a << b 
        a * (2^b)

        e.g. 8 << 1
        8 = 1000
        1000 => 10000 => (16)
        .                   10 

        verify:-
        a = 8
        b = 1
        a * (2^b)
        8 * (2^1)
        8 * 2
        16
        




        
        2. Bitwise a >> b 
        a / (2^b)

        e.g. 8 >> 1
        8 = 1000
        1000 => 0100 => 100 =>(4)
        .                       10 

        verify:-
        a = 8
        b = 1
        a / (2^b)
        8 / (2^1)
        8 / 2
        4

  
    */

    int a = 4, b = 8;
    cout << (a & b) << endl;
    cout << (a | b) << endl;
    cout << (a ^ b) << endl;
    cout << endl;

    int c = 3, d = 7;
    cout << (c & d) << endl;
    cout << (c | d) << endl;
    cout << (c ^ d) << endl;
    cout << endl;

    cout << (4 << 1)  << endl;
    cout << (10 << 2) << endl;
    cout << endl;
    
    cout << (4 >> 1)  << endl;
    cout << (10 >> 2) << endl;
    cout << endl;

    
    return 0;
}