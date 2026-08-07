#include <iostream>
using namespace std;

int main()
{   
    long int num, temp = 0, last = 0, pow = 10;

    cout << "Enter a number to be reversed: ";
    cin >> num;


    while(num != 0){
        temp *= pow;
        last = num % 10;
        temp += last;
        num /= 10;
    }

    cout << "Reverse = " << temp << endl;


    return 0;
}