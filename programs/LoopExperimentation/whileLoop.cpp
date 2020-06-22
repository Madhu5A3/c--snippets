#include <iostream>
using namespace std;

int main()
{
    // while loop
    int i = 0;
    while (i < 5)
    {
        cout << i;
        i += 1;
    }

    //do-while loop
    int j = 0;
    do
    {
        cout << j;
        j += 1;
    } while (j < 5);

    return 0;
}