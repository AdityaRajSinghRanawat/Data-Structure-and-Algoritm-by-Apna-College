#include <iostream>
using namespace std;

int main()
{
    int marks[5] = {99, 80, 90, 100, 50};
    int size = 5;

    // sizeof() => give total size of array in bytes
    /*
        ----------------------------------------------
        |   10   |   20   |   30   |   40   |   50   |  = 1 variable
        ----------------------------------------------
        4 bytes   4 bytes  4 bytes  4 bytes  4 bytes = 4 * 5 = 20 bytes
        
        sizeof(marks) = 20 bytes
    */
    int sz = sizeof(marks) / sizeof(int); // 20 / 4 = 5 values
    cout << "Size of marks: " << sizeof(marks) << endl; // 20 bytes
    cout << "Size of int: " << sizeof(int) << endl; // 4 bytes
    cout << "Total number of marks: " << sz << endl; // 5 values

    // for loop [OUTPUT]
    for (int i = 0; i < sz; i++)
    {
        cout << marks[i] << endl;
    }

    // for loop [INPUT]
    int prices[5];
    cout << "Enter price: " << endl;

    for(int i = 0; i < sz; i++)
    {    
        cin >> prices[i];
    }
    
    cout << "Prices are: " << endl;
    for (int i = 0; i < sz; i++)
    {
        cout << prices[i] << endl;
    }

    return 0;
}