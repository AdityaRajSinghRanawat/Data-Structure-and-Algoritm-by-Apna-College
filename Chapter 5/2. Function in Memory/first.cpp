#include <iostream>
using namespace std;

int func()
{
    return 2;
    cout << "hello\n";
}

int main()
{

    /*
        // anything in memory is stored in 2 ways:

        // 1. STACK MEMORY (used for STATIC MEMORY ALLOCATION)
        // 2. HEEP MEMORY  (used for DYNAMIC MEMORY ALLOCATION)




        // the function is stored in memory as stack

        sum is called by main function
        but who calls main?
        main function is called by compiler internally








        e.g.

        int sum(int a, int b){
            return (a+b);
        }
        int main(){
            int x = 25;
            sum(3,5);
            return 0;
        }



        |                                |
        |                                |
        |                                |
        |                                |
        |________________________________|
        |   sum function                 |
        |                                |   <---- created due to function calling in main
        |       a = 3      b = 5         |
        |________________________________|
        |   main function                |
        |                                |   <---- this layer is called stack frame
        |       x = 25                   |
        |________________________________|


        Above figure is called call stack (stack)

        when the sum function ends and return 8 value to the main function,
        then the sum function gets deleted from this stack

        and now we cant access variable like these a and b in main function
        because now they do not exist in the main memory









        e.g.
        int abc(int y){
            return y;
        }

        int sum(int a, int b){
            abc(2);
            return (a+b);
        }
        int main(){
            int x = 25;
            sum(3,5);
            return 0;
        }



        |                                |
        |                                |
        |________________________________|
        |   abc function                 |
        |                                |   <---- created due to function calling in sum
        |       y =  2                   |
        |________________________________|
        |   sum function                 |
        |                                |   <---- created due to function calling in main
        |       a = 3      b = 5         |
        |________________________________|
        |   main function                |
        |                                |   <---- these layers are called stack frame
        |       x = 25                   |
        |________________________________|


        after these function return a value then they will be removed from the stack memory

        e.g.
        abc function return 2 and gets deleted
        sum function return 8 and gets deleted
        main function return 0 and gets deleted
        and finally our stack empties out




        // return statement is the final statement so nothing is executed after return

        e.g.

        int func(){
            return 2;
            cout << "hello\n";
        }

        int main(){
            cout << func();
            return 0;
        }

        OUTPUT:
        2
    */

    cout << func();

    return 0;
}