#include <iostream>
#include <string>
using namespace std;

// Function Declaration
void demoFunction();
string demoName(string);
string demoMulParam(string, int);
void swapNums(int &, int &);
int addNum(int,int);
double addNum(double,double);


int main()
{
    demoFunction();
    string s = demoName("Madhu"); //arguments
    string s1 = demoMulParam("Kiran", 22);
    int x = 5, y = 2;
    swapNums(x, y);
    cout << x << y << endl;

    // Function Overloading
    int a = addNum(2,3);
    double b = addNum(4.99,5.55);
    cout << a << b;
    return 0;
}

// Function Definition
void demoFunction()
{
    cout << "Im Summonned";
}
string demoName(string fname)
{ //parameters - variables inside the function
    cout << fname;
    return fname;
}
string demoMulParam(string name, int age)
{
    cout << name << " " << age << endl;
    return name;
}
void swapNums(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}

int addNum(int a, int b) {
    return a+b;
}

double addNum(double a, double b) {
    return a+b;
}