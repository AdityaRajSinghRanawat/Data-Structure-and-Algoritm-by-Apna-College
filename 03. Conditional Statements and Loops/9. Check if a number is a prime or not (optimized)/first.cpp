#include <iostream>
using namespace std;

int main()
{   int num;
    bool isPrime = true;



    /*
        Factors repeat at a specific point

        factor of 2:
        2 x 1 |
        1 x 2


        factor of 6:
        1 x 6 |
        2 x 3 |
        3 x 2 
        6 x 1

        factor of 7:
        1 x 7 |
        7 x 1

        factor of 12:
        1 x 12 |
        2 x 6  |
        3 x 4  | repeat after this point
        4 x 3 
        6 x 2
        12 x 1 
    
        for num%i == 0
        it will only give zero of a number 
        lets suppose 12 
        then after 4,
        12 % 5 not going to give 0

        so any nuber n will give num % i == 0 
        when i is its factor 

        so ever number factor repearts itself
        starting from 1 till the biggest factor

        1 x n
        ..
        ..
        till the biggest factor i.e. root(n) x root(n)
        ..
        ..
        n x 1


        so to tell 12 is a non prime then we do not to divide it by 6
        we just need 2 or 3 to prove it non prime
        so we can prove it non prime with these small numbers


        so we to check 12 for
        2 to root(12)
        2 to 3.46 i.e. 2 to 3 
        
        i.e. there will a number before 3 or at 3 which will completely divide 12


        so we do not need to run our code from 
        2 to (n-1)
        instead we need to run it for
        2 to root(n)

        i.e. 
        i*i <= n
        since
        root(n)*root(n) <= n
    
    */








    cout << "enter your number :" << endl;
    cin >> num;

    for(int i = 2; i*i <= num; i++){

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