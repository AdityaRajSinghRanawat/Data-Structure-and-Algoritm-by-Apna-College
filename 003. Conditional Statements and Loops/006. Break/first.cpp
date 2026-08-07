#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "enter a number : " << endl;
    cin >> n;

    for(int i = 1; i <= n; i++){
        sum += i;
        if(i == 5){
            // break is a reserved keyword
            // it exits the loop
            break; 
        }
    }

    cout << "the sum of first 5 numbers is " << sum << endl;
    return 0;
}