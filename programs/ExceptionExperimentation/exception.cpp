#include<iostream>
using namespace std;

int main() {
    try {
        int age = 15;
        if(age > 18) {
            cout << "Exception Occurred: age limit exceeded";
        } else {
            throw(age);
        }
    } catch (int e) {
        cout << "Exception Occurred" << e;
    }

    // Handle Any Type of Exceptions (...)
    return 0;
}