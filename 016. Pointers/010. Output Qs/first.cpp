#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40};
    int *ptr = arr;

    cout << *(ptr + 1) << endl; // index 1 = 20 
    cout << *(ptr + 3) << endl; // index 3 = 40
    ptr++; // ptr + 1 = index 1
    cout << *ptr << endl; // index 1 = 20
    return 0;
}