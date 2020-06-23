#include<iostream>
using namespace std;

// base class
class InheritanceParent {
    public:
        int num;
        int getNum(){
            return num;
        }
};

// child class
class InheritanceChild: public InheritanceParent {
    public:
        // InheritanceParent.g
        string child;
};

int main() {
    InheritanceChild icobj;
    cout << icobj.getNum() << endl;
    cout << (icobj.child = "CHILD") << endl;
    return 0;
}