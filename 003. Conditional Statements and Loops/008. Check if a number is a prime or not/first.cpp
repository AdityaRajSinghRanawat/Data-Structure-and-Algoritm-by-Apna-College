#include <iostream>
using namespace std;

int main()
{   int num;
    bool isPrime = true;

    cout << "enter your number :" << endl;
    cin >> num;

    for(int i = 2; i < num; i++){

        if(num == 1){
            isPrime = true;
            break;
        }else if(num%i == 0){
            isPrime = false;
            break;
        }

    }

    if(isPrime == true){
        cout << "number is prime" << endl;
    }else{
        cout << "number is NOT prime" << endl;
    }
    
    return 0;
}