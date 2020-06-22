#include <iostream>
using namespace std;

int main()
{

    // Array Declaration - Use array literal to enter values into the array
    int a[4] = {1,
                2,
                3,
                4};

    // Accessing the elements in the array
    cout << a[0];

    // Changing the array elements
    a[0] = 0;
    cout << a[0];

    // Loop through an Array
    int arr_size = *(&a + 1) - a;
    for (int i = 0; i < arr_size; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}