#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "enter a number : " << endl;
    cin >> n;

    for(int i = 1; i <= n; i++){
        if(i%2 == 0){
            sum += i;
        }
    }

    cout << "the sum of odd numbers is " << sum << endl;

    return 0;
}