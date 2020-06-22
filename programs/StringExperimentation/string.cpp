#include <iostream>
#include <string>
using namespace std;

int main()
{

    // Strings
    string a = "Ohma Tokita";
    cout << a << endl;

    // String Concatenation
    cout << (a + " " + "Kengan Ashura") << endl;

    // Append Operation
    cout << a.append("NetFlix") << endl;

    //String Length
    cout << a.length() << endl;
    cout << a.size() << endl;

    // String Access
    cout << "Hey Let's print the first number in the string object: " << a[0] << endl;

    // Changing String Characters
    cout << (a[0] = 'M')<< " " << a << endl;

    // User Input Strings
    string b;
    cin >> b; // cin considers whitespace,tabs, etc. as terminator characters - so, Ohma Tokita will be taken as Ohma only :(
    cout << b << endl;

    // Avoiding this issue, we use getline() in case of strings - getline() function reads a line of text. It takes (cin,<user_string>) as parameters
    getline(cin, b);
    cout << b << endl;
    return 0;
}