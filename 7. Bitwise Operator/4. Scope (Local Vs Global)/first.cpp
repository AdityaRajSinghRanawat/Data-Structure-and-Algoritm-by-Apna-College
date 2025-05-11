#include <iostream>
using namespace std;

int globalX = 10;

void func()
{
    cout << globalX << endl;
}

void fun(int n)
{
    int m = 101;
}

int main()
{
    /*
        # Scope:-

        // we check scope generally for variables
        // it is the area where we can access/use that variable

        // is it similar to stack memory


        1. Local Scope:-

        variables which are declared in:-

        if-else
        function
        Block of Code {}



        2. Global Scope:-

        can be accessed throughout the file


        e.g. when we are making a web project
        then we need to use API
        and for that we need API Key

        we generally want that this API key can be accessed by
        all our functons in code but this dont generally happens
        because these API Keys have some sensetive files which
        are stored in ".env" file

        but if we want then we can make this Key global
        and every function in code can access it

        but this will create a security issue so we generally dont do this


    */

    // # LOCAL SCOPE:

    if (3 > 1)
    {
        int x = 10;
    }

    // cout << x << endl;
    // we going to ge error that undefined identifier x i.e. x is not defined

    if (2 > 1)
    {
        int x = 10;
    }
    else
    {
        int y = 20;
    }

    // cout << y << endl;
    // we going to ge error

    for (int i = 0; i <= 10; i++)
    {
        int z = 101;
    }

    // cout << i << endl;
    // cout << z << endl;
    // we are going to get error

    for (int i = 0; i <= 10; i++)
    {

        // 1st
        for (int j = 0; j <= 10; j++)
        {
            // code
        }

        // 2nd
        for (int j = 0; j <= 10; j++)
        {
            // code
        }
    }

    // here too in these two for loop we used same j
    // because j scope is limited to for loop 1st and 2nd

    {
        int p = 69;
    }

    // cout << p << endl;
    // we are going to get error

    fun(10);

    // cout << n << endl;
    // cout << m << endl;
    // we will get error

    // it does not matter if we call the the function "fun" or not

    // # GLOBAL SCOPE:

    // now we can access the global variable
    func();
    cout << globalX   << endl;

    // it is not necessar to use function "func"
    // we can easily use the "globalX" even without calling it

    return 0;
}