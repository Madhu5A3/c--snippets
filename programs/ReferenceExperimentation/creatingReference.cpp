#include <iostream>
#include <string>
using namespace std;

int main()
{

    // creating references
    string s = "Pizza";
    string &lunch = s;

    cout << s << endl
         << lunch;

    // Memory Address
    cout << "Memory Address "
         << " " << &s; // returns a hexadecimal form (0x...)
    return 0;
}