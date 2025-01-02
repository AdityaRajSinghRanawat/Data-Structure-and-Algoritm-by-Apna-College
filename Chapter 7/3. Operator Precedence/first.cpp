#include <iostream>
using namespace std;

int main()
{

    /*

        # Operator Presedence:-

        Most Priority  = "!""
        Least Priority = "="

        Operators                           |   Precedence  | Associativity Order
        ---------------------------------------------------------------------------
        !, +, - (unary operators [++, --])  |   first       | [R to L]  
        *, /, %                             |   second      | [L to R]
        +, -                                |   third       | [L to R]
        <, <=, >=, >                        |   fourth      | [L to R]
        ==, !=                              |   fifth       | [L to R]
        &&                                  |   sixth       | [L to R]
        ||                                  |   seventh     | [L to R]
        =       (assignment operator)       |   last        | [R to L]
        --------------------------------------------------------------------------




        e.g. 
        5 - 2 * 6 

        Operator Precedence
        5 - (2 * 6)
        5 - 12
        -7

        // we can override this by using bracket "( )"

        e.g. 
        (5 - 2) * 6 

        (5 - 2) * 6
        3 * 6
        18







        //we can have operator of same presedence too

        e.g. 
        4 * 5 % 2

        // so rule of associativity will be applied

        // for this situationit is Left to Right

        4 * 5 % 2
        --------->
        
        (4 * 5) % 2
        20 % 2
        0

    
    */

    cout << (5 - 2 * 6) << endl;
    cout << ((5 - 2) * 6) << endl;
    cout << (4 * 5 % 2) << endl;
    
    
    return 0;
}