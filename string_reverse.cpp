#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int size;

    cout << "Enter string size: ";
    cin >> size;

    char* str = new char[size + 1];

    cout << "Enter string: ";
    cin >> str;

    cout << "Reversed string: ";

    for (int i = strlen(str) - 1; i >= 0; i--)
    {
        cout << str[i];
    }

    cout << endl;

    delete[] str;

    return 0;
}