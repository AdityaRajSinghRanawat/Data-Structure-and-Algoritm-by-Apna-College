#include <iostream>
#include <string>

using namespace std;

string isArmstrong(int n){
    int sumOfCube = 0;
    int copyN = n;
    int digit;
    while(n != 0 ){
        digit = n % 10;
        sumOfCube += (digit * digit * digit);
        n /= 10; 
    }

    if(sumOfCube == copyN){
        return "Armstrong";
    } else {
        return "Not Armstrong";
    }
}

int main()
{
    int n;
    cout << "enter a number" << endl;
    cin >> n;

    cout << isArmstrong(n) << endl;

    
    return 0;
}