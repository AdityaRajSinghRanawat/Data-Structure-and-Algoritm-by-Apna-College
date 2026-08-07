#include <iostream>
using namespace std;

int main()
{
    /*
        # Two's Complemet


        e.g. 
        int n = 10;

        which is equal to 1010
        it has 4 digits
        so our system will assign (2)^4 = 32 bits of spaces
        i.e.
        32 spaces <----- ___ ___ ___ _0_ _0_ _0_ _0_ _0_ _0_ _1_ _0_ _1_ _0_   
        it will assign the value from the last and remaing left side will be 0
        
        since,
        4 Bytes = 32 bits 





        But its a bit different for storing a negative number
        we will need to find its 2's complement

        e.g. 
        int n = -10;

        1. Binary of 10 = 1010
        2. We prefix it with a 0
        3. 01010
        4. This left bit i.e."0" is called MOST SIGNIFICANT BIT (MSB)
        
        MSB = 0 = negative
        MSB = 1 = positive

        5. Now its a positive number
        6. Find its complement i.e. 10101
        7. Add 1 to it i.e. 10101 + 1 = 10110
        8. Answer 10110





        # Steps to Find 2's Complement 
        (Decimal -> Binary)

        1. Binary Conversion
        2. Prefix with 0
        3. 1's Complement (0 -> 1 and 1 -> 0) 
        4. Add +1




        so we found out that for:-
        Storing  10 = 1010 
        Storing -10 = 10110

        


        # Steps to Find 2's Complement 
        (Binary -> Decimal)

        1. 1's Complement (0 -> 1 and 1 -> 0) 
        2. Add +1 
        

        e.g. 10110

        1. 1's Complement 01001
        2. Add +1 i.e. 01001 + 1 = 01010
        3. Ignoring the left side zeros, 1010
        4. i.e. 1010 = 10 
        5. We already know that is a negative number so its -10
        6. Answer -10  

    */
    return 0;
}