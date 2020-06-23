#include<iostream>
using namespace std;

class MotorCycle {
    public:
        void sound() {
            cout << "drrrrrr";
        }
};

class Bike: public MotorCycle {
    public:
        void sound() {
            cout << "dug dug";
        }
};

class Car: public MotorCycle {
    public:
        void sound() {
            cout << "vroom vroom";
        }
};

int main() {
    MotorCycle mobj;
    Bike bobj;
    Car cobj;

    mobj.sound();
    bobj.sound();
    cobj.sound();
    return 0;
}