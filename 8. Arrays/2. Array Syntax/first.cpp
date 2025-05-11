#include <iostream>
using namespace std;

int main()
{
    /*
        Array Syntax:
        data_type array_name[array_size];


        # CREATION:-

        eg. 
        To store 5 marks, 5 different variables
        marks1, marks2, marks3, marks4, marks5

        To store 100 marks, 100 different variables not good idea
        marks1, marks2, marks3, marks4, marks5,..... marks100


        Think arrays as a continous block of memory

        for 5 marks
        ------------------------------------
        |marks1|marks2|marks3|marks4|marks5|  = 1 variable
        ------------------------------------
        
        for 100 marks
        --------------------------------------------------
        |marks1|marks2|marks3|marks4|marks5|....|marks100|  = 1 variable
        --------------------------------------------------
    
        Properties:-
        - only store same data type
        - contigious memory allocation [store liner address 101, 102, 103, 104, 105]
        - liner (straight line) data structure [one by one in line]


        Syntax:-
        int marks[5];
        ^     ^   ^
        |     |   |
        type name size
    
        1 Block Int = 4 bytes
        ------------------------------------
        |marks1|marks2|marks3|marks4|marks5|  = marks[5]
        ------------------------------------
        100      104    108    112    116

        int marks[100];
        double prices[65];
        int marks[5] = {99, 80, 90, 100, 50};
    */

    int marks[5] = {99, 80, 90, 100, 50};
    double prices[] = {129.56, 100.50, 200.99,}; // Auto-size = 3

    // VALID:-
    int age[5] = {40, 10, 20};
    
    // NOT-VALID:-
    // int age[5] = {40, 10, 20, 45, 22, 89, 99, 100, 70};


    /*
        # Access:-
        we use array index for that

        index = assigned fixed position in array
        [0 to n-1 (n = size of array)]

    
        --------------------------
        | 10 | 20 | 30 | 40 | 50 |  = 1 variable
        --------------------------
        i = 0  1    2     3    4

        marks[0] // 10
        marks[3] // 40
    */

    int profits[] = {100, 200, 300, 400, 500};
    cout << profits[0] << endl; 
    cout << profits[1] << endl; 
    cout << profits[2] << endl;
    cout << profits[3] << endl; 
    cout << profits[4] << endl; 
    
    // change value
    int loss[] = {100, 200, 300, 400, 500};
    loss[0] = 1000; // 100 => 1000
    cout << loss[0] << endl; 

    // access out of bound index
    cout << loss[16] << endl; // garbage value

    return 0;
}