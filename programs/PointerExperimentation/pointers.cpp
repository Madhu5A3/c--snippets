#include <iostream>
#include <string>
using namespace std;

int main()
{

    /*
        - Pointer stores the memory address of the value that it's trying to point to!!!
        - Created using * operator (asterisk)
        - points to a datatype (int/string/blah..blah type) of the same type.
    */

    string s = "Pointer";
    string *ptr = &s; //reference operator

    cout << &s << endl;
    cout << ptr << endl;

    // * (dereference operator) - get the value at the specified memory address of the datatype that the pointer is trying to point to.
    cout << *ptr << endl;

    // Modifying the pointer values. P.S. it'll also change the original variable
    *ptr = "Ohma Tokita";
    cout << *ptr << endl;
    return 0;
}