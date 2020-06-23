#include <iostream>
using namespace std;

class ClassExperimentation
{
public:

    // Constructor
    ClassExperimentation(int num, string type) {
        cout << "Constructor Summonned";
        num = num;
        type = type;

        cout << num << " " << type << endl;
    }
    // InClass Method
    void classInMethod()
    {
        cout << "Class Experimentation";
    }

    // OutClass Method Declaration
    void classOutMethod();
    int num;
    string type;

    // class params
    int classParams(int);
};

// Outside class definition
void ClassExperimentation::classOutMethod()
{ // scope resolution operator
    cout << "Hey you're in outside class method";
}

int ClassExperimentation::classParams(int num) {
    return num;
}
int main()
{

    // DRY - DONT REPEAT YOURSELF
    // class - object constructor or a blueprint for creating objects

    // Constructor Parameters
    ClassExperimentation classobj(2,"MMK");

    classobj.num = 2;
    classobj.type = "class";

    cout << classobj.num << " " << classobj.type << endl;

    // Methods in Class
    classobj.classInMethod();

    // Methods Outside the class
    classobj.classOutMethod();

    //Adding some parameters to the class methods
    cout << classobj.classParams(25);
    return 0;
}