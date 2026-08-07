#include <iostream>
using namespace std;


int findN(int term){
    int num1 = 0, num2 = 1, temp;

    for(int i = 3; i <= term;  i++){
        temp = num2;
        num2 += num1;
        num1 = temp;
    }

    return num2;
}



int main()
{
    int term;

    cout << "Enter number: ";
    cin >> term;
    
    cout << findN(term);
    
    return 0;
}