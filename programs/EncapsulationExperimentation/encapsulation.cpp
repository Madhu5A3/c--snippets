#include<iostream>
using namespace std;

class EncapsulationExperimentation {
    private:
        int num;
    public:
        void setNum(int n) {
            num = n;
        }

        int getNum(){
            return num;
        }
};

int main() {
    EncapsulationExperimentation eobj;
    eobj.setNum(5);
    cout << eobj.getNum();
    return 0;
}