#include <iostream>
using namespace std;

int main()
{
    // Type Casting:
    // converting data from one type to another 

    // conversion [implicit {automatic changes by compier}]===> small to big
    // casting    [explicit {manual changes by user}]      ===> big to small

    // type conversion:
    // eg: float 3.14 (4 bytes) to double (8 bytes)
    // eg: char B (1 byte) to int (4 byte) 

    char grade = 'a'; // 97
    int value = grade;
    cout << value << endl;




    // type casting:
    
    double price = 100.99;
    // int newPrice = price; manual changes are required
    int newPrice = (int)price;
    cout << newPrice << endl; // 100 not 101 as like maths

    return 0;
}