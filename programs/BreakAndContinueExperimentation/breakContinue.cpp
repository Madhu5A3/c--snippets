#include <iostream>
using namespace std;

int main()
{

    //break
    for (int i = 0; i < 5; i++)
    {
        if (i == 4)
        {
            cout << i << endl;
            break;
        }
    }

    //continue
    for (int j = 0; j < 5; j++)
    {
        if (j == 2)
        {
            cout << j;
            continue;
        }
    }
    return 0;
}