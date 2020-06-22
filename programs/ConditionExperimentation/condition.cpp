#include <iostream>
#include <string>
using namespace std;

int main()
{

    // Conditional Statements
    if (2 > 1)
    {
        cout << "Man Cool" << endl;
    }
    else if (2 == 2)
    {
        cout << "Fuck Off!!";
    }
    else
    {
        cout << "Snowden!!!";
    }

    // Ternary Operator - Conditional Operator
    int x = 50;
    string res = (x > 10) ? "Cool" : "JS is Cool";
    cout << res << endl;

    // Switch Statement
    int choice;
    cout << "Enter Your Choice";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "GET REQUEST";
        break;

    default:
        break;
    }
    return 0;
}