#include <iostream>
using namespace std;

int main()
{   
    int num = 0;


    // while loop
    while(num <= 10){
        cout << "the number is : " << num << endl;
        num++;
    }

    // infine loop (never to use):
    /*
        while(num >= -1){
            cout << "the number is : " << num << endl;
            num++;
        }
    */





    // for
    for(int i = 0; i <= 10; i++){
        cout << i << " ";
    }

    cout << endl;
    

    for(int i = 0; i <= 50; i+=5){
        cout << i << " ";
    }

    cout << endl;


    // do while loop
    int n = 0;
    do{ 
        cout << n << " ";
        n++;
    }while(n <= 20);

    cout << endl;

    n = 0;
    do{ 
        cout << n << " ";
        n++;
    }while(n >= 20);


    // priority: for >>>>> while








    // 


    return 0;
}