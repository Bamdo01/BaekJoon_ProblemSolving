#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;

    size = size / 4;

    for (int i = 0; i < size; i++)
    {
        cout << "long ";
    }
    cout << "int";
}