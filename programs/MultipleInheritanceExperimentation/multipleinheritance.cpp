#include<iostream>
using namespace std;

class MultiParent1 {
    public:
        void ParentFunc1() {
            cout << "First Parent";
        }
};

class MultiParent2 {
    public:
        void ParentFunc2() {
            cout << "Second Parent";
        }
};

class MultiChild: public MultiParent1, public MultiParent2 {

};

int main() {
    MultiChild mcobj;
    mcobj.ParentFunc1();
    mcobj.ParentFunc2();
    return 0;
}