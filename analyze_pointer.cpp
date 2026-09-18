#include <iostream>
using namespace std;

void analyze_pointer(int* ptr)
{
    cout << "Memory Address: " << ptr << endl;
    cout << "Value: " << *ptr << endl;
}
int main()
{
    // Stack variable
    int iValue = 50;

    cout << "Stack Variable:" << endl;
    analyze_pointer(&iValue);

    // Heap variable
    int* ptr = new int;

    *ptr = 100;

    cout << "\nHeap Variable:" << endl;
    analyze_pointer(ptr);

    delete ptr;

    return 0;
}