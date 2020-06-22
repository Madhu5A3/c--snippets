#include <iostream>
using namespace std;

int main()
{

    //cin uses extraction operator to read the data from the keyboard
    int x;
    cin >> x;
    cout << "x value: " << x << " ";

    // Calculator
    int a, b;
    cout << "Enter a value"
         << " ";
    cin >> a;
    cout << "Enter b value"
         << " ";
    cin >> b;
    cout << "Sum of x and y values are: " << a + b << " ";

    // reading two numbers at the same time
    cin >> a >> b;
    cout << a << b;
}