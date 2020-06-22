#include <iostream>
using namespace std;

int main()
{

    // + operator
    int x = 50;
    int y = x + 50;
    int z = x + y;

    // Arithmetic Operators
    cout << z + x << endl;
    cout << z - x << endl;
    cout << z * x << endl;
    cout << z / x << endl;
    cout << z % x << endl;
    cout << z++ << endl;
    cout << z-- << endl;

    // Assignment Operators
    int a = 20;
    a += 10;
    cout << a << endl;
    a -= 10;
    cout << a << endl;
    a *= 10;
    cout << a << endl;
    a /= 10;
    cout << a << endl;
    a %= 10;
    cout << a << endl;
    a &= 10;
    cout << a << endl;
    a |= 10;
    cout << a << endl;
    a ^= 10;
    cout << a << endl;
    a >>= 10;
    cout << a << endl;
    a <<= 10;
    cout << a << endl;

    // Comparison Operators
    int n = 5;
    int o = 6;

    cout << (n > o) << endl;
    cout << (n < o) << endl;
    cout << (n >= o) << endl;
    cout << (n <= o) << endl;
    cout << (n != o) << endl;
    cout << (n == o) << endl;

    // Logical Operators
    // int x = 5;
    cout << (x < 5 && x < 10) << endl;
    cout << (x < 5 || x < 10) << endl;
    cout << !(x < 5 && x < 10) << endl;
    cout << !(x < 5 || x < 10) << endl;
    return 0;
}
