#include <iostream>
using namespace std;

bool isPrime(int n){
    bool isPrime = true;
    for (int i = 2; i < n; i++){
        if(n % i == 0){
            isPrime = false;
            return isPrime;
        }
    }
    return isPrime;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    cout << isPrime(n) << endl;
    return 0;
}