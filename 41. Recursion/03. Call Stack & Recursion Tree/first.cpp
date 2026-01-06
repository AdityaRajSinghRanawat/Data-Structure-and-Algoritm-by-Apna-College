#include <iostream>
using namespace std;

int main()
{
    /* 
        Call Stack:


        | {hit base case}  |  
        |__________________|
        |                  |  ^
        | printNums  n = 1 |  |
        |__________________|  |
        |                  |  |
        | printNums  n = 2 |  |
        |__________________|  | (calling upwards) [recursion]
        |                  |  |
        | printNums  n = 3 |  |
        |__________________|  |
        |                  |  |
        | printNums  n = 4 |  |   <---- created due to function calling in main
        |__________________|  |
        |                  |  |
        |      main        |  |   <---- this layer is called stack frame
        |__________________|  |

        .      Stack


        Call Stack Deletion:

        |                  |  
        |__________________|
        |                  |  
        |      empty       |
        |__________________|  |
        |                  |  |
        |      empty       |  |
        |__________________|  | (calling downwards) [backtracking]
        |                  |  | [returning value from function]
        | printNums  n = 3 |  |
        |__________________|  |
        |                  |  |
        | printNums  n = 4 |  |   
        |__________________|  |
        |                  |  |
        |      main        |  |   
        |__________________|  v

        .      Stack
    */

    /*
        Recursion Tree:

        .      main              ^
        .       |                |
        .       v                |
        .  printNums(n = 4)      |
        .       |                |   
        .       v                |
        .  printNums(n = 3)      |
        .       |                |  (backtracking)
        .       v                |
        .  printNums(n = 2)      |
        .       |                |
        .       v                |
        .  printNums(n = 1)      |
        .                        |
        .   {base case}          |

    */
    return 0;
}