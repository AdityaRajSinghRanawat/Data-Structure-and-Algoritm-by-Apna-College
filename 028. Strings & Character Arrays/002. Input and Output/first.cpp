#include <iostream>
#include <limits> // for ignore

using namespace std;

int main()
{
    char spaceStr[] = "Hello World";
    cout << "Compile time string: " << spaceStr << endl; // has space

    char inputStr[50];
    cout << "Enter a string: ";
    cin >> inputStr; // stops at space
    cout << "You entered: " << inputStr << endl
         << endl;

    // Ignore the maximum amount of characters possible.
    // Because without the std::, streamsize can become ambiguous in some compilers.
    /*
        numeric_limits : a template that gives limits of data types
        std::streamsize : the type used for counting characters in streams
        .max() : gives the largest value representable
        \n : This is the delimiter to stop at.
    */
    // syntax: ignore(how many characters to ignore, stop when you see this character);
    cin.ignore(numeric_limits<std::streamsize>::max(), '\n'); // do not use "\n" because it is string not char 

    // cin.ignore();
    // to ignore the newline character left by previous cin

    /*
        When you use cin >> something, C++ stops reading at the first whitespace
        That whitespace (usually the newline \n from pressing Enter) stays in the input buffer.
    */

    /*
        Your FIRST input using: cin >> inputStr;
        Only reads until space.

        So if you typed something like:
        Hello World

        Step 1: cin >> inputStr reads:                      Hello
        Leftover buffer becomes:                            <space>World\n

        Step 2: cin.ignore() removes only ONE character:    <space>World\n
        remove first character :                            World\n

        Step 3: Now getline() sees this leftover:           World\n
        So it instantly consumes World without waiting for your input.

        That's why your getline runs automatically, without letting you type anything.


        SO USE:

        #include <limits>
        cin.ignore(numeric_limits<std::streamsize>::max(), '\n');

        This flushes everything left in buffer until newline.
    */

    // Input and output string with spaces
    /*
        cin.getline(str, len, delim);
    */

    // str : input string
    // len : maximum length to read
    // delim : delimiter character (stop point char)(default is newline '\n')

    char getlineStr[100];
    cout << "Enter a spaces (getline): ";
    cin.getline(getlineStr, 30, '\n'); // reads until newline or 30 chars
    cout << "You entered (getline): " << getlineStr << endl;
    // no need to ignore here as getline automatically flushes the buffer until newline

    char getlineDelim[100];
    cout << "Enter a spaces (getlineDelim): ";
    cin.getline(getlineDelim, 30, '$');
    cout << "You entered (getlineDelim): " << getlineDelim << endl
         << endl;
    cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
    // ignore is ussed here because lets take a example
    /*
        hi b$ye no hi

        Step 1: cin.getline(getlineDelim, 30, '$');              "hi b"
        Leftover buffer becomes:                                 "ye no hi\n"

        Step 2: cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
        Buffer:                                                  " " (empty)

        Now the buffer is clean for next input
    */

    char eachStringChar[20];
    cout << "Enter a string to print each character: ";
    cin.getline(eachStringChar, 20); // delimiter is optional, default is '\n'

    for (char ch : eachStringChar)
    {
        cout << ch << " ";
    }
    cout << endl
         << endl;

    // since size of array is 20 we have garbage values after null terminator

    return 0;
}