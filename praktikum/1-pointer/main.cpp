#include <iostream>
using namespace std;

int main()
{
    int data[7];

    for (int i = 0; i < 7; i++)
    {
        cout << i << " " << &data[i] << endl;
    }

    return 0;
}