#include <iostream>
using namespace std;

int factorialCal(int num){
    int fact = 1;

    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }

    return fact;
}

int nCr(int n, int r){
    int fact_n = factorialCal(n);
    int fact_r = factorialCal(r);
    int fact_nr = factorialCal(n-r);

    return (fact_n / (fact_r * fact_nr));
}

int main()
{
    int n, r;
    
    cout << "For nCr enter:" << endl;

    cout << "n = ";
    cin >> n;

    cout << "r = ";
    cin >> r;

    /*
        nCr = n!
            ---------------
            r! (n-r)!

    */

    cout << nCr(n, r) << endl;

    return 0;
}