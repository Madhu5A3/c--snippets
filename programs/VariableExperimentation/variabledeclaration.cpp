#include <iostream>
using namespace std;

int main()
{

    // int variable
    int a = 1;

    //overwriting the previous value by assigning a different value to the same variable
    a = 2;
    cout << a << endl;

    //double variable
    double b = 7.99;
    cout << b << endl;

    //char variable
    char c = 'h';
    cout << c << endl;

    //string variable
    string s = "world";
    cout << s << endl;

    //bool variable
    bool bo = true;
    cout << bo;

    // multiple printing with cout object using <<(insertion operator)
    cout << "Int Variable: " << a << endl
         << "Double Variable: " << b << endl
         << "Char Variable: " << c << endl
         << "String Variable: " << s << endl
         << "Bool Variable: " << bo << endl;

    //adding variables together
    int x = 5, y = 6;
    cout << "Sum of x and y: " << x + y;

    // Ohh man!!! I dont like a variable being overrided that easy, let's give it some shield (read only)

    const int num = 9;

    // num = 10; //psst, the compiler will fuck you with warnings, saying you can't screw up variables like that
    cout << num;
    return 0;
}